/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (+(((var_12 < var_5) ? (max(593723746, 0)) : var_13)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_1] [i_0] [i_2] [i_0] = (!var_4);
                var_19 = min((arr_5 [i_0]), var_7);
            }

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_20 ^= (max(1109901898, (((~var_5) ^ (~1989323561)))));
                var_21 = (max(var_21, (((max(var_8, (arr_6 [i_0] [i_0])))))));
            }
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_4] = ((var_6 | 2) ? var_8 : (((-(arr_14 [i_0] [i_4])))));
                var_22 = ((((arr_1 [i_4 - 1]) % (arr_1 [i_4 - 1]))));
                arr_17 [i_4] [i_1] [i_4 + 1] = (min((arr_4 [i_4 + 1] [i_4 - 1] [i_4 - 1]), ((max(var_13, (arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                var_23 = (arr_13 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_4] [i_1] [i_4] [i_5] [i_6] = ((~(max((arr_6 [i_0] [i_1]), var_12))));
                            var_24 = (((((~(arr_21 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))) ? ((max((arr_21 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]), (arr_21 [i_4] [i_4 + 1] [i_4] [i_4] [i_4])))) : ((~(arr_9 [i_4] [i_4 + 1] [1])))));
                            var_25 = (min(var_25, (((-((((arr_6 [i_0] [i_0]) || ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> var_7)))))))))));
                        }
                    }
                }
            }
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_26 = ((854660820 ? (max((arr_24 [i_7 + 1] [i_1] [i_7]), (min(var_11, (arr_29 [i_9]))))) : (((~(arr_10 [i_7 - 2] [i_7 - 2] [i_8] [i_8]))))));
                            var_27 &= max(var_2, (arr_19 [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8] [i_8]));
                            var_28 = (((!(arr_25 [i_8 + 3] [i_0]))));
                        }
                    }
                }
                arr_32 [i_7] [i_7] [i_7] [i_7] = (min((arr_15 [i_0] [i_7 - 2] [i_7]), (arr_15 [i_1] [i_7 - 2] [i_7])));
            }
            arr_33 [i_0] = ((~(((~var_1) ? (~3572565260) : (~var_2)))));
            var_29 = (min(var_29, ((((~((~(arr_21 [i_0] [i_0] [i_0] [i_1] [i_1])))))))));
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_30 += ((~((var_12 ? var_7 : var_2))));

            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                arr_39 [i_0] = (min(((~(min(0, -6495)))), ((~(~var_9)))));
                arr_40 [i_0] [i_0] [i_0] [i_0] = (max(((min((((!(arr_28 [i_10] [i_10] [i_11] [i_11] [i_11] [9])))), 2319994968))), var_15));
            }
        }
    }
    #pragma endscop
}
