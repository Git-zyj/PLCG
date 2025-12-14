/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] = ((((-((var_9 ? 41073 : var_5)))) / (var_0 + var_3)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = (((((((max(64851, (arr_10 [11] [11] [i_2] [i_3] [11])))) ? (((arr_8 [i_0] [2]) >> (var_5 - 34945))) : -42517))) ? ((((65527 + 21) != (arr_7 [i_2 + 1])))) : 65526));
                                var_12 = var_8;
                                var_13 = arr_2 [i_0] [i_0] [i_0];
                                var_14 -= ((var_3 ? (arr_0 [i_4] [i_1]) : ((39558 ? 25990 : 0))));
                                var_15 = (var_7 - var_5);
                            }
                        }
                    }
                }
                var_16 = arr_0 [i_0] [i_0];
                var_17 = ((-var_6 ? var_9 : var_9));
            }
        }
    }
    #pragma endscop
}
