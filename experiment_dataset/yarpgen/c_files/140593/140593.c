/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [2] |= ((((((arr_0 [i_1]) ? (var_16 & 61440) : ((((arr_3 [i_0] [16] [i_1]) | var_12)))))) ? ((~(((arr_1 [i_0]) | (arr_0 [i_0]))))) : (~var_9)));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_20 = (min(var_20, ((((min((arr_8 [i_2] [i_1]), -723508343)) - (~723508343))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_1] [5] [i_4] = (((((var_7 ? 723508343 : (arr_8 [i_1] [i_3])))) & (((arr_6 [i_0] [i_2] [i_3]) ^ (arr_0 [i_4])))));
                            var_21 += 2406740783641488301;
                            arr_16 [i_4] [i_1] [i_0] [i_2] [i_1] [i_1] [i_0] = ((arr_0 [i_4]) ? ((var_7 >> (3983175069979500290 - 3983175069979500276))) : var_1);
                            var_22 *= ((61440 ? ((var_19 ? var_12 : (arr_8 [i_2] [i_1]))) : -108));
                        }
                    }
                    var_23 += ((((-723508344 ? -104 : -123))) == ((~(arr_13 [i_2] [i_2] [i_2] [i_2] [i_0]))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_24 = ((~(~61440)));
                            var_25 |= ((((var_1 ? 28845 : var_19)) * 61429));
                            var_26 ^= (!9223372036854775807);
                        }
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((min((var_7 / -2406740783641488301), ((var_0 / (arr_0 [i_0]))))));
                    }
                    var_27 *= (((((!(((var_4 ? var_17 : 1)))))) ^ ((min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 3; i_7 < 23;i_7 += 1)
    {
        arr_24 [i_7] = (-(arr_7 [i_7 - 3] [i_7] [21] [i_7 + 1]));
        var_28 = ((~(138538465099776 | var_5)));
        arr_25 [i_7] [i_7] = var_2;
        arr_26 [22] |= (arr_14 [i_7] [i_7] [1]);

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_30 [i_8] [i_8] [i_8] |= arr_1 [i_7];
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_39 [i_7] [i_8] [i_9] [16] [i_7] = -21;
                            var_29 = (((arr_38 [i_10]) ? (arr_38 [i_7 - 2]) : 4294967295));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
