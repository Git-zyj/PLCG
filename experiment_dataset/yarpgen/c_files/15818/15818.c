/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_0 [i_0]) + (arr_2 [i_0])))) ? ((((1 ? (arr_0 [i_0]) : 32)))) : ((~(arr_3 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_11 [i_1] [12] = 1;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_14 [i_3] [i_1] [i_0] [i_3] [i_3] [i_0] &= (((((arr_3 [i_1]) ? var_17 : (arr_3 [i_3])))) ? ((((var_18 && (arr_8 [i_0] [i_1]))) ? var_14 : (arr_6 [i_3]))) : ((((!(arr_5 [i_0]))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_20 = (~-32061);
                            var_21 = (min(var_21, (((~((23570 ? (arr_18 [i_1] [i_0] [i_2] [i_1] [i_0]) : ((-104 ? (arr_18 [i_0] [i_1] [8] [i_4] [i_0]) : (arr_1 [0] [0]))))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_22 [i_2] [i_2] |= ((-((-17673 ? (arr_0 [12]) : -2147483647))));
                            arr_23 [i_0] [i_0] [i_2] [i_5] [i_5] = (arr_13 [i_5 + 2] [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5 + 2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_22 += ((var_1 ? var_5 : var_13));
                            var_23 = 47873;
                        }
                    }
                    var_24 += ((((((((-(arr_1 [i_0] [i_0])))) ? ((-1755327510 ? var_18 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_0 [i_0])))) ? 17646 : (810461817 <= 158478991300133250)));
                    arr_26 [4] [13] [i_2] [14] &= (((((1 ? var_3 : -1234648035))) ? ((0 ? 1191384686 : (((arr_17 [i_0] [i_0] [i_0] [i_2] [14] [i_2] [i_2]) / 16090820609908164312)))) : (((var_4 ? 1 : ((var_3 ? 1 : -8938580132199887497)))))));
                    var_25 = (((-4110595092949907651 + 9223372036854775807) << (((((arr_12 [i_0] [i_0] [i_2] [i_2] [i_2]) ? 63 : (((arr_15 [i_1]) ? (arr_16 [i_0] [i_0] [6] [i_0] [i_2]) : 10518)))) - 63))));
                }
            }
        }
    }
    var_26 ^= (((((0 ? (26 + var_9) : -var_14))) ? var_11 : (~1)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            {
                arr_32 [16] [16] [16] = (arr_27 [i_7] [i_8 + 2]);
                arr_33 [i_7] [0] [0] &= (arr_30 [i_8] [i_8] [i_8]);
            }
        }
    }
    #pragma endscop
}
