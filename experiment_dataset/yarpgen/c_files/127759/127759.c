/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2] [6] = (((((var_7 * ((max(-3530189623712139081, 3530189623712139061)))))) ? (~var_10) : (((-((min(40800, var_1))))))));
                                var_15 *= ((((!(arr_1 [i_4 + 1] [i_4 - 1]))) ? (arr_7 [i_2] [i_1]) : (max(var_13, (arr_9 [i_3] [i_4] [i_4] [i_4 + 1] [i_4])))));
                                var_16 = (min((((432345564227567616 ? -3530189623712139081 : 1))), (((24731 || (arr_8 [i_0] [1] [i_0]))))));
                                var_17 -= var_5;
                            }
                        }
                    }
                    arr_11 [8] [i_2] [i_2] [i_2] = (min(18014398509481983997, 0));
                    arr_12 [i_0] [i_1] [i_2] = (arr_1 [9] [i_1]);
                }
            }
        }
        var_18 = 1065042366;
        var_19 *= 255;
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_22 [i_7] [0] [i_6] [i_6] [6] [i_6] = ((~(((arr_16 [i_7]) - (arr_4 [i_5 - 1] [i_6])))));
                        var_20 = ((((~(arr_5 [i_7])))) ? (((min((!var_1), var_5)))) : (-950213649 | var_14));
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = (((!(arr_1 [i_0] [6]))));
    }
    var_21 -= (max(var_9, ((!(((var_11 ? var_6 : var_7)))))));
    #pragma endscop
}
