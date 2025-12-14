/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= (((arr_1 [i_0]) / (arr_3 [8])));
                var_15 = (min(var_15, (((((1813785339453391283 ? (arr_1 [i_1]) : (arr_1 [16])))) >= (((arr_1 [i_0]) | (arr_0 [i_1] [i_0])))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = 12999;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 ^= (((((arr_7 [i_0] [16]) >= (max(var_8, var_6)))) || (((7657792118931574420 - (arr_6 [i_4 + 2] [i_1] [i_4]))))));
                                var_18 = (min(var_18, ((((max((arr_0 [i_4 + 2] [i_1]), var_4)) > (0 >= 2659))))));
                            }
                        }
                    }
                    arr_12 [5] [15] [i_2] [i_2] = ((((((1 << (18446744073709551615 - 18446744073709551597))) << ((((1589132982 ? (arr_1 [i_2]) : (arr_2 [i_2] [7] [i_0]))) + 69)))) + (arr_1 [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    var_19 = (min(var_19, ((((arr_6 [15] [4] [i_5 - 1]) * ((((arr_3 [2]) >> 1))))))));
                    var_20 -= 32165;
                }
            }
        }
    }
    var_21 = (min(var_21, (((~((((~var_1) != (-2147483647 + 127)))))))));
    #pragma endscop
}
