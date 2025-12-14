/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((1295490226444909680 / (239 | 16)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [0] [12] = (((~234) ^ (252 - 16)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((((21 << (235 - 214)))) && ((!(239 - 223))))))));
                                var_14 = 240;
                                var_15 += ((((~((max(241, 245))))) | (min(((22 >> (243 - 239))), 245))));
                            }
                        }
                    }
                    arr_11 [i_2] [i_0 - 3] [i_2] |= -245;
                }
            }
        }
    }
    #pragma endscop
}
