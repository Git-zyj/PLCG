/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = (((arr_5 [i_2] [i_1] [10]) <= (min(2811578776918878085, ((((arr_3 [i_0]) || var_1)))))));
                            var_12 = (min(3, 58734));
                        }
                    }
                }
                var_13 = (max(var_13, -1180845861));
                var_14 = var_3;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        {
                            var_15 = (((max((max((arr_1 [i_4] [i_5]), (arr_1 [i_0] [i_4]))), (max(var_3, var_7))))) & ((min((arr_8 [i_1] [1] [i_5 - 1] [i_5 + 2]), (arr_8 [i_5 + 4] [6] [i_5 + 2] [i_5 - 1])))));
                            var_16 |= (arr_12 [i_4]);
                            var_17 = ((-((((max((arr_13 [i_5] [i_5] [3] [i_5 + 2] [i_5] [i_5 + 2]), var_0))) ? var_7 : (((var_3 < (arr_15 [i_5] [i_1] [i_1]))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((max((min(-2892, var_5)), var_2)) << (((211 + 2) - 198)));
    var_19 = ((((!(((var_9 ? var_10 : var_3))))) ? var_1 : var_1));
    #pragma endscop
}
