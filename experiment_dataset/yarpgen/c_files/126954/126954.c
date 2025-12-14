/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_17 = ((-((~(arr_3 [i_0])))));
                arr_8 [i_0] [i_0] [21] [i_0] = ((!((!(arr_4 [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_17 [0] [i_0] = 471721916;
                            arr_18 [2] [2] [i_0] [i_3] [2] [i_4] = (((arr_1 [i_0] [i_0]) ? ((((!(arr_9 [14] [i_0] [i_2]))))) : ((~(min((arr_6 [i_0] [i_0] [8] [i_4]), (arr_16 [i_0] [i_0] [11] [i_0] [i_0] [3] [i_0])))))));
                        }
                    }
                }
                arr_19 [i_0] [i_1] [19] [14] = (arr_4 [i_0]);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_22 [i_0] [20] [i_5] = (arr_1 [i_1] [i_0]);
                var_18 = (((arr_20 [14] [14] [i_0]) && (((((arr_12 [i_0] [12] [i_0] [i_1]) ? (arr_2 [i_0]) : (arr_13 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [1])))))));
            }
            var_19 = (((arr_20 [i_1] [i_1] [i_0]) >= ((((((arr_1 [i_0] [i_0]) ? (arr_5 [i_0]) : (arr_5 [i_0])))) - ((~(arr_13 [1] [i_1] [1] [i_1] [i_0] [i_1] [1])))))));
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                arr_28 [i_0] = (((min((((14115855646703120030 ? 65535 : 65522))), ((~(arr_9 [i_0] [i_7 - 2] [i_0])))))) ? (max((arr_23 [i_6] [i_0]), (((arr_21 [i_0] [17]) ? (arr_16 [2] [i_0] [i_0] [i_0] [i_6] [i_0] [i_7]) : (arr_4 [i_0]))))) : ((((!(arr_13 [i_0] [18] [10] [i_6 + 2] [i_0] [i_7] [i_7]))))));
                var_20 = ((~(((!((((arr_2 [i_0]) ? (arr_10 [8] [i_6 + 2] [i_0] [i_0] [i_6] [i_0]) : (arr_24 [0] [21] [14])))))))));
            }
            arr_29 [i_0] [i_6] = (arr_9 [5] [i_6 - 1] [i_6]);
        }
        var_21 = ((~(min((arr_21 [15] [6]), (arr_0 [i_0] [i_0])))));
        var_22 *= (((arr_13 [i_0] [i_0] [14] [12] [14] [12] [i_0]) ? 4096 : (arr_20 [i_0] [i_0] [22])));
        var_23 = (((arr_15 [i_0] [i_0]) + 23));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_24 = ((-(((!(arr_6 [i_8] [4] [2] [i_8]))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 22;i_11 += 1)
                {
                    {
                        var_25 = (max(((243 == (0 <= 11))), ((!(arr_13 [i_11] [i_11 - 3] [i_10] [i_9] [i_10] [i_8] [i_8])))));
                        var_26 = (max(var_26, 2013265920));
                        var_27 = ((!(((~(arr_41 [i_8] [i_8] [13] [14]))))));
                        var_28 = ((~(arr_32 [14] [14] [i_11 - 1])));
                    }
                }
            }
        }
        var_29 = ((-((min((arr_32 [i_8] [i_8] [i_8]), (arr_14 [18] [i_8] [i_8] [i_8] [18]))))));
        var_30 ^= ((((255 ? 14115855646703120030 : 214))));
    }
    var_31 = ((!(~-var_5)));
    var_32 ^= -9704;
    #pragma endscop
}
