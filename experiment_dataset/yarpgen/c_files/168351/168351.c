/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_2] = (var_10 / 224);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_12 = (((arr_5 [i_0 + 1] [i_1] [i_2 - 1]) > 380212139));
                            arr_14 [i_2] [i_1] [i_1] [i_2] = ((var_7 && (((-(arr_9 [i_2] [i_2]))))));
                            var_13 = (min(var_13, 119));
                            var_14 -= (var_4 >> (arr_6 [i_2 - 1] [8] [8] [i_0 + 3]));
                            arr_15 [i_2] [1] [12] [i_1 - 1] [i_2] = (var_2 <= (arr_12 [i_1] [3] [i_1 - 3] [i_2 - 1] [i_2] [i_3 + 2]));
                        }
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_15 = (~var_10);
                        arr_18 [i_0] [i_2] [i_0] [8] [i_0 + 1] = ((var_3 || (arr_5 [i_0 + 2] [i_1] [i_2])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_0] = var_7;
                        arr_22 [10] [i_1] [i_2] [13] = 223;
                    }
                    var_16 = (min(var_16, ((((arr_1 [0]) ? (arr_1 [i_0]) : (arr_1 [i_0 + 1]))))));
                    var_17 ^= (~3914755168);
                }
            }
        }
        var_18 += ((var_7 && (-1 * var_9)));
        var_19 = var_3;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = 931310813;
        var_20 = (max(var_20, var_0));
    }
    var_21 = var_0;
    #pragma endscop
}
