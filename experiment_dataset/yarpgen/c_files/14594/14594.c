/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_16 * var_9) <= var_7));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 |= (((((arr_0 [i_0] [i_0]) + (arr_1 [i_0] [i_0]))) - (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_20 = var_16;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((((((arr_1 [i_1] [i_2]) >= (arr_0 [14] [i_2])))) & (arr_1 [i_1] [i_2])));
            var_22 = (max(0, 0));
            arr_6 [i_1] [i_1] = var_8;
        }
        var_23 = ((-6379942384308718825 ? ((1274061282 ? (arr_3 [i_1]) : (arr_3 [i_1]))) : ((((arr_3 [i_1]) != (arr_3 [i_1]))))));
        arr_7 [i_1] = (arr_1 [i_1] [i_1]);
        arr_8 [i_1] [i_1] = (((((arr_3 [i_1]) * (arr_5 [i_1]))) < ((((arr_3 [i_1]) <= (arr_1 [i_1] [i_1]))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_24 = var_3;
        var_25 = (arr_2 [i_3]);
        var_26 = arr_3 [i_3];
    }
    var_27 = (~255);
    #pragma endscop
}
