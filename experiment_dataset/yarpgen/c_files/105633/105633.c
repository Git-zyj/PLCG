/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((~((((0 + 1) != ((var_15 ? var_19 : var_18)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = 1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_22 = 8335832529569561931;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = (arr_6 [12] [i_1] [i_1] [i_1]);
                                var_24 -= (((arr_4 [i_0] [11] [i_1] [i_3]) ? 20579 : var_7));
                                arr_11 [i_4] [i_3] [i_2] [2] [i_0] = var_17;
                            }
                        }
                    }
                    var_25 = (max(var_25, (~1)));
                }
                arr_12 [i_0] [i_1] = (min((min((arr_6 [i_0] [i_0] [i_1] [1]), (arr_6 [i_1] [2] [i_1] [2]))), ((-(arr_6 [i_0] [9] [i_0] [i_0])))));
                var_26 = (max(var_26, (((((((arr_2 [i_0]) ? (arr_3 [i_0] [i_0] [i_1]) : var_7))) ? (!var_9) : ((4283241527 ? var_9 : var_5)))))));
            }
        }
    }
    #pragma endscop
}
