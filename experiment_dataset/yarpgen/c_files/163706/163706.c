/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(var_4, ((1459348449 ? 10464186136129353358 : -119))))) ? ((-(var_4 + var_6))) : (((var_2 - var_2) - -var_7)));
    var_11 -= (((max((~11), (((var_8 ? -6528781161845180041 : var_2))))) >> ((((var_7 | (max(var_6, var_5)))) - 8997153117566920662))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = -10464186136129353356;
                var_13 = (arr_0 [8]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (arr_9 [i_1] [i_1] [1] [i_3] [i_3] [10])));
                            var_15 = (!4);
                            arr_10 [i_0] [i_2] [18] [i_0] = ((((((((1295915247 ? (arr_1 [i_0] [i_0]) : (arr_6 [i_0] [0] [16])))) ? 1792 : ((711762644 / (arr_9 [i_0] [i_0] [i_1 + 1] [i_1] [i_0] [i_0])))))) || (((((((arr_8 [7] [7] [7] [i_3] [i_3]) ? 2097151 : (arr_5 [i_0] [i_0] [i_2])))) ? ((3985530030685229909 * (arr_5 [i_0] [i_0] [15]))) : ((((!(arr_4 [0] [4] [i_1 + 2]))))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_16 = (-(((((var_8 ? (arr_8 [16] [i_5] [i_5] [i_6] [17]) : (arr_8 [i_4] [1] [i_4] [i_4] [i_4])))) ? ((var_5 ? (arr_15 [i_4] [8] [3]) : 18446744073709551615)) : (((min((arr_5 [i_4] [i_6] [i_4]), var_6)))))));
                        var_17 = (((max(-15645581384428845983, (max((arr_11 [i_5]), 119))))) ? (((-118 ? -var_1 : (arr_7 [5] [i_5] [i_6 - 1] [16] [i_7] [i_7])))) : (min((((var_9 ? (arr_8 [i_4] [i_4] [i_5] [i_6] [i_7]) : var_8))), (max((arr_1 [i_5] [i_6]), (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [0]))))));
                    }
                }
            }
        }
        var_18 = (min(var_18, (arr_19 [i_4] [i_4] [i_4] [i_4])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    {
                        var_19 = ((((!(arr_8 [i_4] [i_4] [i_8] [i_9] [i_8])))));
                        var_20 *= (((-(arr_6 [i_9] [21] [i_9]))));
                    }
                }
            }
        }
        arr_30 [i_4] = (((max((arr_14 [i_4] [i_4] [i_4]), ((~(arr_0 [i_4])))))) ? ((var_3 & (((arr_13 [i_4]) & (arr_17 [i_4]))))) : (~4292870145));
    }
    #pragma endscop
}
