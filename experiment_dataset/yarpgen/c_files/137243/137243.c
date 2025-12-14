/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 *= (arr_4 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] = (((min((arr_7 [0] [0]), 1)) ? (((-((((arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] [i_3] [i_4]) <= -650005698)))))) : (arr_6 [i_0] [11] [i_4])));
                                var_20 = (arr_7 [i_0] [i_0]);
                                var_21 ^= var_4;
                                arr_12 [i_2] [i_1 - 1] = (max((((var_8 << (((arr_1 [i_3] [i_1 - 1]) - 9767))))), (((arr_1 [10] [i_4]) & (arr_3 [i_2] [i_2])))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_2] [i_1 + 1] [i_2] = (((((((arr_5 [i_0] [i_1] [i_2]) ? var_11 : 3208561927078998799)) >= (var_7 + 1))) ? (arr_10 [7] [7] [i_2] [i_1] [7] [i_1] [i_2]) : ((((arr_6 [i_2 - 1] [i_1] [i_0]) || ((3967493493 && (arr_0 [i_2 - 3]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_22 = (var_2 && 1);
                arr_19 [i_5] [i_6] = (max((arr_1 [i_5 - 1] [i_6]), (arr_2 [i_5])));
                arr_20 [i_6] [i_6] = ((var_7 >= (arr_18 [i_6] [i_5])));
                var_23 = (((arr_9 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5] [1]) & (16 * 0)));
            }
        }
    }
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
