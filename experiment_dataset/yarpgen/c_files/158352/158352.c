/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((!((((var_6 % var_3) | (var_5 > 36838))))));
    var_17 = (((var_6 - var_4) ? var_0 : -var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((var_2 + ((((min((arr_3 [i_0] [3] [i_1]), 1)))))));
                arr_6 [i_1] = (arr_5 [9] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            {
                arr_11 [i_3] = ((((var_1 ? var_10 : (arr_10 [i_3 - 1]))) < ((((arr_10 [i_3 - 2]) | (arr_10 [i_3 - 1]))))));
                var_19 = (max(var_19, (((var_0 - (arr_7 [i_2] [i_2]))))));

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 -= 1;
                                var_21 *= ((((63 / (arr_13 [i_5] [i_3 - 3] [i_2]))) * (((arr_9 [i_5] [i_3 - 2] [i_4]) ? var_5 : (arr_13 [i_2] [i_3 + 1] [17])))));
                                var_22 = var_9;
                            }
                        }
                    }
                    var_23 *= 2;
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_24 ^= (((-var_3 / 221) ? (arr_9 [i_2] [i_2] [i_7]) : (max(((0 ^ (arr_14 [i_2] [i_2] [i_2]))), (!2097088)))));
                    var_25 = (max(var_25, (((7 <= ((~((-27112 ? var_8 : var_8)))))))));
                }
            }
        }
    }
    var_26 = ((129 % (var_4 * var_0)));
    #pragma endscop
}
