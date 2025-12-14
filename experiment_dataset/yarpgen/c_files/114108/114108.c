/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_11 += (min(8532907832619229804, ((((max(var_0, 0)))))));
            var_12 = (min(var_12, (((-((var_4 ? 66977792 : (arr_2 [i_1 + 1] [i_1 + 1]))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_13 += (arr_2 [i_0 - 2] [i_0 - 3]);
            var_14 |= (((arr_3 [i_0]) * ((((arr_5 [i_0]) / var_8)))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_10 [i_0] = ((((!(arr_4 [i_0 - 2]))) ? ((((((var_3 >> (var_9 - 95)))) ? var_10 : (241 && var_1)))) : ((-(~var_2)))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_15 = (min(var_15, ((((arr_11 [i_4 + 1] [i_0 - 2]) ? 1 : 1)))));
                            var_16 = (min(var_16, (arr_0 [i_0 - 4])));
                            var_17 = (max(var_17, var_7));
                        }
                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            var_18 = (min(var_18, ((max((((((var_9 / (arr_18 [i_0] [i_0])))) ? (arr_21 [i_0 - 3] [i_0 - 3] [i_0] [i_4 - 1] [i_3]) : (arr_9 [i_4 - 2]))), ((max(((1 ? var_7 : (arr_21 [i_0] [i_3] [i_4] [i_5] [i_3]))), ((var_10 ? 31 : -3030))))))))));
                            arr_22 [i_7] [i_4] [i_4] [i_0 + 1] = (((arr_4 [i_0]) ? (arr_8 [i_0 - 3]) : (min((((var_5 - (arr_12 [i_4] [i_4] [i_3] [i_4])))), (arr_9 [i_5 - 3])))));
                            var_19 = ((((((((-(arr_7 [i_5] [i_0])))) ? (arr_0 [i_3]) : (((arr_20 [i_0] [i_3] [i_4] [i_5 - 3] [i_0]) >> (var_9 - 95)))))) || var_7));
                        }
                        var_20 = (-(((((-82 ? (arr_0 [i_0 - 4]) : -99)) == 0))));
                    }
                }
            }
        }
        arr_23 [i_0 - 2] [i_0 - 2] = (~138);
        var_21 = (((~var_0) ? ((1 ? var_4 : (arr_2 [i_0 + 1] [i_0 + 1]))) : ((((var_6 != (arr_2 [i_0 - 2] [i_0 - 4])))))));
        arr_24 [i_0] [i_0] = (((((-(arr_12 [i_0 + 1] [12] [i_0 - 1] [i_0])))) ? ((((arr_0 [i_0 - 4]) ^ (arr_12 [i_0 + 1] [2] [i_0 - 1] [i_0])))) : (max(var_4, (arr_2 [i_0 - 3] [i_0])))));
    }
    var_22 = ((!((min((((-19 ? var_5 : var_6))), ((var_5 ? var_7 : var_2)))))));
    var_23 = (min(0, var_5));
    var_24 = var_1;
    #pragma endscop
}
