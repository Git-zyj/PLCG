/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 ^= (max(-4, (((arr_4 [i_0]) & -861002004))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 = (max(var_19, (arr_3 [2])));
                    var_20 += var_1;
                    arr_8 [6] [i_1] [i_0] = (var_5 ^ var_2);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [12] [14] [i_3] [i_4] = (((((~(arr_11 [8] [i_2] [i_3] [4] [i_4 + 1])))) ? (~-30) : ((~(arr_11 [16] [i_3] [i_3] [i_4] [i_4 - 1])))));
                                var_21 = (~var_3);
                                var_22 = (min((arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_4] [i_4 - 1]), var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= ((min((min(var_14, -1)), (min(1036562131, -578790850)))));
    #pragma endscop
}
