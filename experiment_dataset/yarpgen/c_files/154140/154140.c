/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = ((((((((var_6 ? var_0 : var_11))) ? var_11 : var_10))) ? -var_3 : (((((var_12 ? 2279499614054351541 : var_0))) ? var_11 : var_7))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 ^= var_0;
        arr_3 [i_0 + 3] = (((-(arr_0 [0]))) / var_1);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [4] = -349852243;
        var_19 ^= ((((min(4020916907, 925818786))) ? (((var_1 != (arr_5 [5])))) : ((-(((var_14 != (arr_4 [i_1]))))))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = ((((((var_1 ? 4018415076981469713 : 3644280226414699770)))) != var_3));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_21 = (min(var_21, (((var_11 ? var_12 : var_14)))));
                            arr_19 [i_1] [i_2] [i_1] [0] [1] = ((var_7 / 26) ? (((((((arr_10 [i_2] [i_4] [i_4]) / var_5))) ? ((var_5 ? (arr_11 [i_2] [7]) : 455811415)) : (~var_5)))) : ((-((var_10 ? var_3 : (arr_4 [1]))))));
                        }
                        var_22 ^= var_9;
                        arr_20 [i_1] [i_2] = (((~(arr_10 [i_1] [2] [2]))) / (arr_6 [i_1]));
                        var_23 ^= (((arr_4 [i_3]) ? 3839155877 : ((var_3 ? 4194300 : (arr_16 [14] [i_2] [i_2] [i_1])))));
                    }
                }
            }
            arr_21 [i_2] [13] [i_1] = -52;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_26 [i_1] [i_1] [i_1] [i_1] = (((3977446847094763672 / 923277307) != (((3038924662 ? 1592960034 : (arr_17 [i_6] [i_2] [i_2] [i_1] [i_1]))))));
                var_24 &= (arr_22 [i_6] [13]);
            }
            var_25 = (min(var_25, (((+(((arr_14 [i_1] [i_1] [i_1] [i_1]) / var_6)))))));
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_26 = (min(var_26, (((((min(var_10, (arr_31 [i_8])))) ? var_9 : (var_13 - var_5))))));
                var_27 = (min(var_27, (4194298 / 4294967281)));
                var_28 *= (min(-3218761322917556901, -16));
            }
        }
    }
    #pragma endscop
}
