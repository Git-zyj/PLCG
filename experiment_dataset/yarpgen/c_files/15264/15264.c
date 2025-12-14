/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_0 <= 237);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [9] [13] [i_1] [i_2] = ((((min(var_1, 237))) ? ((50349868651434328 ? var_8 : var_0)) : (!var_6)));
                    arr_11 [i_0] [i_1 - 2] [i_1] = 71;
                }
            }
        }
        var_12 = (min(var_12, ((min((arr_5 [18]), var_10)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_13 += ((-((0 ? 61180 : 71))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        var_14 &= arr_20 [2] [i_4] [i_6] [i_6];
                        var_15 = (((((arr_5 [i_5]) / 2)) >= var_5));
                        var_16 = (((((0 ? var_0 : 18))) ? var_1 : var_7));
                    }
                }
            }
        }
        arr_23 [i_3] [i_3] = ((-var_7 ? 40962 : (arr_0 [i_3] [i_3])));
        arr_24 [i_3] = ((63509 ? var_6 : (((10410 ? var_2 : var_1)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_30 [i_7] [i_8] [i_8] = var_2;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_35 [i_7] = -var_3;
                                var_17 = (((((var_2 ? var_5 : (arr_5 [i_7])))) && (var_10 ^ var_6)));
                                var_18 = (max(var_18, (((arr_21 [i_3] [i_9] [i_9 + 4] [i_9 + 4] [i_9]) >= (arr_21 [i_9 + 2] [i_7] [i_9 + 1] [i_8] [7])))));
                                var_19 = (((((var_2 ? var_10 : var_3))) ? ((9354 ? var_2 : (arr_8 [i_8] [i_7] [i_3]))) : 65535));
                            }
                        }
                    }
                    arr_36 [i_7] = (~18446744073709551615);
                    var_20 = 3015723016;
                }
            }
        }
    }
    var_21 &= 64;
    #pragma endscop
}
