/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max((((2 == (arr_1 [i_0] [i_0 + 3])))), (((arr_1 [i_0] [i_0 + 2]) ? 0 : (arr_1 [i_0 + 3] [i_0])))));
        arr_4 [i_0 + 3] [i_0] = (max((!-13), (((arr_2 [i_0 + 3] [i_0 + 3]) ? -9223257512251186077 : -26829))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (((-(arr_6 [i_1]))));
        var_14 = (var_5 & (((0 ^ (arr_1 [i_1] [18])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            var_15 = (((arr_15 [i_3] [i_3] [i_3] [i_5 + 4] [i_3] [i_5 + 4] [i_5 - 1]) <= 206877113));
                            var_16 = 0;
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [7] = 17980;
                            arr_21 [i_4] [i_4] [i_4] [i_2] [i_4] = ((+(((!((min((arr_5 [i_6]), -50))))))));
                            var_17 = var_2;
                        }
                        var_18 = 31735;
                    }
                    var_19 = (max(0, var_7));
                    var_20 = ((!-5) ? (max((min(206877113, 24158)), (arr_16 [i_1]))) : (arr_17 [i_2]));
                    arr_22 [i_2] [i_2] [i_2] [i_2] = (max((arr_2 [i_2] [i_2]), (((arr_2 [i_2] [i_3]) & (arr_2 [i_1] [i_1])))));
                    var_21 = (((((!(arr_11 [i_1])))) >= ((~(arr_11 [i_1])))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_22 = (arr_24 [9] [i_7]);
        var_23 = (max(-6946314301005343622, (arr_23 [i_7])));
    }
    #pragma endscop
}
