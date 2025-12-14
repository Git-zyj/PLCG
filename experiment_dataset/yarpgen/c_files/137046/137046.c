/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = (((--1152921504606846976) == ((-var_5 ? ((-1152921504606846976 ? var_9 : 1484601188)) : 0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 ^= min(var_1, (!127));
                                var_23 = (min((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? (7137708698636206294 * 0) : (((-(arr_2 [i_3] [i_2] [i_0])))))), var_12));
                                var_24 = (((7232855752257832639 <= 1152921504606846956) > (-5858517377256070260 >= -1152921504606846949)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
