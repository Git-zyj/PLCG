/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [5] [1] = (min(((((min((arr_5 [i_0]), -64))) ? (arr_4 [i_0] [i_0]) : (arr_0 [i_1] [i_0]))), (arr_1 [i_0])));
                var_16 += (min((0 <= 0), (min(-13, ((7 ? var_5 : 0))))));

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_17 = ((~((12 ? (~27) : (~0)))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] = (((!(var_14 * var_0))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_18 = (2187801534 >= 2187801535);
                        var_19 = (max(var_19, (((!(((168 ? 0 : -46))))))));
                        var_20 = ((-2147483622 ? (arr_8 [i_0] [i_0] [i_0]) : 129));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_21 &= (((((((((!(arr_0 [i_0] [i_0]))))) & -2187801548))) ? ((var_4 << (2147483622 - 2147483597))) : (arr_8 [i_0] [i_0] [i_0])));
                        var_22 ^= (min(var_2, -430433822075598650));
                    }
                    var_23 = ((+(min((arr_3 [i_2 + 1]), ((59269 ? 73 : 26))))));
                    var_24 = ((-1 ? -3969293031386104677 : 2414314720));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((!(48836 << 0))))));
                                var_26 = ((!(min((arr_8 [i_7] [i_7] [i_7 - 1]), (arr_8 [4] [4] [i_7 + 1])))));
                                var_27 = ((((25956 ? (arr_1 [i_0]) : 16463)) ^ (((min(var_13, (arr_18 [i_7] [i_6] [i_2] [i_1] [i_0])))))));
                                var_28 = (max(var_28, (((min(1, -49085))))));
                            }
                        }
                    }
                    var_29 = ((((((arr_15 [i_0] [i_1]) ? 0 : -1978744495))) * (((min(var_0, (min((arr_2 [i_0] [i_1]), (arr_9 [i_0])))))))));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_30 &= (((arr_18 [14] [i_1] [i_1] [i_1] [i_1]) ? 5 : (arr_18 [i_0] [i_0] [i_1] [i_8] [i_9])));

                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            var_31 *= 2107165754;
                            var_32 = (((4294967295 ? 18184258451237835336 : (arr_21 [i_9] [i_8] [i_1] [i_0]))));
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_33 += (arr_15 [i_0] [i_8]);
                            arr_30 [i_11] [i_11] [i_11] = (((arr_14 [i_9] [i_1]) && (arr_9 [i_0])));
                            var_34 = (min(var_34, ((((arr_15 [i_0] [i_11 + 1]) ? (arr_15 [i_0] [i_11 + 2]) : (arr_15 [i_0] [i_11 + 1]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_35 = ((~(arr_19 [6] [i_1] [i_8] [i_12] [i_12])));
                        var_36 = (max(var_36, (((-(arr_5 [i_12]))))));
                        var_37 = (max(var_37, 52908));
                        arr_34 [i_8] = ((-3724 ? (((arr_22 [i_0] [i_1] [i_12] [i_12]) ? -9223372036854775805 : (arr_27 [i_0] [i_1] [i_0] [i_12] [i_1]))) : (!var_2)));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_38 = ((-2147483640 ? ((6279 ? var_6 : var_2)) : var_10));
                        var_39 = (31 + 127);
                        var_40 = (!-6);
                        arr_38 [i_0] [i_0] [i_0] [10] [10] [i_13] = (((((arr_25 [i_13] [i_13] [i_8] [i_1] [i_0]) <= var_7)) ? -108 : (~var_5)));
                        arr_39 [i_0] [i_1] [i_0] = ((~(arr_25 [i_0] [i_0] [i_0] [11] [i_0])));
                    }
                    var_41 *= (min(83, (arr_33 [i_0] [i_1] [i_8] [i_1])));
                    var_42 ^= ((+((min((arr_22 [i_0] [i_0] [i_1] [i_8]), (arr_22 [i_0] [i_0] [i_0] [i_8]))))));
                }
                arr_40 [i_0] [i_0] [i_1] &= var_2;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_43 = 9304;
                            arr_46 [i_15] [i_0] [i_1] [i_0] [i_0] = ((-55 ^ ((((((arr_42 [i_14] [i_15]) ? 936161953 : (arr_29 [i_0] [i_1] [i_14] [i_14] [i_15])))) ? (~-1) : (((1 ? 36 : (arr_15 [i_0] [i_1]))))))));
                        }
                    }
                }
            }
        }
    }
    var_44 = (!var_13);
    #pragma endscop
}
