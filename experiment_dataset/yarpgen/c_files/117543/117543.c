/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 51179;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_14 = (((((((51156 ? 28672 : var_0)) | (arr_0 [i_0 + 1])))) ? var_2 : (arr_3 [i_0] [i_1] [i_1])));
                    var_15 *= var_6;
                }
                arr_10 [i_1] [7] [i_1] = -206295364;
            }
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {
                        var_16 = (arr_15 [i_4 + 2]);

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_17 += ((!((((((60710 ? 8778913153024 : 51179))) ? (arr_0 [i_4 - 1]) : (arr_1 [1] [i_0 + 1]))))));
                            arr_20 [i_0] [i_1] [i_4 + 2] [11] [i_1] [i_6] [i_1 + 3] = (arr_18 [i_4 + 3] [i_1 + 2]);
                            var_18 += (((((min((arr_12 [8] [i_4] [7] [i_0]), var_2)))) ? (max(((var_8 ? 206295356 : var_0)), 1)) : (((((max((arr_4 [i_0]), 206295363))) ? ((1 ? var_6 : var_8)) : ((var_4 ? 48359 : var_8)))))));
                            var_19 = var_8;
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_20 = arr_8 [i_5 + 1] [8] [6] [i_5 + 1] [i_5 - 1] [i_5 - 1];
                            arr_23 [i_0] |= ((((max(var_5, 39053))) == (((arr_18 [i_0 - 1] [i_1 + 4]) % 33632))));
                            arr_24 [i_0] [i_5] [i_7] &= (((!(arr_18 [i_0 - 2] [i_1 - 1]))));
                            var_21 ^= arr_22 [1];
                            arr_25 [i_1] = (min(((-(arr_21 [i_5 + 1] [i_1] [i_4]))), (arr_21 [i_4] [i_1] [i_4 - 1])));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            var_22 = (max(var_22, (((((var_8 ? 206295371 : (arr_27 [i_0 + 1] [i_1 + 3] [i_1 + 3] [i_5 + 1] [9] [i_8]))) - 28672)))));
                            var_23 -= ((8944710677982501932 ? var_8 : (arr_27 [i_0 - 1] [i_4 - 1] [1] [i_5 + 1] [i_4 - 1] [9])));
                            arr_29 [i_0 + 1] [i_1] [i_1] [i_1] [i_1] [i_5] [4] = (arr_27 [i_8] [i_8] [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 3]);
                        }
                    }
                }
            }
            var_24 = ((((max(0, (arr_28 [i_0] [i_0] [i_0 + 1] [6] [i_0] [i_0])))) == ((var_6 ? -206295364 : (arr_28 [i_1] [i_1 + 3] [i_0 - 1] [3] [i_0 - 2] [i_0])))));
            arr_30 [i_1] [4] [i_1] = 16325;
            var_25 |= 206295381;
        }
        var_26 = 1;
    }
    #pragma endscop
}
