/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_4, ((max((~var_5), var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((~(min(18446744073709551609, -27922))));
                var_14 ^= (max((((arr_2 [i_0 + 2]) / var_10)), var_7));
                var_15 = (((((((min(var_6, var_3))) ? 27899 : (var_2 | var_1)))) ? (((27885 ? 12931 : (12931 + -75)))) : (max(-52, (var_1 & var_10)))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_16 ^= ((((-(arr_1 [i_2 - 1]))) << ((((arr_4 [i_2 - 1]) < (arr_5 [i_2 + 2]))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 = ((((4647691733372874473 ? (arr_7 [i_2 + 3]) : (arr_7 [i_2 + 2]))) * (arr_7 [i_2 - 1])));
            var_18 -= ((((min((arr_8 [i_2 - 1]), (arr_1 [i_2 + 2])))) || (var_6 * var_5)));
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            {
                var_19 = var_7;
                var_20 = ((var_10 * (((((arr_10 [i_4]) >= ((var_8 ? (arr_13 [i_5]) : (arr_14 [i_5])))))))));

                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_21 = (max(var_21, var_0));
                                var_22 += (((((arr_15 [i_4 - 1] [11] [i_8] [i_8]) + 2147483647)) << (((((arr_17 [i_5] [9] [i_8]) / (var_3 & var_9))) - 1))));
                                arr_22 [i_4] [i_4] [5] [10] [14] [i_8 + 4] = ((-(max((min((arr_13 [i_5]), var_10)), (arr_14 [i_4])))));
                                arr_23 [i_4] = (min((max(var_8, (max(128, 3459515773526815538)))), var_0));
                            }
                        }
                    }
                    arr_24 [i_4] [i_5 + 2] [i_6 - 2] [i_4 - 1] = (((max((min(27899, var_0)), (arr_19 [i_6] [8] [i_5 + 1] [i_4] [i_4 - 3]))) / (arr_20 [i_6] [i_5 - 1] [i_4] [15] [i_4])));
                    arr_25 [i_6] [i_6] [i_4] = (((((var_3 ? (arr_10 [i_4]) : var_9))) > (min((((65532 / (arr_19 [i_4] [i_5] [i_4] [i_5] [i_5])))), ((var_9 ? var_6 : (arr_12 [10] [10])))))));

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_23 = (min(var_23, (((~(arr_16 [i_5] [i_5 + 1] [14] [i_9 + 1]))))));
                        var_24 ^= (((var_5 <= var_6) ? (arr_26 [i_4] [i_4 - 2] [i_5 + 2] [i_6 - 2]) : (arr_13 [i_5 + 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
