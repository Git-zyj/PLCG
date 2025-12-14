/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = ((1970559679 ? (((((arr_1 [i_0 + 1] [i_0]) > (arr_1 [i_0 + 1] [i_0]))))) : (max(((var_11 ? 2481049855 : -15855)), ((((arr_1 [i_0] [i_0]) ? var_16 : 252)))))));
        var_18 *= var_9;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 -= (((arr_1 [i_1] [10]) | ((-(arr_1 [i_1] [i_1])))));
        arr_4 [i_1] [i_1] = (var_3 == -2695742426673816449);
        var_20 = (max(var_20, var_13));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_2] = ((576458553280167936 ? (var_16 ^ var_9) : (((1 ? -576458553280167921 : var_6)))));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_3] [i_3] [i_3] [i_3] = ((161 ? 57344 : (arr_3 [i_2] [i_2])));
                        var_21 = (arr_0 [i_3]);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] = (((((var_11 ? (max(var_11, 18446744073709551615)) : (((var_4 >> (-576458553280167944 + 576458553280167949))))))) ? var_6 : (~var_9)));
        var_22 ^= ((((max(var_0, (arr_6 [i_5])))) != 1));
        var_23 = 65276;
    }
    var_24 = (min(var_24, ((max((((970172801 / -9223372036854775795) * (var_2 / var_7))), 95)))));
    var_25 = (35840 - 7);
    var_26 = 12926833833797974095;
    #pragma endscop
}
