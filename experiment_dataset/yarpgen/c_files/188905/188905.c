/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((~(~2528516831))));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] = (((arr_8 [i_0] [10] [10] [i_3 - 3] [i_0]) ? (arr_4 [i_0]) : var_2));
                            arr_14 [i_0] = ((-(((arr_10 [i_4] [6] [6] [i_1] [i_0]) - 14742059107047863087))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_18 = (((-14122 * 14122) - (3704684966661688514 * 14126)));
                            arr_17 [3] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (arr_15 [0] [i_2] [i_3 + 1] [i_3 + 1] [i_3 - 2] [0] [i_3 + 1]);
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_1] = 1537070932;
                        }
                        var_19 = -14122;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_20 = 1509605108;
                        var_21 += arr_21 [i_0] [i_1] [i_1] [i_1];
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_22 = -16172;
                        arr_25 [i_0] [i_1] [4] [i_0] = (((arr_16 [i_0] [i_0] [i_1] [i_2] [i_7]) << ((((-(arr_24 [i_1] [i_1] [i_7]))) + 1632894623))));
                        var_23 = 250;
                        arr_26 [i_0] [9] [i_0] [i_7] = var_2;
                    }
                    arr_27 [i_0] [i_0] [i_1] [i_1] = (((15872 ? 240 : 14122)));
                    var_24 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_25 = ((16173 ^ (var_2 || var_0)));
    #pragma endscop
}
