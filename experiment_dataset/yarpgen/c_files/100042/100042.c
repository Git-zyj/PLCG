/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max(((min((arr_1 [i_0] [i_0 + 1]), -var_9))), (min(((min(65535, 1072693248))), (min(15496281189515753148, var_9))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_1] = -1753247965338372697;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_15 = ((!(0 * 1753247965338372693)));
                            arr_13 [i_0] [i_1] [9] [i_1] = (arr_8 [i_0] [i_1] [i_1] [i_3] [i_4]);
                        }
                        var_16 = (((((arr_5 [i_0 - 3] [i_0]) | (arr_7 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]))) & var_12));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_17 = (((10523185782449210534 >> (9223372036854775807 - 9223372036854775774))));
                            var_18 = (min(var_18, var_3));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_1] = ((+(((arr_4 [i_0 + 1] [i_1] [i_0 - 2]) ? -1669341800 : var_9))));
                            var_19 = (~var_7);
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            arr_28 [i_1] [i_8] [i_5] [5] [i_1] [i_1] = var_4;
                            var_20 |= ((0 ? 65 : -111));
                            var_21 = ((~var_2) ? 9 : var_6);
                            arr_29 [i_1] [i_5] [i_1] = (~1182766724);
                        }
                        var_22 = (arr_18 [i_0] [i_0 - 2] [1] [i_0 - 2] [i_0 - 2]);
                        arr_30 [i_0] [i_1] [i_0] [i_0] = ((((0 ? var_13 : -var_12)) & (((var_12 >= (!40929))))));
                        arr_31 [18] [i_1] [i_1] [18] [i_5] [i_5] = (!1);
                        var_23 = (((((-65535 ? ((min((-127 - 1), var_8))) : (arr_12 [i_0] [i_0 - 1])))) ? 0 : 21301));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_24 = var_6;
                        var_25 ^= var_5;
                        var_26 = (min(var_26, var_8));
                    }
                    for (int i_10 = 2; i_10 < 19;i_10 += 1)
                    {
                        var_27 -= (((((arr_4 [i_0 - 1] [i_10 - 2] [i_2]) * 15)) >> (26053 - 26022)));
                        var_28 *= var_7;
                    }
                }
            }
        }
    }
    var_29 = (min(65522, 79));
    var_30 = var_6;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            {
                arr_40 [i_12] [i_12] [2] |= 10;
                var_31 &= (max(((max((arr_39 [i_12]), (arr_39 [i_12])))), (max((arr_39 [i_12]), 24603))));
                arr_41 [i_11] = (((127 >> 0) ? (((arr_36 [i_11] [i_12]) ? -757 : 18446744073709551614)) : 67108863));
                var_32 = 65535;
                var_33 = ((((((min(13897326106927032596, 402653184)) & 4107583213))) ? ((((!(((1752746232 ? 24779 : (arr_39 [i_11])))))))) : ((((min(65505, (-2147483647 - 1)))) % -7598377795957608467))));
            }
        }
    }
    #pragma endscop
}
