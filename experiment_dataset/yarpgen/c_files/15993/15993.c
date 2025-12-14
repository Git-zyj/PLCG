/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_4 ? var_12 : 214))) ? var_17 : ((var_15 - ((var_7 ? 3790456492 : var_16))))));
    var_19 = ((var_8 ? (min(var_15, var_14)) : ((min(30054, ((var_13 ? var_7 : 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (~var_11);
        var_21 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_22 = var_2;
                        var_23 |= (((arr_11 [i_1] [i_3] [i_2] [i_1]) % var_9));
                        var_24 |= (!var_12);
                    }
                    var_25 |= ((-(arr_8 [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_26 = ((4043123794959859377 <= (arr_5 [i_5 + 1])));
                                arr_20 [i_2] = var_13;
                                arr_21 [i_6] [i_5] [i_1] [i_1] [i_1] |= var_2;
                                var_27 = ((198 ? -4429781950786060855 : 15964908));
                            }
                        }
                    }
                    arr_22 [i_2] [i_2] [i_3] [i_1] = (30151 ? 0 : var_13);
                    var_28 = (((arr_17 [i_1] [i_2] [i_2] [1] [i_2] [13] [i_1]) ? (((arr_10 [i_1] [i_3] [i_2] [i_2]) ? (arr_8 [12] [i_2] [i_3]) : 50)) : var_2));
                }
            }
        }
        var_29 |= var_12;
    }
    #pragma endscop
}
