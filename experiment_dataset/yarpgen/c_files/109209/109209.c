/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(var_4, (((var_9 >= var_6) ? (!var_4) : (var_7 | var_5)))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_11 *= (!144);
        arr_2 [4] = (min((((arr_1 [i_0 - 1]) % (arr_1 [i_0 + 2]))), (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_3 [i_1 - 2])));
        arr_7 [i_1] = ((((((arr_3 [i_1 + 1]) ? (arr_4 [3] [i_1]) : var_2))) > 9223372036854775798));
        arr_8 [i_1] = (~-124);
        arr_9 [i_1 - 2] = (!var_2);
        arr_10 [i_1 - 2] [i_1] = 125;
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        var_12 *= ((~(((arr_13 [i_2 - 2]) + 101))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_13 ^= (arr_19 [i_2] [i_3 - 3]);
                            var_14 = (min(((var_4 / (((arr_20 [i_3 + 1] [i_4] [0] [i_6]) % (arr_15 [i_2]))))), ((-(arr_11 [i_2 - 3])))));
                            var_15 = (((arr_15 [i_2]) & -125));
                        }
                        arr_24 [i_2] [i_3 + 1] [i_5] = ((((-110 ? 109 : (arr_11 [i_2 - 3]))) << (((arr_23 [i_5] [i_2 - 3] [i_2 - 2] [i_5]) ? (((~(arr_13 [16])))) : (max(var_2, (arr_23 [i_5] [6] [i_5] [8])))))));
                        var_16 = (min(var_16, 593629577));
                        arr_25 [i_5] [i_5] [14] [i_3] [i_3] [i_2] = (5 | ((~(arr_19 [i_2 - 3] [i_3 - 4]))));
                        arr_26 [i_2 - 3] [i_2 - 3] [i_4] [i_5] = (arr_18 [i_5] [i_3 + 1] [i_2 - 1] [i_2 + 1]);
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                {
                    arr_36 [i_9 + 2] = (7828070997597826950 || (((~(((arr_12 [i_7] [i_9]) ? 119 : 6467297000258268059))))));
                    var_17 = (min(var_17, (((!(arr_5 [i_9 - 1]))))));
                }
            }
        }
        arr_37 [i_7] = ((arr_22 [i_7] [i_7] [12] [i_7] [i_7]) ? (((arr_22 [i_7] [i_7] [0] [i_7] [i_7]) - (arr_22 [i_7] [i_7] [14] [i_7] [i_7]))) : ((max(var_2, (arr_22 [i_7] [i_7] [16] [i_7] [i_7])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    var_18 = var_2;
                    var_19 -= (((((-(arr_20 [i_11] [i_10] [i_10] [i_7])))) && ((((max(-2, var_0))) == (((arr_32 [i_7]) ? var_8 : var_4))))));
                }
            }
        }
        arr_45 [i_7] = (min((((max(8309473854523996957, var_7)) ^ var_8)), (((~(min(637, (arr_19 [i_7] [i_7]))))))));
    }
    var_20 = (min(var_20, var_0));
    #pragma endscop
}
