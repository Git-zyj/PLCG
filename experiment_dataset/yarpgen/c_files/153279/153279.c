/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 == (((var_8 >= ((var_16 ? var_19 : var_1)))))));
    var_21 = (max(var_21, var_1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((((max(((((arr_5 [3] [i_0] [10]) >= var_6))), (min(var_5, 4294967275))))) ? -1 : (((((927915223 ? (arr_1 [i_0] [i_0]) : (arr_3 [i_1 + 1] [12]))) < (arr_4 [i_0 - 3] [i_0 - 3] [i_1 + 1])))))))));
                var_23 ^= (((~4095) ? (arr_2 [i_1] [i_0]) : (((!((min((arr_0 [i_0]), var_7))))))));
                var_24 = (-(min((max(4294967295, 74)), (arr_1 [i_0] [i_0 - 2]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [12] [i_2] [i_1] [i_4] [i_2] = 240;
                                var_25 &= (((-(max(9007061815787520, 21)))));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] = max((((((18446744073709551615 ? 240 : 12)) + 0))), (arr_7 [i_4] [1]));
                            }
                        }
                    }
                }
                var_26 = (max(((var_3 ? -var_2 : ((var_3 ? var_10 : 0)))), (max((((0 && (arr_1 [i_0 - 2] [i_1 + 1])))), 18446744073709551588))));
            }
        }
    }
    #pragma endscop
}
