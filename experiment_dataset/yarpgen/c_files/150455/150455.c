/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((~(((arr_5 [i_0] [i_0] [i_0]) ? 65504 : (arr_6 [i_1] [i_1])))));
                                var_19 = 2;
                                var_20 = var_16;
                                var_21 = (!var_8);
                                var_22 -= arr_5 [i_1 + 2] [i_1] [14];
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (((((-113 ? var_8 : var_6))) ? var_12 : (((var_10 != (arr_3 [i_1 + 2]))))));
            }
        }
    }
    var_23 = (!var_1);
    var_24 &= ((-1859729426 ? 14811 : 4294967295));
    #pragma endscop
}
