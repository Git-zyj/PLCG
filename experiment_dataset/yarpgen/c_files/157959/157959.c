/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_0);

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 *= (((0 >> (min(var_10, 26)))));
        var_18 = (min((arr_1 [i_0] [i_0]), ((~(arr_0 [1] [i_0 + 1])))));
        arr_2 [5] = (((((((var_11 ? (arr_1 [i_0] [i_0 - 1]) : (arr_0 [i_0 + 1] [2]))) % var_5))) ? 26 : var_1));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((min(var_1, (arr_4 [i_1])))) ? var_6 : ((((((~(arr_3 [i_1] [i_1])))) ? (arr_6 [i_1] [i_1]) : (((var_2 ? 230 : 26))))))));
        arr_8 [i_1] = (((((arr_5 [i_1]) ? var_1 : (arr_3 [i_1] [i_1]))) == ((((arr_3 [i_1] [4]) > -22)))));
        arr_9 [i_1] [i_1] = 23;
        var_19 += ((~(min(var_10, (arr_3 [i_1] [i_1])))));
        var_20 += ((~64) ? var_4 : 949108558);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    var_21 &= (max(-28, ((229 ? 31 : (arr_10 [i_2 - 1] [i_4 + 2])))));

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [22] [i_3] [16] [i_5] [i_5] &= (max(var_15, var_0));
                        var_22 = ((((arr_16 [i_2] [i_2] [i_4] [i_3]) ? var_8 : (arr_14 [i_5] [i_4 + 2] [i_3] [i_2]))));
                        var_23 = (((((arr_19 [i_5 - 1] [i_3] [i_2 - 1] [i_3] [i_2]) ? (arr_19 [i_5 - 1] [i_3] [i_2 - 1] [i_3] [i_2]) : var_12))) ^ (((arr_19 [i_5 - 1] [i_3] [i_2 - 1] [i_3] [i_2]) ? (arr_19 [i_5 - 2] [i_3] [i_2 - 1] [i_3] [i_2 - 1]) : var_15)));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_24 = (~229);
                        var_25 = var_11;
                        arr_26 [10] |= 67108863;

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_26 = 4227858430;
                            var_27 += (arr_22 [21] [12] [i_2 - 1]);
                            var_28 = ((-(2636708722 - 38)));
                        }
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_29 = ((((((arr_20 [16] [i_3] [i_4 + 1] [i_8 + 1]) - 67108863))) ? var_0 : (arr_29 [i_8 - 1] [i_8] [i_3] [i_8])));
                            arr_33 [i_3] [i_3] [i_3] [i_3] [i_6] [i_8 + 1] [i_8] = ((~(arr_29 [i_2 - 1] [i_4 + 2] [i_3] [i_6])));
                            var_30 = ((224 ? 2648777037 : -1635253014));
                            arr_34 [i_3] [i_3] [i_4] [i_4] [i_4] = (arr_13 [i_3] [i_4 + 3]);
                        }
                    }

                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        var_31 += (min(((((arr_27 [10] [10] [i_4] [i_9 + 1] [i_3] [16]) && (arr_27 [i_2] [i_3] [i_4 - 1] [i_9 + 3] [i_4 + 1] [16])))), ((~(min(var_1, var_11))))));
                        arr_39 [i_3] [i_4 + 2] [i_3] [i_3] = ((-var_0 ? 13 : ((min(27, 65535)))));
                    }
                }
            }
        }
        arr_40 [i_2] = ((28 >> (((((((var_5 ? (arr_12 [i_2]) : (arr_19 [i_2] [6] [i_2] [6] [i_2])))) ? (arr_10 [i_2 - 1] [i_2]) : (!65507))) - 37774))));
        arr_41 [i_2 - 1] = ((!(((~(arr_19 [i_2] [i_2] [i_2] [22] [i_2]))))));
        arr_42 [i_2 - 1] |= 1336;
        var_32 = (((arr_14 [18] [i_2 - 1] [i_2] [i_2]) >> ((((min(var_9, 1336))) - 1326))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_33 = (((((var_7 ? var_3 : var_15))) ? 3566303375 : var_11));
        var_34 -= (arr_11 [i_10]);

        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            arr_47 [i_10] [i_10] [i_10] = (((((arr_24 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1]) + 9223372036854775807)) << (788224089 - 788224089)));
            arr_48 [i_10] = (arr_36 [i_11] [i_11] [i_11 + 1] [i_11 - 1]);
        }
        var_35 ^= ((-((~(arr_35 [i_10] [i_10] [1] [1])))));
    }
    var_36 = (min((6 | var_1), (!67108874)));
    #pragma endscop
}
