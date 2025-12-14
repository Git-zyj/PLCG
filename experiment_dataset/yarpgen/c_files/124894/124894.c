/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 * (max(var_0, (0 / 53250)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] = -7901850648898010776;
                                arr_15 [i_0] [i_1] [3] [3] [3] = ((102 | (((~12285) ^ (-2098784646995899102 ^ 67108863)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_5] [i_1] [i_1 - 1] [8] = ((-(arr_13 [i_0 + 1] [i_1] [i_2] [8] [i_1])));
                                arr_23 [i_1] [4] = ((~(-32761 ^ 511)));
                                arr_24 [i_1] [i_1] [16] = (((((var_10 != (!33554431)))) + (((!(((4294967295 ? 53258 : (arr_4 [i_1] [i_2] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_0 + 1] = (min((((!(53239 * 4168814617)))), (((arr_0 [0]) & (var_6 * var_7)))));
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_7] = (((-18 ? (29972 / var_10) : (arr_13 [16] [i_8] [i_8] [16] [i_7]))));
                    arr_34 [i_7] [i_7] = ((~(205 && -1261194504)));
                    arr_35 [14] [i_8] [i_8] [i_7] = var_4;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 16;i_12 += 1)
                {
                    {
                        arr_45 [i_12] [i_7 + 1] [i_7 + 1] [i_11] [i_11] [i_11] = (~102);
                        arr_46 [i_7] [i_7 - 1] [i_7] [i_7] = ((29972 << (255 - 245)));
                        arr_47 [i_10] [i_7] = ((((((var_5 / var_1) && (1313929098056465855 * -4051)))) * (((~177) ? (!var_0) : -32761))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    arr_52 [i_7] = -32738;
                    arr_53 [i_7] [i_13] [i_7] = 15502424023434132065;
                }
            }
        }
    }
    #pragma endscop
}
