/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 6318039198355215;
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        var_10 = (max(var_10, (arr_0 [4] [4])));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_11 = (arr_9 [i_2 - 2] [i_2 - 2]);
            arr_10 [i_1] = 45679;
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_1] = var_9;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        var_12 = ((3724670793 ? (arr_18 [i_1] [i_3] [11] [11] [i_3]) : (arr_12 [i_3 + 1])));
                        var_13 = (max(var_13, var_2));
                    }
                }
            }
            arr_20 [i_1 + 1] [i_1] [i_1] = 234;
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_30 [i_9] [i_8] [i_7 + 2] [i_6] [i_1] = var_9;
                            arr_31 [i_1] [i_1] [i_7] [i_6] [i_1] = 18440426034511196400;
                            arr_32 [i_6] [i_6] = var_5;
                        }
                    }
                }
                arr_33 [i_6] [i_6] [i_7] [3] = (((arr_25 [i_1] [i_7 + 2] [i_1 - 2] [i_7 - 1]) ? (arr_15 [i_7] [i_6] [i_7]) : (arr_22 [i_1 - 1] [i_6] [4])));
                var_14 = 142;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_15 = (((-21774 / var_9) % 9223372036854775798));
                            var_16 = (arr_27 [i_11] [i_1] [9] [i_1]);
                        }
                    }
                }
            }
            arr_38 [i_1] = 12006;
        }
        arr_39 [i_1] = (arr_17 [i_1] [i_1 + 1] [i_1 + 1] [13]);
    }
    var_17 = var_3;
    #pragma endscop
}
