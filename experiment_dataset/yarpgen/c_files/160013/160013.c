/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (((61645 ^ 255) << (32 - 24)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (!var_2);
                                arr_12 [i_2] [5] [5] [i_3] [i_2] [1] = 1;
                                arr_13 [0] [i_2] [6] [i_4] = (((((max(29, 158)))) ^ (max(0, (arr_1 [i_2 + 1])))));
                                var_16 += var_11;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 -= -0;
                        var_18 = (~-11);
                    }
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_19 -= ((((max(255, 0))) ? 1 : ((-(arr_11 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7] [i_6])))));
            var_20 = (max(var_20, (arr_1 [i_7])));
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_21 = (((arr_8 [i_6]) ? (~1) : (arr_23 [i_6])));
            arr_26 [i_6] [i_8] = var_10;
        }
        var_22 = 1;
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_23 = ((var_1 ? ((max((arr_29 [i_9]), 1))) : (var_11 - 227)));
        var_24 = ((!((((var_7 ? var_7 : 1))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_32 [i_10] = ((((!(((1 ? 227 : 173))))) ? ((((min((arr_27 [i_10]), var_8))))) : (+-1278686284060623432)));
        var_25 *= ((((-(arr_30 [i_10] [16]))) > 83));
    }
    #pragma endscop
}
