/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_5, (((min((-127 - 1), 47))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = (min(var_19, (((var_13 == (((var_16 != (arr_1 [i_0] [0])))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_20 = (max(var_20, ((((((9203 ? (arr_2 [18]) : var_11))) ? 18247 : ((var_16 ? var_10 : (arr_0 [18] [18]))))))));
            arr_5 [12] |= ((-(arr_4 [i_0 - 1] [i_0 + 1])));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_21 *= (((((14831 ? -18247 : 35482))) && var_5));

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_22 ^= (arr_10 [6] [6] [i_2] [i_3]);
                    arr_12 [i_0] [18] [i_3] [18] |= 25502;
                }
                arr_13 [i_0] [i_1] = (arr_2 [i_0]);
            }
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_16 [i_0] = var_15;
            var_23 -= (((((1 ? var_15 : var_6))) >= var_9));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_20 [8] &= 1;
                var_24 |= 97;
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_25 ^= arr_0 [16] [i_4];
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_26 = (arr_31 [i_0 + 2] [i_7 + 2] [i_7 + 2] [i_7] [i_8]);
                            arr_32 [i_6] [i_0] [i_6] [i_0] [i_0] = ((var_3 - ((-22583 ? 30053 : 255))));
                        }
                    }
                }
                var_27 *= (((arr_9 [12] [i_4] [12]) ? (((arr_31 [i_0] [i_0] [17] [i_0] [i_0]) ? -29973 : var_1)) : (arr_11 [i_0] [i_0] [0] [0] [6] [i_0])));
            }
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    arr_38 [i_4] [12] [i_0] = (((((8582 ? (arr_14 [i_9]) : (arr_0 [i_0] [i_10])))) ? (((arr_8 [i_10] [i_10] [13] [i_10]) / (arr_18 [i_0]))) : ((((arr_15 [i_0]) * 0)))));
                    arr_39 [i_10] [i_0] [0] [i_0] [i_0] [i_0] = var_6;
                }
                for (int i_11 = 4; i_11 < 21;i_11 += 1)
                {
                    var_28 = (((arr_8 [i_0] [i_4] [i_0 + 1] [i_11 - 4]) ? ((var_9 ? var_3 : (arr_30 [i_0] [i_4] [i_9] [i_0] [i_11]))) : (arr_36 [16] [16] [16] [13] [i_11] [16])));
                    var_29 = -5357823731644262806;
                    var_30 = (((arr_7 [i_0 + 1] [i_9 - 2] [i_0]) ^ ((((arr_30 [i_0] [i_0] [0] [i_0] [i_0]) * -25774)))));
                    var_31 = (max(var_31, ((((arr_27 [i_9] [i_9] [i_9] [i_9]) ? 1 : ((122 ? (arr_7 [18] [18] [i_9]) : (arr_34 [i_9] [i_4] [i_4] [i_4]))))))));
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_32 = ((((var_17 && (arr_37 [i_0] [i_0] [i_4] [i_0] [i_0]))) && (arr_26 [i_0] [i_0] [i_0] [i_9] [i_0] [i_0])));
                    arr_45 [i_9] [i_9] [i_4] [i_9] |= ((+(((arr_17 [19] [19] [i_9] [19]) ? var_6 : (arr_10 [i_9] [i_9] [i_9] [i_9])))));
                    var_33 = (min(var_33, ((((((0 ? 7545 : 32767))) ? (arr_4 [i_0 - 1] [i_0 + 2]) : (arr_29 [i_9 - 2] [i_9 - 2] [i_0 - 1] [i_0] [i_0 + 1]))))));
                }
                var_34 ^= ((var_1 ? var_2 : var_14));
                var_35 = (max(var_35, ((((11671 ? var_5 : (arr_41 [i_9] [i_9] [i_4] [i_9])))))));
            }
            arr_46 [20] |= (arr_35 [i_0] [i_0]);
        }
        for (int i_13 = 1; i_13 < 21;i_13 += 1)
        {
            arr_49 [i_0] [i_0] = (((-32767 - 1) - 32));
            var_36 = 108;
        }
    }
    var_37 = (((min(var_1, (min(26146, var_9)))) - (((-11672 ? -18248 : (-32767 - 1))))));
    #pragma endscop
}
