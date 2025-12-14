/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 ^= -1;
                    arr_7 [i_1] = max(-1, (var_15 >= var_1));
                }
            }
        }
    }
    var_18 = (4826 / -4826);
    var_19 = (!var_3);
    var_20 = ((((((max(3273534107358236001, var_6)) >= var_16))) + -4801));

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [i_3] = ((((!(arr_10 [i_3]))) ? 40002 : ((~(arr_10 [i_3])))));
        var_21 = max((arr_4 [12]), ((~(arr_4 [12]))));
        var_22 = (max((((arr_9 [i_3]) ^ (!var_9))), ((max(3273534107358236005, 1)))));
        var_23 *= -1;
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((-((-(((arr_13 [0]) ? (arr_13 [12]) : (arr_13 [8]))))))))));
        var_25 = var_6;
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] [5] |= var_10;
        var_26 |= ((((((arr_12 [i_5 - 3] [i_5 - 2]) < ((var_8 ? (arr_14 [i_5 + 2]) : 0))))) << (13719675953183646175 - 13719675953183646148)));

        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            var_27 = 18446744073709551615;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        var_28 ^= (max(-40002, (max(((((arr_15 [i_8]) >= var_4))), var_0))));
                        arr_26 [i_6] [i_8] = ((((((~var_2) ? (~-4826) : (arr_21 [i_5] [i_6 - 2])))) ? (var_9 + 4834) : 1));
                        arr_27 [i_8] = max((((max(25514, 10728643306386003545)) + 18446744073709551615)), (((~(1 && 3482908482258941214)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_34 [i_5] [i_5] [i_9] [i_5] [i_10] = ((-(arr_20 [i_5 - 3] [i_5 - 3] [i_5])));
                        var_29 = ((((((var_6 - (arr_13 [i_10]))))) ? var_3 : ((((25535 / (arr_13 [i_10])))))));

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_30 = (max(var_30, 4003302244));
                            arr_38 [i_10] [i_9] [8] [i_9] [i_9] = ((!(((-1 * (arr_33 [i_5 + 2] [i_5 - 3]))))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            var_31 *= (max((((arr_12 [i_5 + 2] [i_5 - 1]) & (((arr_40 [i_5] [i_5] [i_5] [i_5] [i_12]) ^ 65535)))), (arr_12 [i_12] [i_12])));
                            arr_41 [i_12] [i_12] &= ((((2905730537 ? 15173209966351315615 : (((1023 ? -14 : 40002))))) * -var_0));
                            var_32 ^= (max((max(var_8, (((-(arr_30 [i_5 + 2] [i_6] [i_9] [i_12] [i_10] [i_12])))))), -1));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                        {
                            var_33 |= (~40000);
                            var_34 = (((((arr_22 [i_5 - 3] [i_6 + 1] [i_6] [i_6 - 2]) >> (var_4 / var_8))) / (((((((var_11 > (arr_37 [i_10] [i_10] [i_9] [i_5] [i_10]))))) != var_5)))));
                            var_35 *= ((var_3 * (!var_11)));
                        }
                    }
                }
            }
            var_36 *= var_10;
            arr_44 [i_5] = ((((max(2424337738, (((arr_36 [i_5]) ? (arr_28 [i_5 - 3] [i_6] [i_6]) : -1))))) - (((var_13 + var_1) ? ((var_1 ? var_10 : 15173209966351315613)) : ((3 ? 2712681123454313128 : (arr_25 [5] [i_6] [i_6] [i_6])))))));
        }
        /* vectorizable */
        for (int i_14 = 4; i_14 < 20;i_14 += 1)
        {
            arr_48 [i_14] [i_14] [i_5] = (~0);

            for (int i_15 = 2; i_15 < 20;i_15 += 1) /* same iter space */
            {
                arr_51 [i_15] [i_14] [i_5] = (arr_30 [i_5] [i_5] [i_5 + 1] [i_15] [i_14] [i_14 + 1]);
                arr_52 [i_15] [i_14] [i_5] = (25550 && 0);
                var_37 ^= (((arr_50 [i_5 - 2]) * (arr_12 [i_15 + 2] [i_14 - 2])));
            }
            for (int i_16 = 2; i_16 < 20;i_16 += 1) /* same iter space */
            {
                var_38 = (max(var_38, -1));
                var_39 ^= 3273534107358236001;
                arr_56 [i_5] [i_14] [4] = (((arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 2] [i_16 + 2]) ? (arr_24 [i_5 - 3] [i_14] [i_16] [i_16 - 2]) : 212));
                arr_57 [i_5] [i_5] [i_14] [i_16] = var_12;
            }
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            arr_60 [i_17] [i_5 + 2] = (((arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (max((arr_15 [i_5 + 2]), var_1)) : (((-((max(var_6, (arr_20 [i_5] [i_5] [i_5])))))))));
            var_40 ^= var_12;
        }
    }
    #pragma endscop
}
