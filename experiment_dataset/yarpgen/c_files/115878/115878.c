/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_14));
    var_16 = 2518127472024949275;
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = 2518127472024949275;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 = var_12;
                        arr_13 [i_0] [i_3] [i_1] = (~((((((~(arr_4 [i_3])))) && (~3)))));
                        var_20 = (max(var_20, (((((((~-1076225353) % (arr_10 [i_2])))) * (max((max(15928616601684602321, (arr_8 [i_0]))), 6019513951198815278)))))));
                    }
                    arr_14 [21] [i_1] [i_0] |= 1048575;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_21 = (~(arr_9 [i_0] [i_0]));
                                arr_21 [i_0] [i_0] [i_2] [i_4 + 1] [i_5] = ((~((+((((arr_6 [i_2] [i_2]) > (arr_19 [i_5] [i_4] [i_0] [i_1] [i_1] [i_0]))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_4] [16] [i_4 + 1]) != ((var_8 ? (8716873621926133620 % 4397509640192) : 4080))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_22 ^= ((-(max(8716873621926133605, (max((arr_27 [i_0] [i_1] [i_6] [i_1] [i_6] [i_0]), var_1))))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = max((((arr_7 [14] [i_7] [i_6]) ? (arr_7 [i_0] [i_1] [i_6]) : (arr_7 [9] [i_1] [i_1]))), ((((arr_7 [21] [i_1] [i_1]) < (arr_7 [i_7] [i_6] [i_1])))));
                        arr_30 [i_6] [i_1] [i_0] = ((!((((arr_18 [i_0] [i_0] [i_1] [i_6] [i_6] [i_0]) % (arr_4 [i_6]))))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_23 |= ((((arr_32 [i_8] [i_8] [i_8] [i_8]) ^ 127)));
                        var_24 = ((((arr_15 [i_0] [i_1] [i_1] [i_8]) ^ (arr_6 [i_1] [i_6]))));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        var_25 = (-(~8));
                        arr_38 [13] [7] [i_0] = ((-(arr_25 [i_0] [i_1] [i_9])));
                        var_26 ^= (arr_6 [i_1] [i_1]);
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_27 -= (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_3 [i_6] [12])));
                        arr_41 [i_6] [i_0] = (((arr_11 [i_10]) == (arr_11 [i_0])));
                    }
                    var_28 = (max(var_28, 1023));
                    var_29 = (-2147483641 || 9223372036854775807);
                }
                var_30 = 18446744073709551606;
            }
        }
    }
    #pragma endscop
}
