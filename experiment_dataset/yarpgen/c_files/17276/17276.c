/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((2805548132220819075 == var_1) - ((-(var_3 & 1)))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_17 = 95077592;
        var_18 &= ((((((max(1, (arr_1 [i_0])))) * -63))) - (max(((min((arr_1 [3]), 511))), ((200 * (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 8;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] = (arr_5 [i_1 - 4] [i_2 + 2] [i_2]);
                    arr_13 [i_1 - 1] [i_1] [i_1] [2] = (((arr_10 [i_1 - 4] [i_2 + 2]) / (arr_10 [i_1 - 4] [i_2 + 2])));
                    arr_14 [i_3] [i_2] [i_3] [8] = (((arr_3 [i_1] [i_2]) + ((-399132782 / (arr_9 [i_1 - 1] [i_2] [i_3])))));
                    var_19 -= (((((arr_5 [i_1] [i_1] [i_3]) - (arr_4 [1]))) - 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_20 [i_1 + 3] [i_4] = -82;
                                var_20 = (((arr_17 [i_1] [i_2] [i_1 + 2] [i_1 + 2]) & (95077589 >= 193)));
                                arr_21 [i_1] [i_1] [i_3] [5] [i_5] [i_5] = (arr_4 [i_3]);
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [2] [i_1] = (arr_11 [i_1 - 3] [i_2 + 2] [i_3] [i_2 + 2]);
                                var_21 += (arr_15 [i_3]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((arr_4 [i_1 + 3]) != 195));

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_23 ^= (!((((arr_9 [i_1 - 1] [i_6] [i_6]) % (arr_16 [i_1 + 1] [i_6 - 2] [i_6 - 1])))));

            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                arr_29 [i_1] [i_6 + 1] [i_6] [i_7] &= ((!(!58)));
                var_24 = (arr_0 [i_6 + 1]);
                var_25 -= ((((((arr_25 [i_1 - 1] [i_6 + 1]) - (arr_8 [i_1] [0] [i_1])))) * 18446744073709551606));
                var_26 = (max(var_26, ((((arr_7 [i_7] [i_7 + 1] [i_7]) - 74)))));
                arr_30 [i_1] [i_1] [i_6 - 2] [i_7] = ((-(arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
            }
            arr_31 [i_1 - 1] [i_6] = ((-(arr_24 [i_1 - 4] [i_6 - 2])));
            var_27 = (max(var_27, 95077592));
        }
        arr_32 [i_1] = (arr_8 [i_1] [i_1 + 1] [i_1]);
        arr_33 [i_1] = -95077593;
    }
    var_28 = var_6;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 6;i_10 += 1)
            {
                {
                    var_29 *= ((((-(61 * 8505))) - 79));
                    var_30 += (arr_36 [i_8] [i_9]);
                }
            }
        }
    }
    var_31 = 60;
    #pragma endscop
}
