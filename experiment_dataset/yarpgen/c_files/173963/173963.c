/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = 16591909494214869448;
                                var_14 *= (arr_9 [i_1] [i_2] [i_1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_19 [i_5] [i_5] [i_1] [i_5] [i_5] |= ((126 ? (((1842734877 ? ((-7795 ? var_9 : 61)) : (((-2147483647 - 1) ? var_4 : (arr_6 [i_0] [i_0] [i_5] [i_0])))))) : ((-var_2 ? (((-1500142330 ? var_0 : 10))) : (min(20160, 2741413497))))));
                            var_15 = ((((((var_7 >> (arr_17 [i_0] [10] [16] [i_0] [10] [i_0]))))) ? (min((((20160 | (arr_2 [i_0] [i_0])))), (arr_12 [i_0] [i_1 + 1] [2] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_6]))) : (arr_5 [i_0] [i_1 - 1])));
                            arr_20 [i_1] [i_1] &= var_6;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            {
                var_16 = ((((max(var_11, (var_5 - 0)))) ? (((min(var_1, 515071087536460932)) - (((0 ? (arr_9 [i_8] [8] [i_8]) : var_9))))) : ((min(((20160 ? (arr_13 [i_7] [i_7] [i_8] [i_8]) : (-32767 - 1))), (arr_17 [i_7] [i_7] [i_7] [i_7] [20] [i_8]))))));
                var_17 = ((((arr_7 [i_8 + 1] [i_8 - 3] [i_8] [i_8]) ? 20160 : (max(-15752669, (arr_10 [i_7]))))));
            }
        }
    }
    #pragma endscop
}
