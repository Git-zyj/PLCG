/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_2 ? 9223372036854775807 : ((19371 ? -80 : (-9223372036854775807 - 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_13 = (~105);
                        var_14 ^= -104;
                        arr_13 [1] &= arr_0 [i_0];
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        var_15 += ((-96 ? 19371 : (~-115)));
                        var_16 = var_7;
                        arr_17 [i_1] &= (((max((arr_6 [i_4]), (arr_11 [i_4]))) | (((~(((9223372036854775776 > (-9223372036854775807 - 1)))))))));
                    }
                    var_17 -= (((arr_5 [23]) ? 224 : (((4294967295 << (-80 + 103))))));
                    arr_18 [i_1] = (-1 <= 109);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_18 = (arr_6 [13]);
                arr_26 [i_5] = (max(((9223372036854775807 ? -9223372036854775799 : -115)), (arr_20 [i_5])));

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_30 [i_5] [i_6] [i_5] = -96;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_36 [i_5] [i_5] [7] [i_5] [4] [7] = ((((-58 ? ((46165 ? var_9 : (arr_15 [i_5] [i_6] [i_7] [14]))) : (!var_2)))) ? (max(-19376, ((126 ? -4610920337140754128 : (arr_24 [i_9]))))) : ((((6083 == (arr_21 [i_9]))))));
                                arr_37 [i_5] [i_6] [3] [i_5] = -115;
                                var_19 = ((~12332) & (((-114 < (arr_19 [i_5])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    var_20 *= (((~2) & (arr_10 [i_10 - 1] [i_10] [i_10] [i_10 - 1])));
                    var_21 &= ((~(arr_15 [20] [20] [i_10 - 3] [i_10])));
                    arr_40 [i_5] [i_6] = (0 ^ 88);
                    var_22 -= 60;
                }
            }
        }
    }
    var_23 &= (~var_4);
    var_24 &= var_11;
    #pragma endscop
}
