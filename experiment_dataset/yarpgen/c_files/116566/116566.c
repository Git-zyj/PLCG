/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 | ((var_2 ? var_5 : 649824090))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((4 || (((~(arr_0 [i_0 + 3]))))));
                arr_5 [14] = (max((arr_4 [i_0]), (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 3])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_17 = ((((max(15, (arr_8 [i_2 + 1])))) % (min((((var_9 ? (arr_7 [i_2]) : (arr_8 [i_2])))), (649824074 * 649824068)))));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 = (min(((-((1601 ? (arr_7 [i_2]) : var_6)))), (((((-(arr_9 [i_2] [i_3] [i_2 + 1])))) ? (((var_12 << (((arr_6 [8] [i_2]) - 5598266681778910028))))) : (arr_10 [22] [i_3] [i_2 + 1])))));
            var_19 = (max(((-(var_10 - var_5))), ((((arr_9 [i_2] [i_2 - 1] [i_3]) ? var_9 : (arr_9 [i_3] [i_2 - 1] [i_2]))))));
            arr_11 [i_3] = (arr_9 [i_2] [i_3] [i_2]);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_20 = (max(var_20, (649824068 | 3645143222)));
                var_21 = (min(var_21, 8549));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_22 *= (arr_15 [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_5] [i_6 + 2]);
                            arr_19 [i_2] [i_3] [i_3] = (((arr_14 [i_6] [i_6 + 1] [i_2 + 1] [i_3]) ? var_0 : (arr_16 [i_6 - 1] [i_2 + 1] [i_2] [i_2 - 1])));
                        }
                    }
                }
                var_23 *= (649824090 || 47079);
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_24 = ((((-((649824074 - (arr_10 [i_7] [i_7] [i_7])))))) ? var_3 : ((3645143239 ^ (((var_4 ? var_9 : (arr_8 [i_7])))))));

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_26 [21] = ((arr_21 [i_7]) | ((min((((arr_14 [i_8] [6] [i_7] [i_7]) ? var_2 : var_14)), (arr_15 [12] [20] [i_7] [i_7] [20] [i_7])))));
            var_25 = (max(var_25, (((!((max((arr_16 [i_8] [i_8] [i_8] [i_7]), var_4))))))));
            var_26 = ((((min((~var_7), var_3))) ? ((var_5 | (arr_7 [i_7]))) : (((min(4294967295, (arr_18 [i_8] [i_8] [i_8] [i_7] [19]))) | (arr_9 [i_7] [i_8] [i_8])))));
            var_27 = (+((min((arr_13 [24]), (arr_13 [24])))));
        }
        arr_27 [i_7] |= ((((max((min(65535, 1601)), 1601))) - var_1));
        var_28 = ((((~(((arr_21 [i_7]) ? var_6 : (arr_21 [i_7]))))) | 18446744073709551597));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_30 [9] = ((var_5 <= (arr_3 [i_9])));
        arr_31 [9] = (+(((min((arr_14 [i_9] [i_9] [i_9] [i_9]), var_7)))));

        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {
            arr_36 [i_10] [i_10] = 8;
            var_29 = min(8562, (((arr_9 [i_9] [i_9] [3]) ? (var_14 | 24) : (arr_7 [i_10]))));
        }
        for (int i_11 = 4; i_11 < 7;i_11 += 1)
        {
            var_30 = ((((((arr_18 [i_11 + 1] [i_9] [i_11] [i_11] [i_11]) - var_0))) ? (((((((arr_32 [i_9] [i_9] [i_9]) != (arr_8 [i_9]))) || ((max(var_4, var_11))))))) : (((134217727 - var_14) | ((((-49 || (arr_21 [i_9])))))))));
            arr_41 [i_9] = ((((min(var_12, -3877))) ? 15731 : (max((arr_18 [i_9] [i_11] [i_11 + 2] [i_9] [i_11 + 1]), (arr_20 [i_9] [i_9])))));
            var_31 = (max(var_31, (((((((arr_39 [i_11 - 1]) ? var_12 : (arr_39 [i_9])))) ? (((arr_25 [i_11 - 1] [i_9]) << (((var_7 + 1069076521) - 49)))) : ((min(((((var_2 + 2147483647) << (((arr_21 [13]) - 9753629047330525854))))), ((var_2 ? var_9 : 3645143233))))))))));
        }
    }
    var_32 = var_1;
    #pragma endscop
}
