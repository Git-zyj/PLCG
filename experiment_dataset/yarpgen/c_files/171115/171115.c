/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((~var_4) ? (((23504 ^ -180344828) ^ var_17)) : (max((~var_13), var_0)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 ^= (min(((~(arr_7 [i_3 - 1] [i_3 + 3] [i_0 - 2]))), (41991 & 1)));
                            var_20 = (max(112, 0));
                            var_21 += (((((~(arr_6 [i_3 - 1] [i_3 + 3] [8] [i_3])))) || (var_12 ^ -var_8)));
                            var_22 -= var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_23 = 65535;
                            var_24 &= max(((-var_0 ? (arr_14 [i_0]) : (((15 ? 0 : 2147483647))))), var_13);
                            var_25 ^= (arr_15 [i_0] [i_1] [i_4] [i_5] [i_0 - 2] [i_1]);
                        }
                    }
                }
                var_26 -= (((((0 ? 9020 : 0))) ? 2088726494 : (min(-2088726494, -20254))));
            }
        }
    }
    var_27 ^= ((-2088726486 / (((-2088726484 ? var_15 : var_9)))));
    #pragma endscop
}
