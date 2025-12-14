/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += 203;
        arr_2 [i_0] = ((var_13 ? var_11 : ((((var_18 ? 2017755138 : 18446744073709551615)) % ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))))));
        var_20 += (min(((((arr_0 [6]) / var_15))), (((arr_0 [8]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_21 = ((1 ? -4582 : 2607572350));
                            var_22 = 0;
                            var_23 = (max(var_23, -88));
                            arr_17 [i_3 + 1] [i_4] = (((var_0 ? var_12 : 1)));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_24 = (((((62416 ? 119 : 1))) ? 65535 : (max(((min(0, var_2))), (~var_5)))));
                            var_25 ^= ((((arr_9 [i_1] [i_2] [12] [i_4]) ? (((arr_6 [i_1] [i_1] [2]) | var_13)) : var_16)));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_26 = (((((((arr_10 [i_1] [i_2] [i_4]) ? (arr_12 [i_2] [i_3 + 1] [i_2] [i_1]) : 18446744073709551615))) ? (((var_0 ? var_14 : (arr_9 [i_2] [i_2] [i_4] [i_7])))) : ((1 ? 5438302197813038373 : (arr_11 [i_1] [i_2] [i_2] [i_1] [i_7] [i_2]))))));
                            arr_22 [i_2] |= var_17;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_1] = (((((((((43840 ? var_5 : var_7))) || (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]))))) | 1));
                            var_27 *= (((((arr_21 [1] [i_1] [i_3] [i_3 - 1] [i_3 - 1] [1] [i_4]) > (arr_21 [14] [i_2] [17] [i_3 + 1] [i_3] [i_3] [1]))) ? (min((arr_24 [i_3 - 1]), (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_8]))) : -178468264522133449));
                            var_28 = (max(9149028029010355006, 6779828647128687745));
                        }
                        var_29 = ((~(arr_9 [i_1] [i_2] [i_3] [i_1])));
                    }
                }
            }
            arr_28 [i_1] [i_1] = ((((((((211 * (arr_6 [4] [4] [i_2])))) / (((arr_7 [i_1]) + var_17))))) ? ((min((arr_24 [i_1]), var_1))) : ((min(24, 0)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_30 = (min(var_30, ((((((468717606 ? (arr_6 [i_1] [i_1] [i_1]) : var_12))) ? (((((arr_16 [i_1] [i_1] [i_1] [i_9] [i_9]) + 2147483647)) << (4294967295 - 4294967295))) : (arr_7 [i_1]))))));
            var_31 = (max(var_31, (((~(arr_21 [i_1] [i_9] [i_9] [2] [i_9] [i_9] [i_9]))))));

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                arr_33 [16] = 0;
                var_32 += (arr_13 [i_1] [i_9]);
                var_33 = (((arr_4 [i_9]) ? (((-(arr_11 [i_1] [10] [i_1] [i_1] [i_1] [i_10])))) : (arr_21 [i_1] [i_1] [i_1] [i_1] [i_9] [i_1] [i_10])));
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                var_34 = (min(var_34, 1));
                var_35 ^= (((((arr_18 [i_1] [i_9] [i_9] [i_1] [i_1] [i_1] [i_1]) && (arr_25 [i_1] [i_1] [i_1] [17]))) ? -var_5 : 976025777));

                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    arr_41 [i_9] [i_11] [8] = (!-46);
                    arr_42 [i_12] [i_1] [i_9] [i_1] = (((arr_31 [i_11] [i_11] [i_11] [i_11]) >> (var_9 - 22736)));
                    var_36 = (max(var_36, (arr_9 [i_1] [i_1] [i_11] [13])));
                    var_37 = (min(var_37, (((0 ? (arr_9 [i_1] [4] [i_11] [i_12]) : (arr_9 [i_11] [i_9] [i_9] [i_12]))))));
                }
                var_38 ^= -4520;
            }
            arr_43 [i_1] [i_1] [i_9] |= 13546441696675450525;
        }
        arr_44 [i_1] = (((4294967295 || 17856) ? 3555542223 : (min((~2607572350), ((0 ? var_10 : (arr_24 [i_1])))))));
    }
    var_39 = (~var_16);
    var_40 = var_5;
    var_41 = var_12;
    #pragma endscop
}
