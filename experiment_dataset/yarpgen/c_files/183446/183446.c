/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (min(((var_6 ? var_2 : var_3)), (min(-144115188075855360, var_9))));
    var_13 &= (-1590195807 == 0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = (min(((-1590195790 ? (arr_6 [i_2] [i_2] [i_2 - 1] [i_4 - 4] [i_4]) : (arr_3 [i_2 - 3] [i_1]))), (arr_5 [i_0])));
                                var_15 -= (arr_3 [i_1] [i_4]);
                            }
                        }
                    }
                    var_16 = ((!((((var_4 != var_9) ? (min(var_7, 1975828444)) : (arr_8 [i_1] [i_1] [i_2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
