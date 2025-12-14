/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [14] [i_4] [14] |= ((!((min(var_9, var_11)))));
                                arr_16 [i_2] [i_2] = ((-(((arr_14 [i_2] [i_3 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [11] [i_2]) + (arr_14 [i_2] [i_3 + 1] [i_3] [i_4 + 1] [i_4 - 3] [i_4] [i_4])))));
                                arr_17 [i_0] [i_0] [i_2] = (((((~((((arr_13 [i_2] [i_2] [i_0]) != var_7)))))) ? (min(((109 & (arr_12 [i_2] [13] [i_2] [i_3 - 1] [14] [i_0]))), (-110 == var_1))) : (min(((var_10 % (arr_9 [i_3] [i_2] [i_1] [i_0]))), (~var_3)))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [12] [i_6] = -110;
                                var_18 -= 80;
                                var_19 = min((arr_21 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 - 4]), (min((arr_20 [i_0] [i_1] [i_5] [i_6]), (arr_21 [i_1] [i_5] [i_6] [i_7]))));
                            }
                        }
                    }
                }
                var_20 *= arr_5 [i_0] [i_0] [i_0];
                var_21 ^= ((var_14 ? ((~(arr_19 [i_0]))) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [14] [i_1]) ? var_16 : (arr_21 [i_0] [i_0] [i_0] [i_0])))));
                var_22 = (max(var_22, (arr_0 [i_0] [i_1])));
            }
        }
    }
    var_23 |= var_0;
    var_24 = (max(var_24, ((min((~var_1), ((((~var_9) != ((min(var_11, var_2)))))))))));
    #pragma endscop
}
