/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_20 -= ((((((!var_5) ? (max(var_4, var_7)) : (!var_12)))) ? ((((!(-9223372036854775807 - 1))) ? (max(-8419051263154030995, 1)) : 7)) : (min(((max(32758, 45710))), (max(var_9, var_7))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (min((max(-var_12, ((max(var_18, var_14))))), (max(((var_10 ? var_12 : var_18)), ((max(var_10, var_16)))))));
                    arr_8 [i_0] [i_0] [i_2] = (min(((~((var_18 ? var_18 : var_14)))), (min(((9429 ? 0 : 19825)), -45710))));
                    arr_9 [i_0] [i_0] = max((min(3798499007, 2194728288256)), (((-(max(var_11, -64715123))))));
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] = (min((min((min(var_12, var_0)), ((max(-24341, 264241152))))), ((min((((var_11 ? var_14 : var_2))), (min(var_10, var_9)))))));
                                arr_18 [i_0] [3] [i_1] [i_3] [i_0] [3] = var_18;
                            }
                        }
                    }
                    var_21 = (((((((max(var_8, var_14))) ? (min(var_0, var_13)) : ((min(-356274680, -18247)))))) ? ((max((!var_16), ((var_11 ? var_9 : var_4))))) : (~var_7)));
                    arr_19 [i_0] = (-var_9 ? (max(-var_8, (max(var_12, var_12)))) : var_2);
                    var_22 += ((~((-var_18 ? ((min(var_13, var_9))) : var_7))));
                }
                var_23 = var_18;
            }
        }
    }
    var_24 = (min(var_24, ((max(var_18, (min(var_19, ((var_0 ? var_11 : var_1)))))))));
    var_25 = (max(((((max(var_0, var_16))) ? var_9 : ((var_13 ? var_9 : var_18)))), (((max(var_16, var_13))))));
    #pragma endscop
}
