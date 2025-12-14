/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (((var_9 ? (~var_9) : (((var_8 + 9223372036854775807) >> (18397320637741373270 - 18397320637741373241))))));
    var_14 = ((!((((var_8 + 9223372036854775807) << (var_9 - 39728))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_6 [i_2] [i_1] [i_2] [i_2] = (arr_3 [17]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_15 += 0;
                            arr_13 [1] [11] [11] [i_1] [i_4] [i_4] [0] = (((((var_4 / (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [13] [15])))) ? 13023068975250346464 : (((arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]) ? 5423675098459205151 : 13023068975250346473))));
                            var_16 *= (!63);
                            var_17 &= (((arr_11 [i_3] [i_1] [i_2] [i_3] [i_4] [i_0] [i_3]) ^ (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4])));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_18 = ((-(arr_8 [i_5] [0] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_19 = (((arr_8 [i_5] [i_1] [i_5] [i_6]) ^ 4294967233));
                            var_20 -= (~var_10);
                            var_21 = ((13023068975250346471 ? -32660 : var_9));
                        }
                    }
                }
                arr_21 [i_0] [18] [i_0] &= 7923295876777309754;
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_22 -= 7923295876777309754;
                var_23 = ((154246458 + (((arr_20 [i_1] [5] [6] [i_1] [i_0] [i_1]) ? var_0 : (arr_16 [i_0] [15] [i_8] [i_8])))));
                var_24 = -23341;
            }
            var_25 = (max(var_25, (((!(arr_4 [i_0] [14]))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_26 -= ((-(arr_0 [i_10])));
                            var_27 -= (~12247588237841248806);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 4; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_41 [i_0] [i_9] [i_13] [i_14] = -3349498386948141320;
                        arr_42 [i_0] [9] [16] = (arr_34 [i_0] [i_0] [i_9] [i_9] [i_13] [7] [i_14]);
                        var_28 = (((arr_0 [i_13 + 1]) ? (arr_0 [i_13 + 1]) : 15));
                    }
                }
            }
        }
        arr_43 [i_0] [0] = (arr_29 [1] [8]);
    }
    var_29 = -98;
    var_30 = (((-41 + 2147483647) >> ((var_3 ? var_1 : var_12))));
    #pragma endscop
}
