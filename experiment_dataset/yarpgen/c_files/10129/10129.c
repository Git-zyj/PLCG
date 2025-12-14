/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((+-6222487206190221246) ^ var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, (arr_1 [16])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 = (max((max(((max((arr_0 [4]), (arr_0 [i_0])))), (min((arr_1 [i_1]), var_4)))), (arr_1 [1])));
            var_17 = (min(var_17, (((+((106 ? (arr_1 [i_1]) : (arr_0 [i_0]))))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_12 [4] [4] [i_2] [i_3] [4] = (max((((var_9 ? var_6 : (arr_9 [3] [3] [i_4 + 3] [i_4])))), ((max(1, var_0)))));
                        arr_13 [i_0] [i_0] = ((~((~(min(var_3, var_4))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_18 = (min(var_18, (((!(~var_7))))));
                            var_19 = (min(var_19, (((((((!((((arr_1 [i_0]) ^ 2132625285))))))) / (((((-(arr_9 [i_0] [i_2] [i_3] [i_5])))) ? var_12 : (arr_15 [11] [i_4 + 3] [i_5] [6] [i_4 + 3] [i_5] [17]))))))));
                            var_20 = (min(var_20, var_13));
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, 2132625290));
    }
    var_22 = -2048;
    #pragma endscop
}
