/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, 9179436897236269179));
                            arr_9 [i_0] [i_1] [i_2 - 3] [i_2 - 3] = var_6;

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_21 &= (!var_6);
                                arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] = (-1715286662 & 0);
                                var_22 &= (arr_8 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4]);
                                var_23 = (min(var_23, (arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_3 + 2])));
                                var_24 = (arr_5 [i_3 - 1] [i_3 - 1] [i_4] [i_4 + 2]);
                            }

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3 + 2] [i_0] [i_3] = (arr_4 [i_3] [i_5]);
                                var_25 &= (((~var_5) ? (((var_7 ? var_10 : var_17))) : (arr_6 [i_5])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_26 &= (((!(-132528832 | var_17))));
                            var_27 = var_3;
                            var_28 = max((arr_20 [i_7] [i_6]), (((((0 ? var_11 : 1))) | ((726107683 & (arr_5 [i_0 - 2] [i_1] [i_6] [7]))))));
                            var_29 = 1;
                            var_30 = (min(var_30, (min(var_11, 132528832))));
                        }
                    }
                }
                var_31 = ((var_16 ? (((((arr_21 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]) != 18446744073709551615)))) : ((536870908 ? (min(var_2, var_1)) : var_9))));
            }
        }
    }
    var_32 = (min(var_32, var_4));
    var_33 = (max(var_33, var_13));
    var_34 &= (max(2882, 0));
    var_35 &= min(((max((var_3 & 7095), ((-455238420 ? var_15 : var_1))))), (min(var_0, ((18446744073709551612 ? var_17 : 17005387153427441378)))));
    #pragma endscop
}
