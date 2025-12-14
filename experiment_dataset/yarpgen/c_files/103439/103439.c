/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 ^= 255;
        var_20 = (min(var_20, (((-123 ? (arr_1 [i_0 + 2]) : var_15)))));
        var_21 *= var_11;
        var_22 &= ((240 ? (!206) : ((~(arr_1 [i_0])))));
    }
    var_23 = (min(var_23, -var_4));
    var_24 -= var_6;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            {
                var_25 += (((~-96) && var_1));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_26 += (((min(var_5, (arr_2 [i_2 - 2] [i_2 - 2])))));
                            var_27 -= var_8;
                            var_28 *= max(1, (arr_12 [i_1] [i_2] [i_3]));
                        }
                    }
                }
                var_29 ^= var_11;
                arr_13 [i_1] |= ((7 ? 0 : 15));
            }
        }
    }
    #pragma endscop
}
