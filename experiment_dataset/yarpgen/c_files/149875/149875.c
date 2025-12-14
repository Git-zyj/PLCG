/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(-4 | 1775447465676020479)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(43216, 43233))) ? (((!(arr_0 [i_0])))) : (((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = 43188;
        var_17 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (((((-(arr_4 [i_1])))) ? (arr_1 [i_1] [i_2]) : 13527));
            arr_8 [i_1] [i_2] = var_2;
            arr_9 [i_1] [i_2] [1] &= (((max((arr_5 [i_2]), 29133))) ? (arr_5 [i_1]) : var_5);
            var_19 = (max(var_19, ((-13538 <= ((max((arr_1 [i_1] [i_2]), (arr_6 [i_1]))))))));
            var_20 -= (max(((max((arr_6 [i_2]), ((((arr_5 [i_2]) == var_8)))))), ((22347 ? 1 : -1119287613))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_1] [i_3] [i_1] = 45;
            var_21 ^= ((-(arr_10 [i_1])));
            arr_14 [i_3] [i_3] = (0 * -12957);
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_22 = ((((max(((min(var_6, 43188))), ((1 ? 1119287612 : 4294967281))))) ? ((((((arr_4 [i_4]) & (arr_4 [i_1])))) & 6071363478511445306)) : -var_8));

            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                arr_20 [i_1] [i_4] [i_4] [i_5] = ((((min((arr_12 [i_1] [i_5 + 3]), var_1))) ? (min((arr_12 [i_1] [i_5 + 2]), (arr_12 [i_1] [i_5 + 1]))) : (((arr_12 [i_1] [i_5 + 3]) ? var_0 : (arr_12 [i_5] [i_5 + 3])))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_27 [i_7] [i_4] [i_5] [i_4] [i_1] = 94;
                            arr_28 [i_4] [i_4] [i_5] [i_6] [i_7] = (min(((min(1, 22351))), ((var_0 ? (arr_25 [i_6 - 2] [i_6 - 2] [i_6] [i_7 + 2] [i_7]) : (arr_25 [i_6 + 2] [i_6] [i_6] [i_7 + 1] [i_7 + 1])))));
                            arr_29 [i_4] [i_4] [i_4] = var_12;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_23 ^= (arr_21 [i_1] [i_4] [i_8] [i_8]);

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_35 [i_8] [i_4] = (arr_4 [i_1]);
                    arr_36 [i_1] [i_1] [i_4] [i_9] [i_1] = ((~(arr_26 [i_1] [21] [i_8] [i_4] [0] [i_8])));
                    arr_37 [i_4] = ((34706 ? 18446744073709551615 : 12));
                    arr_38 [i_4] [i_1] = 0;
                }
            }
            var_24 |= ((((((arr_21 [i_1] [i_4] [i_4] [i_4]) ? (arr_21 [i_1] [i_1] [i_1] [i_1]) : -13538))) ? ((((0 ? (arr_26 [i_1] [i_1] [i_1] [18] [i_1] [i_4]) : var_8)) - var_0)) : ((var_7 & (arr_34 [i_1] [i_1])))));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            arr_42 [i_10] = (arr_26 [19] [i_1] [i_1] [i_10] [i_10] [i_10]);
            var_25 = ((~(((((var_5 ? var_5 : (arr_1 [i_1] [i_10])))) ? (((!(arr_12 [i_1] [i_10])))) : ((var_1 ? var_14 : (arr_5 [i_1])))))));
            var_26 = (arr_39 [i_10] [i_10]);
        }
        var_27 = (min(var_27, (((43188 ? (arr_1 [i_1] [2]) : (arr_1 [i_1] [20]))))));
        arr_43 [i_1] [6] |= max(37, var_9);
    }
    #pragma endscop
}
