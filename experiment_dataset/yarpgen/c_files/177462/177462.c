/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = (((arr_2 [i_0] [i_1]) ^ (arr_2 [i_0] [i_0])));
            var_14 = (arr_0 [i_0]);
            arr_6 [i_0] [i_1] = (arr_0 [i_0]);
            var_15 = ((1 ? (((arr_0 [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0]))) : ((9976420932948230171 ? (arr_0 [i_1]) : 1))));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = 43893;

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] = var_11;
                            var_16 ^= ((var_9 ? 12964973270212902208 : ((var_0 ^ (arr_0 [i_0])))));
                        }
                    }
                }
                var_17 = (~var_0);
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_24 [i_2] [i_2] [i_6] = ((14380713879626501388 + ((((arr_0 [i_7]) + 4785007506601179608)))));
                    arr_25 [4] [i_2] [i_2] [i_0] = ((15424138012157236425 ? 1 : 1));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_18 = -8419295641865762575;
                    var_19 = var_10;
                    var_20 = 0;
                    var_21 -= (arr_4 [7] [i_2 + 1]);

                    for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, ((!(((var_2 ? 1 : 1)))))));
                        var_23 = (arr_11 [i_0] [i_8] [i_0]);
                    }
                    for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_24 = ((arr_30 [i_0] [9] [i_2] [9] [i_2 - 1] [i_10] [i_10]) ? (arr_30 [i_0] [i_2] [i_2] [i_2] [i_2 - 1] [i_8] [i_8]) : 1);
                        var_25 -= (arr_4 [i_8] [i_10 - 1]);
                    }
                    for (int i_11 = 2; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_6] [i_2] |= ((9342 ? (arr_0 [i_2 - 1]) : (arr_13 [i_0] [i_0] [i_0] [i_0])));
                        var_26 = 1;
                    }
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    var_27 *= (((arr_11 [i_6] [i_0] [i_2 - 1]) ? 8419295641865762561 : (arr_11 [i_0] [1] [i_2 - 1])));
                    var_28 = 4385;
                    arr_40 [i_0] [i_2] [i_6] [i_6] = ((9342 ? 4294967295 : 18446744073709551602));
                    arr_41 [i_0] [i_6] [i_6] &= (((((arr_23 [i_0] [i_0] [i_0]) ? -14657 : (arr_12 [i_0] [i_2 + 1] [i_6]))) ^ -9349));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_29 = 5348849902304417154;
                            arr_47 [7] [i_2] [i_6] [i_2] [7] = (arr_35 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [11]);
                            var_30 += -16384;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_31 *= (arr_35 [i_2] [i_2 - 1] [11] [1] [i_2] [i_2 + 1] [i_2 - 1]);
                var_32 = ((~(arr_26 [1] [i_2] [1] [1] [i_2 + 1])));
            }
            arr_51 [i_0] [i_2] = (!var_0);
            var_33 = (arr_26 [1] [i_2] [i_0] [i_0] [i_0]);
        }
        var_34 = (arr_32 [12]);
        var_35 *= (arr_43 [1] [10] [1] [1]);
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            {
                var_36 -= (arr_4 [i_16] [i_16]);
                var_37 = ((((max((arr_38 [i_17] [i_17] [i_17] [i_16] [i_16] [i_16]), (arr_38 [i_16] [i_16] [i_16] [i_16] [i_16] [1])))) << 1));
                var_38 = ((-5092033666638892428 ? 1 : -470558799));
                var_39 -= ((((max((arr_31 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_49 [i_16] [i_16] [i_16])))) ? (((((min((arr_12 [i_17] [i_16] [i_16]), 62539))) > -2132746905))) : ((((((var_12 ? var_11 : 8727792120345745962))) || ((((arr_7 [i_16] [2]) * 1))))))));
                var_40 += (arr_52 [i_16] [i_17]);
            }
        }
    }
    var_41 += min(((((min(8419295641865762575, 28672))) ? 1778890183 : var_11)), ((((max(var_1, var_10)) || -66))));
    #pragma endscop
}
