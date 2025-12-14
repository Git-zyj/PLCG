/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (arr_10 [15] [16] [i_3] [i_2 - 1]);
                        var_17 = (((~var_4) ? 43284 : ((var_5 ? (arr_6 [i_0 - 1] [i_2 + 3]) : (arr_6 [i_0 - 2] [i_2 - 1])))));

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (((43284 + 43284) << ((((18138524692497997974 ? ((((arr_13 [11] [10] [i_2] [3] [i_1] [8]) ? var_13 : (arr_3 [2])))) : var_9)) - 84))));
                            var_19 = (arr_4 [i_0] [7]);
                            arr_15 [7] [i_3] [9] [15] [i_4] = (min(((-(!1218566303))), (min(0, 116))));
                            var_20 = ((((((arr_12 [12]) >> (((arr_5 [i_0] [14] [i_2 - 1]) + 58))))) && var_14));
                            var_21 = (((((((var_13 ? -60 : 8828331768418745776)) < 116))) > (((arr_2 [16]) << (((arr_12 [i_2 + 1]) - 8307486760034790697))))));
                        }

                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_22 = var_13;
                            arr_18 [17] [8] [9] [i_3] [14] [i_1] = ((-(22252 % 10675443923120920892)));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_21 [6] [i_3] [4] = (-((((((arr_16 [9] [9]) ? var_6 : (arr_16 [5] [0])))) ? ((max((arr_9 [i_3] [2]), (arr_0 [2])))) : (!var_5))));
                            arr_22 [10] [i_1] [i_2] [3] [i_3] = (min((min(-1094960106098737852, -116)), ((min(-35, (arr_3 [i_1]))))));
                            arr_23 [15] [i_3] [15] [10] [i_3] [7] = max(5270437708685330523, -36);
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            arr_28 [16] [i_1] [3] [i_3] [5] [14] = (arr_26 [i_1] [i_1] [0] [i_3] [16] [1]);
                            arr_29 [4] [2] [i_3] = ((((((arr_24 [12] [i_3] [13]) ? (arr_20 [i_0] [i_2 + 1] [i_7] [4] [i_7]) : var_5))) ? (((arr_20 [i_2] [i_2 + 1] [i_2] [i_7] [8]) ? (arr_7 [i_0] [i_2 + 1] [7]) : (arr_20 [15] [i_2 + 1] [i_7] [13] [i_7]))) : (((min(-107, 96))))));
                            var_23 = -1715276150;
                        }
                    }
                }
            }
        }
        var_24 = ((((~-1265765364) ? (arr_7 [4] [16] [i_0]) : (((-1715276150 + 2147483647) << (59 - 59))))));
    }
    var_25 = ((max(-60, 1715276150)));
    var_26 = var_11;
    var_27 = ((((((var_3 ? var_11 : 116))) ? var_1 : (3648052550741622902 + var_10))));
    #pragma endscop
}
