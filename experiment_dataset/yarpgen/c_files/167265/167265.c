/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_1] = ((((min(27447, 1))) ? 1 : var_0));
                var_19 = (min(var_19, ((min((arr_2 [i_0 + 1] [i_1 - 1]), ((~(arr_2 [i_0 + 1] [i_1]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 += ((((max((arr_17 [i_2] [i_3] [i_4] [i_5] [i_5] [i_4]), (arr_17 [i_2] [i_3] [i_4] [i_4] [i_6] [i_2])))) ? 70 : (arr_11 [i_2])));
                                var_21 -= (max(((~(arr_7 [i_6] [i_2]))), ((max(37907, 1)))));
                            }
                        }
                    }
                    var_22 |= ((~(max(4294967295, -1))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_23 = (arr_21 [i_2] [i_4] [i_4]);
                                arr_27 [i_3] [i_3] [i_4] [i_7 + 2] [i_8] [i_4] = var_3;
                                arr_28 [i_2] [i_3] [i_4] [i_4] [i_8] [i_8] = (0 & 0);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
