/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (~4292870144);
    var_19 *= ((((((((var_2 ? 66 : var_8))) ? var_6 : -1))) ? 190 : (max(((min(65, var_11))), var_14))));
    var_20 -= var_15;
    var_21 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (1 / -350);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 = -8332;
                                var_24 = min(((!(arr_0 [i_0] [i_4 - 1]))), var_10);
                                var_25 = (min(var_25, (arr_12 [i_4] [1] [i_2] [4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
