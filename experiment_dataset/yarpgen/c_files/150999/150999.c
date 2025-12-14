/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = arr_3 [i_0];
                                arr_12 [i_3] [i_0] [i_2] [i_3] [i_0] [i_1] [i_4 + 3] = var_5;
                            }
                        }
                    }
                    var_12 = ((-(min((arr_10 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 2] [8]), var_2))));
                    arr_13 [i_0] [i_0] [i_1] [i_0] = ((((((arr_1 [i_0] [i_0]) < (arr_10 [i_1 - 1] [i_0 - 2] [i_0 - 2] [i_0] [i_0])))) >= ((-(arr_10 [i_1 - 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_13 -= (max((min((arr_17 [i_7 - 1] [i_5] [i_5 + 4]), (arr_17 [i_7 - 1] [i_6] [i_5 + 4]))), (min((arr_17 [i_7 - 1] [i_6] [i_5 + 4]), 6484871072466199560))));
                                var_14 = (max(var_14, var_2));
                                var_15 = (min((max(var_0, (arr_15 [i_5 + 3] [i_8]))), (((!(arr_20 [i_7]))))));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (((((((~var_6) ? (min((arr_16 [i_5] [i_5] [i_6]), 4637291657135325538)) : (arr_22 [i_5] [i_6] [10] [4] [0] [i_5] [i_6])))) ? (((+(((arr_19 [i_5] [i_5] [i_6] [i_6]) ? (arr_19 [i_5] [i_6] [i_6] [1]) : var_7))))) : (min(((18446744073709551615 / (-9223372036854775807 - 1))), (((var_2 ? var_5 : var_6))))))))));
            }
        }
    }
    #pragma endscop
}
