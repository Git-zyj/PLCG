/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((~(~2147483647)));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_21 = var_1;
        var_22 = ((min(((-1 ? 3623731436659820604 : 4294967295)), 0)));
        var_23 *= ((((((((3623731436659820604 ? (arr_2 [i_0]) : 15))) ? (((arr_1 [i_0 + 1]) ? (arr_1 [i_0]) : (arr_0 [i_0 - 1] [i_0 - 1]))) : ((var_0 ? var_12 : var_11))))) ? (~var_9) : ((23 ? (arr_0 [i_0 - 1] [1]) : 31))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_24 = (min(var_24, ((min(((((255 ? 4294967283 : var_0)))), (arr_4 [i_1 + 1]))))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_8 [0] = (((!var_13) ? (min(((var_3 | (arr_5 [i_2] [8] [i_1]))), 4294967282)) : (arr_6 [i_1] [i_2] [i_2])));
            var_25 *= (((113 ? var_6 : (arr_3 [i_1 - 1]))));
            var_26 = 9223372036854775807;
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_27 += ((511 != (arr_10 [i_3] [i_3])));
        var_28 = (((arr_10 [i_3] [i_3]) ? (arr_9 [i_3]) : 48));
    }
    var_29 = (((var_0 - -var_19) ? (min(var_1, var_17)) : var_15));
    #pragma endscop
}
