/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_13 = (min(((-(1 ^ 33))), ((0 ? ((2147483647 ? 6 : var_5)) : var_4))));
                        arr_13 [i_0] [8] [i_0] [i_3] [i_0] = ((-(1 & 1)));
                        arr_14 [i_0] [i_0] [i_2] = 50;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_14 ^= ((-(min(2418606619, 1))));
                            var_15 *= (1 ? 0 : -29);
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((1 << ((0 >> (32767 - 32764)))))) ? (((-((min(1, 1)))))) : (max(3, 1536108757))));
                            var_16 = ((-((180 | (((~(arr_12 [i_0] [i_4 + 2]))))))));
                        }
                        var_17 = (((1 + 1) ? 1 : var_5));
                        var_18 = (max(var_18, (arr_23 [i_4 + 1] [i_1] [i_1] [1] [1])));
                    }
                    var_19 = (max((((((-(arr_18 [i_0] [i_1 + 4] [5] [i_0] [5] [4]))) != var_3))), (min((~255), (min((-2147483647 - 1), 1))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_20 = -28797;

        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_21 *= ((~(arr_0 [i_8 - 2])));
                var_22 = -var_2;
                var_23 = ((-((1 ? var_5 : var_9))));
            }
            var_24 = (--1);
        }
        var_25 -= ((-(28797 << 1)));
        var_26 = (-0 + var_1);
    }
    var_27 = (((((((255 ? var_10 : 21136))) ? (((max(20, 1)))) : var_11)) | var_2));
    var_28 = (max(var_28, var_10));
    #pragma endscop
}
