/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (min(var_14, (min((~var_2), ((-((min(var_3, var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((max((arr_1 [i_0] [i_0]), (max(1, 4294967295))))) ? var_4 : (((arr_1 [i_1 + 1] [i_1 + 1]) ? (!var_11) : -2)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 = (arr_2 [i_1]);
                    var_17 += ((-(2147483647 % 16352)));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_18 = ((216029803 ^ (arr_1 [i_0] [i_1 + 2])));
                        var_19 = ((-(!16550513369238676612)));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1 + 2] [i_2] [i_4] = ((-116655118 % var_6) ? var_11 : (((arr_0 [i_0] [i_0]) ? var_12 : var_1)));
                        var_20 = (arr_3 [i_1 + 3]);
                        var_21 = (min(var_21, 65535));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_22 += (((~1115418868514602258) ? ((((arr_12 [i_0] [i_0] [i_0] [i_0]) / (arr_2 [i_0])))) : (arr_9 [13])));
                            arr_15 [i_0] [i_5] [i_2] [i_0] [i_6] = var_0;
                            var_23 = (arr_2 [i_0]);
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            var_24 |= arr_5 [i_0] [i_0] [i_0];
                            arr_19 [i_0] [i_0] [i_0] [i_7] [i_0] = ((!(arr_2 [i_0])));
                            var_25 = ((!(arr_16 [i_1 + 2] [i_1 + 2] [i_7] [i_1 + 2] [i_1] [i_1 + 1])));
                        }
                        var_26 = (min(var_26, (arr_13 [i_1] [i_1] [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3] [i_1])));
                        var_27 = (min(var_27, (((~(((arr_8 [23] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5]) | 0)))))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, (((~(arr_7 [i_1 + 2] [i_1] [i_1 - 1]))))));

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_29 += ((var_10 << (-118 + 149)));
                            var_30 = 16968929838133014581;
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_31 = min(3564712536, (arr_25 [1] [i_1] [i_10] [i_10]));
                    var_32 ^= ((!((min(0, ((min(var_11, (arr_7 [i_0] [i_1] [i_10])))))))));
                }
                arr_27 [i_0] [i_0] = max((((((var_11 ? 67108736 : var_12)) % (arr_23 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))), ((-(arr_3 [i_1 + 3]))));

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_33 = (min(var_33, (((-(((max(var_7, 2547596764)) % (((min(16741, var_11)))))))))));
                    arr_30 [i_0] [i_0] = ((~(~var_4)));
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {

                    for (int i_13 = 4; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_34 ^= -101;
                        arr_36 [i_0] [i_1] [i_12] [i_12] = (arr_13 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12] [7]);
                        var_35 = (-(16 || 6098));
                    }
                    for (int i_14 = 4; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_0] [i_12] [i_0] = var_9;
                        arr_42 [15] [i_1] [i_14 - 4] [i_14] [i_12] [i_14] = (((!-91) == (~var_9)));
                        var_36 = var_1;
                        var_37 = (((arr_8 [i_14 + 1] [i_14] [15] [i_14] [i_14 + 2] [i_14 + 2]) ? (((arr_1 [i_0] [i_0]) ? var_12 : var_7)) : 0));
                    }
                    for (int i_15 = 4; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        var_38 = (arr_35 [i_1 - 1] [i_12 - 1]);
                        arr_46 [i_12] = (arr_32 [19] [i_1 + 2] [i_1 + 2] [i_15 - 4]);
                        arr_47 [i_0] [i_12] [i_12] [i_12] [i_0] = ((~-1891583415) ? ((((arr_23 [20] [22] [i_12] [20] [i_0]) ? (arr_39 [i_15 - 3] [i_15] [1] [i_12 + 1] [i_1] [i_0]) : 65535))) : ((0 ? var_6 : 3289399897)));

                        for (int i_16 = 1; i_16 < 22;i_16 += 1)
                        {
                            var_39 = (min(var_39, var_9));
                            var_40 = ((!(arr_25 [i_0] [i_1] [i_12] [i_12])));
                        }
                    }
                    var_41 = 1863788400905760745;
                    arr_51 [i_12] = (((!-126) < ((var_6 ? var_10 : 114))));
                    var_42 += var_7;
                }
            }
        }
    }
    #pragma endscop
}
