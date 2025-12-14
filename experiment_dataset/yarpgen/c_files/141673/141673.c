/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 *= (min((max(((246 ? 65535 : 3814853856557958153)), (arr_3 [i_2 + 2] [i_2] [i_3 - 1]))), (((((((arr_12 [i_3] [i_2 - 1] [i_1] [i_0]) ? (arr_4 [i_2 - 1] [3]) : (arr_9 [i_1] [i_1] [i_2 - 2] [i_2 - 2])))) ? (arr_12 [i_0] [i_1] [i_3] [i_3 + 4]) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_2 - 1] [i_1]))))));
                            var_14 = (max(var_14, ((min((min(((min((arr_12 [i_0] [i_2] [i_1] [i_0]), (arr_9 [i_1] [0] [14] [i_3 - 2])))), (min(-1955921214, 3)))), (min((((arr_6 [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [7] [i_2 + 1] [i_3]) : 58282044)), (((arr_4 [i_0] [i_0]) ? (arr_4 [i_2] [i_3 + 3]) : (arr_5 [i_0] [i_0]))))))))));
                            var_15 = 40;
                        }
                    }
                }
                arr_13 [i_0] = 215;

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_16 = (max(var_16, ((min(((max(31, (arr_11 [i_0] [i_1] [8] [10] [i_1])))), (~13467))))));
                    var_17 -= arr_3 [4] [4] [i_0];
                    var_18 *= (max((((arr_10 [i_4] [i_4] [7] [i_4] [1] [i_4 + 1]) ^ (arr_9 [i_1] [i_4] [i_1] [10]))), ((max((arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4] [i_4 + 1]), (arr_10 [i_4] [13] [i_4] [i_4] [i_4 + 2] [i_4 + 1]))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_19 = (((arr_3 [i_0] [1] [i_5]) ? (arr_16 [i_5] [i_1] [i_0] [i_0]) : (max((((arr_5 [i_1] [i_1]) ? -202026988870305415 : 41)), 233))));
                    arr_20 [i_0] [i_1] [i_5] [i_5] = (!-4391530211769385659);
                    var_20 = (max((arr_7 [i_0] [i_1] [i_5] [i_5]), (arr_7 [6] [i_5] [i_5] [i_0])));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_21 *= (max((!-13470), (((((240 ? 1 : 2147483634))) ? 0 : -13458))));
                    var_22 = (((max(-1466132781, (max((arr_21 [i_0] [i_0] [i_6]), 222))))) ? 205 : (min((min((arr_8 [i_0] [i_0] [11] [i_0]), -3411078683891123476)), (arr_18 [i_0] [i_1] [i_6] [i_6]))));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_23 = ((((((arr_5 [i_0] [2]) ? 32755 : -2147483647))) ? (arr_5 [i_0] [i_0]) : (max((((arr_10 [i_0] [i_1] [i_7] [i_7] [i_1] [i_0]) ? 13467 : 1)), (min(589247696, (arr_5 [i_7] [14])))))));
                    var_24 = (max(var_24, (arr_3 [i_0] [i_1] [i_7])));
                }
                arr_26 [i_1] = (arr_11 [i_0] [i_1] [0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            {
                arr_32 [i_8] = (max((((13462 * -13455) ? var_0 : (min((arr_27 [i_9]), -9223372036854775795)))), (((13469 ? (arr_31 [i_9 + 1] [i_9 - 1]) : ((min(25, 248))))))));
                arr_33 [i_9] = 25;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            {
                arr_38 [0] [i_11] [i_10 - 1] = -13443;
                var_25 = ((96 ? (max(-550805875, -1977395775)) : ((var_7 ? (arr_4 [i_10 + 1] [i_11 + 2]) : (arr_4 [i_10 + 2] [i_11 + 2])))));
            }
        }
    }
    #pragma endscop
}
