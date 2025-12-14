/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 255;
    var_19 -= (1 && var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [1] = (((((!(arr_1 [i_1 + 1])))) + ((255 * (arr_5 [i_1 + 2])))));
                    var_20 = (min(var_20, (1 <= 1)));
                    var_21 ^= var_10;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_22 *= (((arr_8 [i_3 + 1]) / (max((((-12 ? 95 : 30))), (arr_8 [i_3 + 1])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [12] [i_4] [i_5] [i_6] [12] = (56215 / var_9);
                                var_23 -= 19;
                                arr_20 [7] = ((-(max(var_6, (min((arr_8 [i_3]), var_6))))));
                            }
                        }
                    }
                    var_24 = ((((((arr_9 [i_3] [i_3] [i_5]) < (((min((arr_10 [i_4] [i_4] [i_3]), -31))))))) / ((((((arr_7 [i_3]) ? (arr_16 [i_5 - 2] [i_5] [i_5] [i_4] [i_4] [i_3]) : 1))) ? (((133 || (arr_12 [i_4] [i_5])))) : (((arr_11 [i_3] [i_3]) / (arr_18 [i_3 - 2] [14] [i_3] [i_3 - 2])))))));
                }
            }
        }
        arr_21 [13] = (arr_11 [i_3] [i_3]);
        var_25 -= ((var_12 << (((arr_14 [i_3] [i_3] [i_3] [i_3 - 2]) + 100))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_34 [i_3] [i_8] [i_9] [i_10] [10] = ((((min(4070059929, (arr_15 [i_11] [i_10] [i_8] [i_8] [i_3])))) ? (((((3478 ? -120 : 65535))) ? (((1 / (arr_22 [1] [8] [i_11 - 1])))) : (arr_8 [i_9]))) : (((((arr_33 [i_3] [i_3] [i_9] [i_10] [i_11]) > (((arr_27 [i_10 + 4] [i_9] [i_8 + 3]) ? (arr_25 [i_3] [i_9] [i_10] [i_3]) : (arr_33 [i_3] [i_8] [i_3] [i_8] [i_11])))))))));
                                arr_35 [i_3] [14] = (((((1740900218590361313 ? (39255 * 117) : -775700928214037983))) ? (183 % 1) : var_4));
                                arr_36 [i_3] [i_8] [i_9] [i_10] [i_8] [i_8] = var_15;
                                var_26 = (183 << 0);
                            }
                        }
                    }
                    var_27 -= ((((-(1 + 0)))) ? (arr_18 [i_9] [i_8] [i_3] [i_3 - 1]) : (!0));
                    var_28 = ((20995 & (((arr_24 [i_3 - 1]) + 238))));
                }
            }
        }
    }
    #pragma endscop
}
