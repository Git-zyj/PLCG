/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_13;
    var_16 += var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (((-9223372036854775807 - 1) > (((min(3978944572174398758, var_8)) * var_11))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 *= ((-(((((!(arr_3 [i_0])))) << (((~var_1) + 244))))));
                                var_19 ^= 3783;
                                var_20 ^= (arr_11 [i_4] [i_3] [i_1] [i_0]);
                                var_21 &= ((!(arr_4 [3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
