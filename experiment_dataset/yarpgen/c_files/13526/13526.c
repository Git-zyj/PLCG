/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (max(((max(var_3, -110))), (((arr_1 [i_1]) ^ (arr_1 [i_2])))));
                    arr_10 [i_1] = ((((max(1, (arr_0 [i_2])))) ? (((arr_6 [i_0] [i_1] [i_2]) | (arr_7 [i_1] [i_1] [i_2] [i_2]))) : ((max(1, (arr_8 [i_0] [i_0] [13]))))));
                    var_14 = (max((((arr_5 [i_2] [7] [i_2]) % 1)), (max(2, (((arr_3 [i_2]) ? 1 : (arr_6 [i_0] [i_1] [i_0])))))));
                    var_15 = (min(var_15, ((((((arr_8 [1] [i_1] [1]) % (arr_8 [i_0] [1] [i_2]))) == (1 + 101))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = (max(1, ((((max(1, (arr_13 [i_0] [i_0] [i_1] [i_0])))) > (arr_14 [i_3 + 2] [i_1] [i_2] [i_3 + 2] [i_4 + 1])))));
                                var_17 -= (arr_9 [i_0] [i_2] [i_4]);
                            }
                        }
                    }
                }
            }
        }
        var_18 = arr_9 [i_0] [10] [i_0];
        var_19 = (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), 11));
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        var_20 = (min(((max((max((arr_13 [i_5 + 3] [i_5] [i_5] [i_5]), var_12)), (-127 - 1)))), (((((-124 ? (-127 - 1) : 1))) ? ((((-127 - 1) > 1))) : (((arr_12 [i_5]) | (arr_3 [i_5 - 2])))))));
        var_21 = (max((min(((var_10 - (arr_8 [i_5 + 2] [i_5] [i_5 + 3]))), ((max((arr_12 [i_5]), var_5))))), 121));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_22 = arr_20 [i_6];

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_23 = ((1 ? -104 : var_5));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_24 = var_7;
                            arr_31 [i_8] = (((arr_24 [i_6] [i_6]) ? (arr_22 [i_7]) : (arr_24 [i_9 - 1] [i_10])));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        arr_36 [i_11] [i_11] = ((((min(0, 5))) ? (((((arr_25 [i_11] [i_11] [i_11]) ? 24 : var_11)))) : ((max((arr_35 [7] [7]), (arr_18 [i_11]))))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_25 = (((arr_20 [i_12]) | var_12));
            var_26 -= var_7;
            var_27 = (((arr_34 [i_12]) ? (arr_20 [i_11]) : 20));
            arr_40 [i_11] [i_11] |= (((arr_29 [i_11] [i_12] [i_11] [i_11] [i_12] [i_11]) ? (arr_38 [i_12] [i_11] [i_11]) : (arr_34 [i_12])));
        }

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_28 = (((((((-127 - 1) ? (arr_28 [1] [1] [i_11] [i_13]) : 18)) + 2147483647)) << (((((55 || (arr_28 [i_11] [i_11] [i_11] [i_13])))) - 1))));
            var_29 -= (max(((((arr_41 [i_11]) > (arr_20 [i_13])))), ((var_5 * (arr_41 [i_11])))));
            var_30 = (min(var_30, ((((arr_41 [i_13]) && var_9)))));
        }
        var_31 += (max(((((arr_25 [i_11] [11] [i_11]) == ((max((arr_29 [1] [1] [i_11] [i_11] [i_11] [i_11]), (arr_35 [i_11] [i_11]))))))), (((arr_35 [i_11] [i_11]) % (arr_34 [i_11])))));
    }
    var_32 = (max((min(((var_2 ? var_8 : -126)), ((max(var_5, var_12))))), ((((min(var_0, var_12))) | 69))));
    #pragma endscop
}
