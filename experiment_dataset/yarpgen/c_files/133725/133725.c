/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
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
                                var_17 |= (max(((-(arr_1 [i_4] [i_3]))), ((248 ? 248 : (arr_2 [i_1] [i_2])))));
                                var_18 = (((((((240 ? -1824 : 236)) < ((var_2 ? (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]) : var_3))))) - ((0 + (arr_4 [20] [i_1] [20] [i_1])))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_19 *= (max((((arr_1 [i_0] [i_1]) ? var_6 : (arr_1 [i_0] [i_1]))), (max((~8), 133))));
                    var_20 = ((~(((~var_8) | (arr_12 [i_5] [i_1] [i_0])))));
                    arr_14 [i_0] [i_1] [i_1] [19] = 128;
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_17 [i_6] [i_6] = ((!(4762 | 3)));
                    var_21 = (arr_7 [i_6] [i_1] [i_0] [i_0] [i_0] [i_0]);
                    arr_18 [i_6] [i_6] [i_0] = ((((min(60, 35))) << var_5));
                    arr_19 [i_6] [i_1] [i_1] [i_6] = 26;
                    var_22 = 23;
                }
                arr_20 [10] [13] [i_0] = ((((max(133, (arr_6 [i_0] [i_1] [i_0] [i_1])))) ? (!149) : var_3));
            }
        }
    }
    var_23 = var_15;
    #pragma endscop
}
