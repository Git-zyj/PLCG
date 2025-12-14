/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((var_8 ^ var_1) ^ (-64 > var_12));
                var_21 = var_5;
                var_22 = var_13;
                var_23 ^= ((~var_13) & ((var_6 >> (((var_15 ^ var_18) - 1147923648573669312)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_24 = (var_4 / -var_12);
        var_25 = (((var_0 <= var_4) != (min(var_1, var_16))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_26 -= (min((124101613 & 3209164081), ((min(var_14, (!var_12))))));
                        arr_16 [i_2] = (((min((var_2 & var_17), (var_16 ^ var_17))) == ((var_4 << ((((min(-77, 60))) + 99))))));
                        var_27 *= (max(((max(var_2, var_13))), ((((min(var_3, var_3))) << (var_18 || var_17)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
