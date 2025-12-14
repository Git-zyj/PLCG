/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((max(((1103392243057920252 << (var_8 - 28251))), ((max(var_7, var_7)))))) ? (((((1103392243057920252 / var_5) != (((var_9 ? var_8 : var_2))))))) : (~-var_9))))));
    var_13 = ((var_1 ? var_10 : (-1103392243057920252 != var_2)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = (min(((max(73, 1))), (max((arr_10 [i_0] [i_0 - 1] [i_0] [i_2 + 1]), (arr_10 [4] [i_0 + 3] [i_1] [i_2 + 1])))));
                                var_15 = (max((((!(-1103392243057920244 && var_7)))), var_11));
                            }
                        }
                    }
                    var_16 = ((((((((min(var_1, var_11)))) - var_0))) && ((!(arr_8 [i_0] [i_0 - 1] [i_2 + 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 *= (min((((min(11192674104415707773, 1)) / ((255 ? (arr_7 [i_0 + 4] [i_2] [i_1] [i_0]) : var_9)))), var_8));
                                var_18 = (((arr_0 [i_0]) ? (((~((max((arr_1 [i_2]), var_4)))))) : (18446744073709551615 >> 1)));
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_1] = 0;
                }
            }
        }
    }
    #pragma endscop
}
