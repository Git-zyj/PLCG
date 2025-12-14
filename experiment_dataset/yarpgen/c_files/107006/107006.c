/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((max(var_2, var_10))) ? ((-var_7 ? var_2 : (~var_15))) : ((min(var_15, ((-65 ? -7575547547071543230 : 85)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_19 += ((~(max(-var_1, (arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 = ((-(((~var_14) ? (arr_2 [i_1]) : var_8))));
            arr_7 [i_0] [i_1] [i_1] = ((-(((arr_5 [i_1] [i_1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1])))));
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (arr_3 [i_2] [i_2]);
        var_21 = ((-(((arr_8 [i_2]) ? ((min(var_0, var_15))) : ((min(-83, var_9)))))));
        var_22 ^= ((max((((arr_5 [i_2] [3]) ? (arr_9 [4]) : var_8)), (((var_10 || (arr_10 [i_2])))))));
        var_23 = ((~((((var_13 >> (((arr_0 [i_2]) + 88))))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_24 |= (arr_4 [i_3] [i_3]);
        var_25 = (arr_10 [i_3]);
    }
    var_26 = var_12;
    var_27 = var_0;
    #pragma endscop
}
