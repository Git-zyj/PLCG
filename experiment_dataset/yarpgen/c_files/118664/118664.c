/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= (arr_0 [2] [2]);
                arr_5 [i_1] &= ((-(min((((-21536 ^ (arr_0 [i_0] [i_1])))), ((1 ? (arr_0 [i_0] [i_0]) : 6425656110666785237))))));
                arr_6 [i_0] = (-6425656110666785255 <= 724009842);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_19 = (((arr_1 [i_0]) - ((-1992375887409106397 ? (arr_7 [i_2] [i_1]) : var_10))));
                    var_20 = (((max((~var_4), (arr_7 [i_1] [i_1]))) <= ((((!(((var_12 ? (arr_7 [i_0] [i_2]) : 1819851482)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] = ((-(arr_11 [i_4 - 1] [i_4 - 1] [i_2] [i_3 + 1] [i_4 - 1])));
                                arr_16 [10] [i_1] [i_2] [i_4] [i_2] = ((((max((arr_10 [i_4 + 3] [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 3]), (min(16454368186300445223, var_12))))) ? (((arr_9 [i_4] [i_4 - 1] [i_4] [i_4 + 1]) >> (((arr_11 [1] [i_3 + 1] [0] [i_0] [i_0]) + 144695206)))) : (((((((arr_1 [i_3]) + 2147483647)) >> 9)) >> ((((var_5 ? (arr_4 [i_2] [i_3 + 1]) : (arr_11 [i_0] [10] [4] [i_0] [i_4]))) + 1507022532))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
