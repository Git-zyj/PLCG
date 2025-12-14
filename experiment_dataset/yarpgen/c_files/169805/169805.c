/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (var_1 || 18446744073709551615);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = (((var_9 >> (var_16 - 8940707474995608238))));
                                var_19 = (max(var_19, ((-18446744073709551602 ? 26098 : 18446744073709551602))));
                            }
                        }
                    }
                    var_20 -= (arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [15] [i_2 - 1]);
                }
                arr_14 [i_0] [i_1] = ((~(arr_3 [i_1] [i_1 + 1])));
                var_21 = 4628808021141781061;
                arr_15 [i_0] [1] = (arr_5 [i_0] [i_0] [i_1 - 2]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, 18446744073709551615));
                                arr_24 [i_0] [i_1] [i_5] [9] [i_6] = ((2011177052 ? 5085712398026729787 : 28012));
                                arr_25 [i_6] [i_1 + 1] [i_6] [i_6] [10] [i_1 - 2] [10] = 234;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
