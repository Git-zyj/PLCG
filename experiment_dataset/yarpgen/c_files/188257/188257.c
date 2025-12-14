/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 4793580919883010207));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min((arr_1 [i_2]), (((+((min((arr_0 [i_0] [i_2]), var_3)))))))))));
                    arr_9 [i_0] = (arr_0 [i_2] [i_1]);
                }
            }
        }
        var_14 = (arr_7 [i_0] [i_0] [i_0]);
        arr_10 [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0]) * ((((((67 ? 131 : 189))) < (arr_1 [i_0]))))));
        var_15 = 65;

        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((min(var_4, (arr_2 [i_3] [i_5])))) ? (arr_2 [i_3] [i_5]) : ((-(arr_2 [i_6] [i_5]))))))));
                            var_17 = (min(((((max(var_4, (arr_5 [i_6] [i_0] [i_3]))) << (var_6 - 41553)))), (min((((var_11 ? (arr_11 [i_0]) : var_3))), -4793580919883010207))));
                            var_18 = (max(var_18, (!var_1)));
                            var_19 = 1048448;
                        }
                    }
                }
            }
            var_20 = (arr_12 [i_0] [i_3] [i_0]);
            arr_24 [i_0] [i_0] = ((-(arr_1 [i_0])));
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_21 = (min(var_21, 2463533071));
            var_22 = (min(var_22, -var_0));

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_23 = ((2417283185264113084 ? (arr_7 [i_0] [i_7] [i_7]) : -24358));
                            var_24 = -19127;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((((var_8 ? (~var_4) : (arr_40 [i_8] [i_11])))) ? ((~(min((arr_12 [i_0] [i_7] [i_11]), (arr_15 [i_0] [i_11]))))) : 2147483647)))));
                            var_26 = (min(var_26, (((var_8 * (min(4793580919883010227, (arr_41 [i_11] [i_11]))))))));
                            var_27 = (arr_27 [i_0] [i_0]);
                            var_28 = min((arr_29 [i_11 + 2] [i_11 - 1] [i_11] [i_11 + 2]), ((((arr_29 [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 1]) ? (arr_29 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1]) : var_6))));
                        }
                    }
                }
            }
            var_29 = (((~-24384) ^ (((arr_41 [i_0] [i_0]) ? var_3 : var_9))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_30 = (max(var_30, (arr_21 [i_0] [i_7] [i_15] [i_14] [i_15])));
                            var_31 = (max(var_31, ((min(var_11, ((((((arr_11 [i_15]) * var_10))) * (arr_33 [i_0] [i_7] [i_13] [i_14] [i_15]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
