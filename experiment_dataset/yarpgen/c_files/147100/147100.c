/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min((((((max(268435455, var_10))) ? (var_6 >= var_6) : (var_1 & var_7)))), (max(var_3, ((var_6 ? 18446744073709551615 : -1))))));
    var_13 = (var_3 | var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((-(!var_9)))))));
                    var_15 = (((min(var_10, var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [10] [i_3] = (min(18446744073709551615, (arr_5 [13] [i_1] [i_1])));
                                var_16 = var_10;
                                var_17 = -1;
                                var_18 = (min(var_18, (!0)));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] &= (((((-31620 ? var_3 : (!53650)))) ? (~0) : var_5));
                    var_19 = (min(var_19, ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_1 : (min((arr_8 [i_0] [i_1] [i_2]), 0)))))));
                }
            }
        }
    }
    var_20 = -29;
    #pragma endscop
}
