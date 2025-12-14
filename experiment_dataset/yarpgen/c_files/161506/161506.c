/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_8 [14] [i_0] [16] [i_2] [i_1] = (max((max(((-(arr_0 [i_3]))), var_19)), ((min(((-(arr_6 [i_0] [i_1] [i_0] [i_2]))), (((!(arr_4 [i_3] [i_0])))))))));
                        arr_9 [i_1] [i_1] [i_1] = ((((-605581849 ? 7755934742881653226 : -8390083800769075822)) == ((((!-8390083800769075822) + ((-(arr_0 [i_3]))))))));
                        arr_10 [11] [i_1] [i_2] [i_3] [i_1] = (max(((-(arr_6 [i_0] [i_1] [i_2] [i_3]))), (((arr_7 [i_0] [i_1] [i_1] [i_1] [i_3]) ? (arr_7 [i_0] [i_0] [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_1] [i_2] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_21 = (max(414222672, (min((min(var_1, (arr_2 [i_1] [1] [i_2]))), ((max((arr_5 [4] [8] [8]), (arr_7 [i_2] [i_2] [i_2] [i_1] [i_1]))))))));
                        arr_15 [i_1] = ((((min((arr_11 [i_0] [i_1] [5] [i_4] [i_1]), (min((arr_12 [i_1] [14] [i_4]), (arr_6 [i_0] [i_1] [i_2] [i_4])))))) ? ((((((var_1 ? var_7 : (arr_0 [i_0])))) ? ((var_0 ? (arr_0 [i_2]) : (arr_5 [i_0] [i_0] [i_2]))) : (var_13 | var_10)))) : (arr_4 [i_1] [9])));
                        arr_16 [i_1] [i_2] [i_1] [i_1] = arr_2 [i_1] [i_2] [i_4];
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_22 += (((((arr_19 [i_1] [i_1] [i_1] [i_1]) ? ((-(arr_24 [i_0] [i_1]))) : ((((!(arr_20 [i_0] [i_0] [i_0] [i_0]))))))) & (arr_17 [i_0] [i_1] [i_2] [i_6])));
                                var_23 = ((~(((min(1, -2240347968662557228)) / (~-7755934742881653220)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
