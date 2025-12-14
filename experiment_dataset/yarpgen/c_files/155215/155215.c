/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((!((max(2047, 2048)))));
    var_14 = var_6;
    var_15 *= ((var_7 & (~var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((((arr_6 [i_0] [i_0] [i_2]) * 0))) | ((-21632 ? (arr_5 [4] [4] [8] [i_4]) : 32767))));
                                var_16 = 1152921504606846975;
                                var_17 ^= (arr_4 [i_0] [4] [i_0]);
                                arr_12 [i_0] [11] [i_2] [i_3] [i_3] [6] [i_2] = ((!(((~(arr_2 [i_2] [i_0]))))));
                            }
                        }
                    }
                    var_18 = (min(var_18, (arr_2 [i_0] [5])));
                    var_19 *= (arr_8 [i_0] [i_2] [i_1]);
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_20 += (((-91 ? 956972244 : -8053881327624581786)));
                    var_21 *= (max((arr_2 [i_0] [i_5]), 8053881327624581798));
                }
                var_22 ^= (min(((max((arr_3 [2]), (arr_1 [i_0])))), ((((-2047 * (arr_5 [i_0] [i_0] [i_1] [7]))) / 3698789712))));
                var_23 *= (arr_1 [i_0]);
            }
        }
    }
    var_24 = -var_9;
    #pragma endscop
}
