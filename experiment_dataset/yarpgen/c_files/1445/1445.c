/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-32527 ? 54 : var_3));
    var_17 = ((((((var_4 % 15) ? (~var_9) : var_4))) ? ((min(231, 247))) : -8591));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_2] = (((arr_1 [i_1] [i_0]) ? -27 : ((27 ? 2038063418 : -8598))));
                    var_18 = (min(var_18, var_15));
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_0 - 2] [i_3] [i_3] [i_4] = 16;
                        var_19 = 20222;
                    }
                    var_20 = (((((var_11 ? ((var_7 ? 241 : (arr_5 [i_3 + 2] [i_3] [16] [i_0]))) : var_3))) ? ((((-1567992052399665300 || (((var_13 ? var_3 : 29132))))))) : ((176755111 % (arr_4 [i_0 + 1] [i_0 - 1])))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_21 = (min((((var_10 ? ((8591 ? 82 : 0)) : 1))), ((var_14 + ((2410416866165328889 ? (arr_0 [i_0] [4]) : 659355531))))));

                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_22 = var_11;
                        arr_21 [i_0] [i_5] [i_1] [i_0] = var_5;
                        var_23 = (max(var_23, (arr_10 [3] [i_0 - 1] [i_6 + 1])));
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = 49531;
                            arr_26 [i_1] [i_7] [14] = -4;
                            arr_27 [i_8 - 1] [i_7] [i_1] [i_7] [i_0] = (((((((~1) || -8591)))) % ((-18511 ? 1 : var_9))));
                            arr_28 [i_0] [4] [i_8] [i_7] = (((-13792 || 35184372087808) ? (arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2]) : ((((arr_9 [i_0 - 2]) ? var_5 : var_15)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
