/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = (i_0 % 2 == zero) ? ((max(((((var_14 ? (arr_3 [i_1] [i_0]) : (arr_14 [i_0] [4] [i_2] [i_3] [i_2]))) - (((16646144 << (((arr_7 [i_3] [10] [i_0] [i_2]) - 5850382914747158509))))))), (((((var_3 ? (arr_13 [i_4] [i_0] [i_0] [i_1] [i_0]) : 16646144)) != ((((arr_8 [i_0] [i_2] [i_3] [i_4]) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : var_13))))))))) : ((max(((((var_14 ? (arr_3 [i_1] [i_0]) : (arr_14 [i_0] [4] [i_2] [i_3] [i_2]))) - (((16646144 << (((((arr_7 [i_3] [10] [i_0] [i_2]) + 5850382914747158509)) - 848906919258613416))))))), (((((var_3 ? (arr_13 [i_4] [i_0] [i_0] [i_1] [i_0]) : 16646144)) != ((((arr_8 [i_0] [i_2] [i_3] [i_4]) ? (arr_8 [i_0] [i_1] [i_1] [i_1]) : var_13)))))))));
                                var_17 += ((154 ? 1398606801 : 28));
                            }
                        }
                    }
                }
                var_18 = ((min(-50, (arr_3 [i_0] [i_0]))));
                var_19 -= (((((((max(3365784960, var_11))) ? (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_9 : var_13)) : var_8))) ? ((~(arr_6 [6]))) : (max((((var_4 == (arr_2 [14])))), 1))));
            }
        }
    }
    #pragma endscop
}
