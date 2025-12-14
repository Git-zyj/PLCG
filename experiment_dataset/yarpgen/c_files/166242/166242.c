/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_0] = 57801;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_0] [10] = ((55930 + var_8) << (((max((221 + var_10), (((!(arr_13 [16] [i_2 + 1] [13] [i_4])))))) - 2473346091)));
                                var_15 = 32767;
                            }
                        }
                    }
                    var_16 -= (((((min(var_6, 2)) - ((max(6247, var_5))))) | 9605));
                }
            }
        }
    }
    #pragma endscop
}
