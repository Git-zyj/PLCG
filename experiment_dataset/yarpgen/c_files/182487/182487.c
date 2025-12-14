/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((var_2 ? (((~var_8) ? (-577899384 | var_1) : var_11)) : (min(((var_13 ? 233 : var_1)), (14 - var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = arr_1 [i_0] [i_0];

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_15 ^= 8405733598038566147;
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((~(~-6440)));
                }
                arr_9 [i_0] = ((!((!(arr_4 [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_16 &= (((!((min((-32767 - 1), 2481696332067396563))))));
    var_17 = var_10;
    var_18 = ((25725 ? -32761 : -126));
    #pragma endscop
}
