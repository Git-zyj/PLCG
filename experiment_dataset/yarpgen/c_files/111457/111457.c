/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_12, ((var_16 ? var_8 : var_4)))) - var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 -= (min((max((arr_2 [i_0] [9]), -20700)), (arr_0 [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 += 137;

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_14 [i_2 + 2] [i_1] [i_2 + 2] = (min(41, 119));
                                var_22 |= ((((min(40, 63))) ? -12862 : (((((var_17 ? 12847 : -61)) < (var_4 / var_13))))));
                                var_23 = (max(var_23, (((((max(99, 4))) & var_14)))));
                            }
                        }
                    }
                }
                arr_15 [i_1] = ((((min((arr_3 [i_1] [i_0]), 12861))) ? var_0 : ((((arr_2 [i_0] [i_0]) || (arr_3 [i_1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
