/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 15644847407965500264;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_18 = (((arr_4 [i_0] [i_1] [i_1]) ? (((arr_4 [i_1] [i_1 - 2] [i_0]) ? var_12 : var_14)) : -114));
            var_19 = (max(var_19, (((var_10 ? (((var_4 ^ (arr_3 [i_0] [i_0])))) : (2801896665744051350 | 2801896665744051352))))));
            arr_6 [i_1] [i_1] = (((arr_3 [i_0] [i_0]) <= ((var_4 ? -18 : 255))));
            arr_7 [i_1] [i_1] [i_1] = ((((arr_1 [i_0] [5]) ? (arr_3 [i_0] [i_0]) : 8078)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = 65024;
            var_21 = (((((2097151 != (arr_1 [i_2] [i_0])))) << (var_3 - 26561)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 = 1;
            var_23 = (min(var_23, (((((((-127 - 1) ? 47 : (arr_12 [i_3] [i_0])))) ? (arr_3 [i_0] [i_3]) : 0)))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_4] [1] [i_0] [9] = (((arr_13 [i_7 + 2]) + 17));
                            arr_24 [i_7 - 2] [i_7] [i_6] [i_6] [i_4] [8] [1] &= (((arr_17 [i_7 + 1] [i_7 + 1] [i_4] [i_7 + 1]) + (arr_4 [i_6 + 2] [i_7 - 2] [i_7 - 2])));
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_24 = var_4;
                    var_25 = 3121984611635313710;
                }
            }
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                arr_31 [i_4] [i_4] [i_4] [6] = ((!((max((arr_15 [i_9]), (arr_16 [i_9 + 2] [i_9 + 2] [i_9 - 3] [i_9 - 2]))))));
                var_26 = (min(var_26, (((-(max((max((arr_13 [i_0]), (arr_25 [i_0] [i_4] [i_9] [i_9]))), 80465553)))))));
                var_27 = (min((arr_30 [i_9 + 1] [i_9 - 2]), ((-48 ^ (arr_18 [i_9] [i_9] [i_9 - 2] [i_9])))));
            }
            arr_32 [i_0] [i_4] [i_4] = (min(((min((arr_10 [i_0] [i_0]), -8079))), (min(35252, (((arr_20 [i_0] [7] [10] [i_4]) - 946144973))))));
            var_28 = ((min((arr_30 [i_0] [i_0]), var_16)));
            var_29 = (max(var_29, ((((((((61636 << (12288 - 12286)))) >= (((arr_20 [i_0] [i_0] [i_0] [i_0]) ? 16837088632560773947 : var_4)))) && (16837088632560773947 & 54))))));
            var_30 *= (arr_20 [i_0] [i_0] [i_0] [i_0]);
        }
        var_31 *= 0;
        arr_33 [i_0] = 71;
    }
    #pragma endscop
}
