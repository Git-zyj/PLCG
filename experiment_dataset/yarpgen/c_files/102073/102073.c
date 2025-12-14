/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (!-43);
                arr_7 [i_0] [i_1 - 1] [i_0] = (max(((max(31, var_5))), ((max((~var_9), (arr_1 [i_0] [i_0]))))));
                var_10 = 4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_11 = (min(var_2, var_0));
                var_12 ^= (min(var_8, (min(-var_6, (((-(arr_9 [i_2]))))))));
                arr_13 [i_2] = var_9;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_4] [i_3] [i_3] [i_4] |= 4302170653290732730;
                                var_13 = (min(var_6, var_1));
                                var_14 ^= ((-(((var_2 - (arr_18 [i_3] [i_3] [i_6]))))));
                                arr_22 [i_6] [i_6] [3] = (i_6 % 2 == 0) ? ((((max((arr_9 [i_2 - 1]), (arr_15 [i_2] [i_2] [i_2] [i_2]))) <= (min((((var_6 << (((arr_19 [i_6] [i_3] [i_3] [i_5] [i_6]) + 2529273303945901383))))), (~var_1)))))) : ((((max((arr_9 [i_2 - 1]), (arr_15 [i_2] [i_2] [i_2] [i_2]))) <= (min((((var_6 << (((((arr_19 [i_6] [i_3] [i_3] [i_5] [i_6]) + 2529273303945901383)) - 4047871071435828511))))), (~var_1))))));
                            }
                        }
                    }
                }
                var_15 = (arr_14 [i_2 - 2]);
            }
        }
    }
    var_16 = (max(var_16, var_8));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_17 ^= (max(((~(arr_15 [i_7] [i_8] [0] [i_10]))), (arr_19 [i_8] [i_8] [i_8] [i_10] [i_10])));
                            var_18 = var_2;
                            var_19 = ((~((-(arr_30 [i_7] [i_7] [12] [i_9] [i_10])))));
                            var_20 -= (max(((((arr_23 [i_7]) <= (arr_26 [i_7] [i_8] [7])))), (min((((arr_31 [i_7] [9] [13] [i_10] [i_7] [i_10]) << (var_6 - 2434641562))), (arr_31 [i_7] [i_8] [i_9] [i_7] [i_8] [i_9])))));
                            var_21 = (min(var_21, ((max(90, ((((max(-4302170653290732731, 27)) <= ((-(arr_31 [i_10] [i_10] [i_7] [i_8] [i_7] [i_7])))))))))));
                        }
                    }
                }
                var_22 ^= 4302170653290732717;
                arr_32 [i_7] = (max((min(var_7, var_3)), ((min(-93, (-127 - 1))))));
                var_23 -= (arr_18 [i_7] [3] [i_8]);
                arr_33 [i_7] [i_7] = (~var_8);
            }
        }
    }
    #pragma endscop
}
