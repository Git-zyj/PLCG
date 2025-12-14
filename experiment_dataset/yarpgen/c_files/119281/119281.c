/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (((-1 | 0) ? ((((arr_3 [i_0] [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_1])))) : (arr_2 [i_1 + 3])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_3 + 1] [i_0] [i_2] [i_0] [i_0] = (min(-1, (-9223372036854775807 - 1)));
                        var_20 = ((((-29 ^ -32) ? 8191 : 3072)));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_21 ^= (((arr_6 [i_3 - 3] [i_1 + 2] [i_0 + 2]) ? (arr_6 [i_3 - 2] [i_1 + 2] [i_0 - 1]) : -4));
                            var_22 = 2251250057871360;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_23 = ((-(min(-119, 18444492823651680227))));
                            arr_15 [i_3 - 1] [i_3 - 1] [i_0] [i_1 + 1] [1] = ((arr_10 [i_5]) ? -8388607 : ((18446744073709551615 ? 65535 : (arr_2 [i_0 - 1]))));
                            arr_16 [i_5] [i_3] [i_0] [i_0] [i_1] [i_0 + 3] = 18444492823651680227;
                        }
                    }

                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] = var_6;
                        var_24 -= 1073217536;
                        arr_21 [i_0] [i_1] [i_2] [i_6 - 1] [i_0] = arr_19 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 3];
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_25 = -23;
                                arr_29 [i_0] [i_0] = -9223372036854775798;
                                var_26 ^= arr_22 [i_0] [i_1 + 3] [i_7 + 1];
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = var_18;
    #pragma endscop
}
