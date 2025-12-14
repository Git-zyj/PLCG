/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((((!336755935) ? 1920 : 1))), (max((max((arr_7 [i_1] [i_0]), var_12)), 16383))));
                                var_16 = ((((max(-2047050362, 294612273))) ? (max(var_3, var_11)) : var_5));
                                arr_15 [i_0] [1] [i_0] [i_0] [1] [i_4] = (((((-336755928 ? 3596022855 : 1))) ^ ((-(arr_8 [i_3 + 1] [i_0] [15] [i_2 - 1])))));
                            }
                        }
                    }
                }
                var_17 -= ((((max(43, -336755927))) - ((336755922 / (arr_6 [4] [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_18 &= var_11;
    #pragma endscop
}
