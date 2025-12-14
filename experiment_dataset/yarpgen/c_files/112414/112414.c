/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((var_5 ? -30664 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 = var_0;
                    arr_6 [i_0] [i_1] [i_2] = arr_5 [9] [i_0 - 1] [i_0 + 1] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_0 - 1] [i_3 + 4] [i_4] [i_0] = ((189 ? 0 : 189));
                                var_17 ^= ((-(arr_11 [i_4 - 1] [i_3] [i_3] [i_3 + 3] [i_0 - 1])));
                                var_18 = (arr_9 [i_0] [i_1] [3] [i_3] [i_3 + 2] [i_4]);
                            }
                        }
                    }
                    var_19 *= (arr_0 [i_0 - 1] [i_1]);
                }
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_1] [i_5 - 2] = (((((((arr_12 [i_5] [i_1] [i_1] [1] [i_0 + 1] [i_0]) ^ (((max(-10121, var_12)))))) + 9223372036854775807)) << (((((var_2 + var_9) ? 1789681699975594222 : (arr_3 [i_5 + 1] [i_1] [i_0]))) - 1789681699975594222))));
                    var_20 = (max(((((arr_0 [i_0] [i_1]) <= ((max(92, 190)))))), (189 / 8595719682796761573)));
                    var_21 = 992;
                }
                var_22 = (min(var_22, ((((arr_14 [i_0] [i_0 - 1] [i_0 - 1]) << (((24 + 21) - 39)))))));
            }
        }
    }
    var_23 *= ((((((min(3933639259591724651, var_2)) | (23 * -9851)))) ? 9836 : ((((max(var_7, 5853))) >> (19285 - 19260)))));
    var_24 = (max(var_24, var_5));
    #pragma endscop
}
