/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = (((((arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_1 - 1]) ? var_1 : var_7)) | (min(var_4, var_7))));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = ((var_4 >> ((min((((187617403 <= (arr_8 [i_0] [i_0] [i_1 + 1] [i_2])))), 26)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (((min((arr_6 [i_1 - 3] [i_1] [2] [i_4 - 1]), (arr_6 [i_1 - 4] [i_3 + 1] [i_4] [i_4 + 1]))) >> (var_1 + 6689)));
                                var_14 = ((var_10 ? ((min((arr_15 [i_0] [i_0 - 2] [i_0 - 1] [i_1 - 3] [i_2] [i_3 + 1] [i_4]), (arr_6 [i_4] [i_3] [i_2] [i_0])))) : (min((arr_11 [i_1] [i_1] [i_1] [i_1]), var_4))));
                                var_15 = (max(var_15, var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                arr_22 [i_6] = (((((((min((arr_17 [i_5] [i_6 + 1]), (arr_19 [i_5])))) != ((-26 ? (arr_17 [i_5] [1]) : var_5))))) >> (((arr_18 [i_5]) + 857803003330176422))));
                var_17 = ((((min(20, 4294967295))) == (min((arr_20 [i_5] [i_6 - 1]), (arr_18 [i_6 - 1])))));
            }
        }
    }
    #pragma endscop
}
