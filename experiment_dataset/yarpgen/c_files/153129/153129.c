/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_6;
        var_17 ^= 23592;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] = ((23592 * (max(((min((arr_3 [3]), var_3))), (((arr_2 [i_1]) * var_0))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = (((min(20883, (31 * 41945))) * (min((arr_9 [i_3] [13] [i_3]), (arr_3 [6])))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_18 ^= var_2;
                        arr_14 [i_1] [i_1] [i_1] [i_3] = max(76, 221);
                        var_19 ^= ((64 ? (arr_5 [i_4]) : (((arr_7 [i_1] [i_1] [i_1]) * ((max(41924, 179)))))));
                        var_20 ^= min((arr_8 [i_1] [i_2]), (max(57483, -31)));
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_21 = arr_3 [i_2];
                        arr_17 [i_1] [i_1] [i_1] [i_3] = var_14;
                        arr_18 [i_1] [i_3] [i_3] [i_3] = (min(20901, (((arr_5 [i_3]) ? (max((arr_16 [i_3] [i_2] [7] [i_5]), var_4)) : (((arr_8 [i_1] [i_1]) * (arr_13 [13] [i_1] [i_1] [i_3] [i_5])))))));
                    }

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_21 [i_3] [i_3] [i_6] = var_9;
                        arr_22 [i_3] [i_3] [i_2] [i_3] [18] [i_6] = 20902;
                        var_22 *= (max((!var_9), var_8));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_23 *= (min(41962, ((((min(var_6, 23601))) * (!23592)))));
                        arr_25 [i_1] [i_1] [i_3] = -20901;
                        var_24 = ((((((arr_2 [i_7]) ? (arr_15 [i_2] [2] [i_7]) : var_2)) / -8)));
                        var_25 = arr_7 [i_2] [i_2] [i_1];

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_29 [i_3] [i_7] [17] [i_3] = (arr_23 [i_1] [i_1] [i_3] [i_3] [i_7] [14]);
                            var_26 = (arr_10 [i_1]);
                            arr_30 [i_3] [i_2] = var_14;
                        }
                    }
                    var_27 *= ((220 ? 9 : 220));
                }
            }
        }
    }
    var_28 ^= ((-(var_0 * var_10)));
    #pragma endscop
}
