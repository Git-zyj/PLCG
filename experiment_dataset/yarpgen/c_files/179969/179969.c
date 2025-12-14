/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, ((max((((!(arr_0 [i_0])))), ((max(var_6, (arr_0 [i_0])))))))));
        var_15 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) / (arr_0 [i_0]))) : ((~(!var_1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 = var_10;
        var_17 = (((var_4 == (arr_0 [i_1]))));
        var_18 = ((97 ? (arr_2 [i_1]) : (arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 = (min(((-(arr_4 [1] [1]))), ((((arr_5 [i_2]) ? (arr_5 [i_2]) : 67)))));
        var_20 = (arr_5 [i_2]);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((((var_10 * (arr_13 [i_6] [i_6] [i_6])) / var_4)))))));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_22 = 75;
                            var_23 = (((((-(arr_13 [i_4] [i_6] [i_7])))) ? ((((arr_13 [i_4] [i_6] [i_7]) != (arr_13 [i_4] [i_6] [i_7])))) : (!0)));
                        }
                    }
                }
            }
        }
        var_24 = (((-(~var_3))) <= (-127 - 1));
    }
    var_25 = (min((((var_3 ? var_8 : 183))), ((((!var_1) && var_9)))));
    #pragma endscop
}
