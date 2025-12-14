/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                var_16 = ((4294967277 ? -1145664072 : 4294967292));
                var_17 += var_6;
                arr_9 [i_0 - 2] [i_1] [i_0 - 1] = (((2778 / (arr_3 [i_1] [i_1] [i_2 - 2]))) == (arr_6 [i_1 + 1] [i_1] [i_1] [i_0 - 1]));
                var_18 = (19054 * 0);
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_13 [i_0 + 2] [i_1] [i_3] = (-var_1 != var_5);
                arr_14 [i_0] [i_3] |= (((arr_2 [i_0 - 1] [i_3]) < (arr_10 [i_0] [i_0] [i_3] [i_0])));

                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    var_19 = (min(var_19, (arr_4 [i_1] [i_3] [i_1 + 3])));
                    arr_17 [i_0] [i_0] [i_0 + 2] [i_3] &= (((arr_5 [i_0] [i_0] [i_0 + 2]) > (~var_1)));
                }
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_20 = (99 && (arr_3 [i_1] [i_0 - 1] [i_0 - 1]));
                    var_21 = ((~(arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1] [i_1 + 1])));
                    arr_20 [i_5] [i_3] [i_0] [i_5] |= (((arr_7 [i_0]) ? -1145664072 : 24722));
                }
            }
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 |= ((-19 ^ (~-8)));
                    var_23 = (arr_21 [i_0] [i_1] [i_1] [i_0]);

                    for (int i_8 = 4; i_8 < 23;i_8 += 1)
                    {
                        arr_31 [i_1] = (((((var_7 | (arr_24 [i_1] [i_1] [i_6 + 1])))) ? (arr_1 [i_0 - 2]) : (arr_12 [i_0] [i_1] [i_1] [i_0 + 2])));
                        var_24 = 4294967289;
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_25 = (min(var_25, var_1));
                    var_26 ^= (((arr_7 [i_6]) ? 3 : 12699173193788742618));
                    arr_36 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_6] [i_1] [i_1 - 3] = ((~((-79 ? (arr_33 [i_1] [i_1 + 1] [i_6] [i_1 + 1]) : 2102693333))));
                    var_27 = var_10;
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_28 += ((!(arr_1 [i_0 - 1])));
                    var_29 = (min(var_29, ((50417 ? 50415 : 185))));
                    var_30 = (arr_18 [i_1]);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_31 = 242;
                            var_32 *= (arr_40 [i_11] [i_1 + 1] [i_12]);
                            arr_43 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 3] [i_1] = 4294967276;
                        }
                    }
                }
            }
            var_33 = 35847;
            arr_44 [i_1] = (arr_22 [i_1] [i_1 + 3] [i_0 + 1]);
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            var_34 = (min(var_34, ((((~(((var_14 + 9223372036854775807) >> (((arr_35 [i_13] [i_0] [i_0] [i_0]) - 12443947639584917283))))))))));
            arr_47 [i_13] [i_13] [i_13] = 4294967252;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 24;i_15 += 1)
                {
                    {
                        var_35 = (min((((((-(arr_48 [i_0] [i_13] [i_14] [i_15 - 2])))) ? (arr_21 [i_15] [i_0] [i_0] [i_0]) : (arr_53 [i_0] [i_0] [i_0] [i_0] [i_14] [i_15]))), (((!(!-87))))));
                        var_36 = ((((arr_34 [i_14] [i_14] [i_14]) * ((26 / (arr_3 [i_14] [i_14] [i_14]))))));
                    }
                }
            }
        }
        var_37 = (min(var_37, (((((~(arr_0 [i_0 - 1]))))))));
    }
    var_38 = var_13;
    #pragma endscop
}
