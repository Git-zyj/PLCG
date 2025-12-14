/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (arr_3 [i_0] [9]);
        var_15 = (min(((((((arr_2 [i_0]) | var_5))) ? (arr_3 [i_0] [15]) : (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), ((((arr_3 [i_0] [i_0]) & (arr_3 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = ((((~(~57401)))) ? (((((~(arr_4 [i_1])))) ? ((~(arr_1 [i_1]))) : (arr_2 [i_1]))) : ((~(arr_6 [i_1]))));
        var_17 = (((arr_0 [18] [i_1]) ? ((~((~(arr_4 [i_1]))))) : (arr_2 [i_1])));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            var_18 = (((((~(arr_6 [i_2 - 1]))) - ((min((arr_0 [i_2] [i_2 + 1]), (arr_5 [i_3 - 1])))))));
            var_19 *= ((!((((arr_10 [i_2 + 1] [i_2 + 1]) ? (arr_1 [2]) : (arr_1 [0]))))));
            var_20 = (max(var_20, (arr_5 [i_3 - 1])));
            var_21 -= ((((((((arr_8 [1]) | (arr_4 [i_2])))) ? (arr_4 [i_2 + 1]) : (min(0, 30720)))) % (arr_10 [i_3 + 2] [i_2 + 1])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_22 = (arr_6 [i_2 - 1]);
            var_23 = var_7;
            var_24 = (((((((arr_3 [i_4] [i_2]) <= (arr_5 [7]))))) == (((arr_12 [2]) / (arr_9 [2] [i_2 + 1])))));
            var_25 |= arr_4 [i_2];
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_26 *= ((~((((((((arr_6 [5]) || (arr_16 [i_7] [0]))))) != var_3)))));
                        var_27 = (arr_3 [i_2] [i_2 - 1]);
                        var_28 = (arr_3 [20] [i_7]);
                    }
                }
            }
            var_29 *= (min((min((arr_2 [i_2 + 1]), (((!(arr_20 [i_2] [i_5] [8] [i_2])))))), (((!(!var_6))))));
            var_30 = ((-(min((arr_17 [i_2 - 1] [i_2 - 1] [i_2 + 1]), var_7))));
            var_31 = (min(var_31, (((+((-(max((arr_1 [0]), (arr_6 [i_2]))))))))));
        }
        var_32 = (min((arr_14 [6]), (((arr_16 [i_2 - 1] [i_2 + 1]) & var_0))));
        var_33 -= (arr_17 [6] [i_2] [i_2]);
    }
    var_34 = -var_0;
    var_35 = (((~var_12) ? var_8 : ((~(~var_11)))));
    #pragma endscop
}
