/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((var_12 ? var_10 : (max(1639451441476766324, -7040015760982318885)))), var_9));
    var_15 += var_11;
    var_16 = (((min((max(var_6, 2312501128)), (!-7040015760982318901))) == (((var_4 ? var_12 : var_2)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = (max((((((var_2 ? 62109 : var_8))) ? -2183407598964993366 : ((((arr_1 [i_0] [i_0]) == 4294967283))))), ((((arr_1 [i_0] [i_0]) > (min((arr_2 [i_0] [i_0]), 2172730551406618534)))))));

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_18 += ((+(((arr_5 [8]) ? (arr_3 [0]) : (arr_5 [10])))));
            arr_6 [i_0] [i_1 - 1] = (arr_4 [i_0] [i_1]);
            var_19 += (((0 > 13929057473061532653) > -7040015760982318925));
            var_20 = (((arr_2 [i_0] [i_0]) ? (-7040015760982318901 > 1) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
            var_21 = ((((!(arr_5 [i_0]))) ? (min((arr_5 [i_0]), (arr_1 [i_0] [i_1]))) : -2146884618930301748));
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_0] = (min(((-4152401237019325699 ? (arr_5 [i_0]) : 1)), (!1)));
            arr_10 [i_0] [i_0] [i_0] = (1 == 40450308);
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    {
                        var_22 = (max(((max((((arr_18 [i_3] [3] [i_3]) + (arr_19 [i_3] [i_3] [i_4] [i_5 + 1] [i_3]))), (((arr_11 [i_3]) ? (arr_16 [i_3] [i_4] [i_5] [i_6 + 1]) : (arr_18 [i_3] [i_5] [9])))))), (~-7040015760982318885)));
                        var_23 = (!-1507535137);
                        arr_20 [i_3] [i_3] = ((max(var_13, (arr_14 [i_6 + 1] [i_3] [i_4 - 3]))));
                    }
                }
            }
        }
        arr_21 [i_3] = (!11928112708965216559);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_25 [i_7] = ((!(arr_22 [i_7 - 1])));
        var_24 = ((80 ? 1 : 1));
        arr_26 [i_7] = ((((arr_19 [i_7 + 1] [i_7] [i_7] [14] [i_7 + 3]) > 2001697906)) ? (arr_0 [i_7] [1]) : ((~(arr_14 [i_7] [0] [i_7]))));
        var_25 = ((-((var_8 ? var_12 : (arr_23 [i_7])))));
    }
    #pragma endscop
}
