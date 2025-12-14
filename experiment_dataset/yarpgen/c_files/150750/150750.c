/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_3;

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 |= (((max((arr_0 [i_0] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 + 1]))) <= (arr_0 [i_0] [i_0 - 2])));
        arr_3 [i_0] |= ((((2097088 ? (arr_1 [i_0 - 2]) : -2097102)) / 4158337437));
        arr_4 [i_0] [i_0] = (((((((var_2 && (arr_0 [i_0] [i_0]))) ? ((max(1601447902, var_3))) : (((arr_1 [i_0 - 2]) / (arr_2 [i_0] [i_0])))))) ? var_1 : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((!var_10) * -248));
        var_14 = (~var_5);

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_15 = ((var_10 ? (arr_9 [i_2] [i_1] [i_2 - 1]) : (arr_9 [i_2] [i_2] [i_2 + 1])));
            arr_11 [i_1] &= (((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 2]) : (arr_1 [i_1 + 1])));
            arr_12 [i_2] [i_2] = (arr_9 [i_2] [i_1 - 1] [i_2 + 1]);
        }
        var_16 = (max(var_16, ((((arr_10 [i_1] [i_1 - 2] [i_1 - 2]) + (arr_10 [i_1] [i_1 - 1] [i_1 - 1]))))));
    }
    var_17 = 9360562696422854701;
    #pragma endscop
}
