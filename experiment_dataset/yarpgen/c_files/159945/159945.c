/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = 14104;

            /* vectorizable */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                arr_7 [i_2] [i_1] [i_1] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_13 [i_2 + 1] [i_1] [i_1] [i_2] [i_4] = -686349192;
                            arr_14 [i_2] [i_1] [i_2] [i_2] = arr_11 [i_0] [i_2] [i_0] [i_2];
                        }
                    }
                }
                var_13 = 876058956041066585;
            }
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                arr_17 [i_0 - 1] [i_1] [i_5] = (arr_6 [2] [i_1] [i_0] [2]);
                arr_18 [i_5 + 1] = arr_9 [i_0] [i_0] [4] [i_1] [i_1];
                var_14 = 1;
                arr_19 [i_1] [i_1] [i_5] [i_0 - 1] = -1769628015439795930;

                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    var_15 -= 0;
                    var_16 = (arr_11 [i_0] [12] [i_5] [i_5]);
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_17 = arr_20 [i_1] [i_0];
                arr_24 [i_0] = 53;
            }
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_18 = (arr_25 [i_0] [2]);
                arr_27 [i_0] [i_0] [i_8 + 3] [i_8 + 3] = (arr_15 [i_8 - 1]);
            }
            var_19 = (arr_6 [2] [i_0] [0] [i_1]);
            var_20 = 0;
        }
    }
    var_21 = -686349192;
    #pragma endscop
}
