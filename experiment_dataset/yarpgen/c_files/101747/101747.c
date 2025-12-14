/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_9, 3448490623));
    var_11 = (min(var_11, var_9));
    var_12 &= -229435232;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((((min(var_2, (arr_1 [i_0] [i_0])))) >> 1));
        var_14 |= ((2774475183 ? (max(42207, ((-408824612 ? 127 : 18446744073709551606)))) : 1));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = (min(var_15, var_7));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_16 *= (max(-45500, 70));
                var_17 *= var_7;

                /* vectorizable */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_18 = ((-3647739232688429726 ? 3448490608 : (arr_7 [i_1] [i_1] [i_3] [i_1])));
                    var_19 = (arr_10 [i_1] [i_1] [i_3] [i_1] [i_1]);
                }
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_20 = (((arr_7 [i_5] [i_3] [i_1] [i_1]) ? 32 : ((~(arr_12 [i_3] [i_5 - 1])))));
                    var_21 |= var_3;
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    var_22 *= ((-(arr_15 [i_1] [i_2] [i_2] [i_1])));
                    var_23 = ((!(arr_6 [i_2])));
                }
                var_24 ^= var_2;
            }
            var_25 ^= ((32767 ? var_8 : ((+(((arr_5 [i_1]) * (arr_8 [i_1] [i_1] [i_2] [i_2])))))));
        }
        var_26 = ((~(~var_5)));
        arr_18 [i_1] [i_1] |= 1;
        arr_19 [i_1] = ((var_7 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_5));
    }
    #pragma endscop
}
