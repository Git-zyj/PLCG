/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((~((~(arr_13 [i_3 + 1] [i_4] [i_4] [1] [i_4])))));
                                var_21 = (min(var_21, (((((((((-(arr_5 [i_2])))) ? (arr_10 [i_4] [i_4] [i_2] [i_3 + 1] [i_1]) : 1))) ? ((~(arr_13 [i_0] [i_1] [i_3 - 1] [i_3] [i_4]))) : ((~(arr_12 [i_0] [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [i_3]))))))));
                                arr_14 [i_0] [i_0] [5] [i_2] [i_3] [3] [i_4] = -65512;
                            }
                        }
                    }
                    arr_15 [i_2] [i_2] [i_2] |= (((-(~var_0))));
                    var_22 = ((-((~((-(arr_4 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_23 = (((((+(((arr_18 [i_5] [15]) ? var_16 : 51965))))) ? ((-((((arr_19 [10] [i_5]) || 46731))))) : (arr_18 [i_6] [i_6])));
                var_24 = (min(var_24, 14));
            }
        }
    }
    var_25 += ((-(var_5 * var_7)));
    #pragma endscop
}
