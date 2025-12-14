/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((-((min(var_5, var_8))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_12 = -60;
                            arr_15 [i_1] [i_1 + 1] [i_4] [i_1 - 2] [i_2] = (arr_1 [7]);
                            var_13 += ((((max(var_0, (max(var_1, (arr_2 [i_2])))))) ? -var_2 : ((((((arr_7 [i_1] [i_1] [8]) ? var_4 : (arr_5 [i_0] [i_0] [i_0]))))))));
                        }
                    }
                }
            }
            var_14 = -238341219;

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_20 [i_0] [i_0] [i_0] = var_1;
                var_15 = (max(var_15, ((((max(((max((arr_5 [i_5] [i_1] [6]), var_5))), ((-(arr_9 [i_0] [i_0] [i_5] [i_1 + 3]))))) / (min((arr_7 [i_0] [i_1 - 1] [i_5]), (arr_7 [i_5] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_16 *= (min((((arr_0 [i_6 - 2]) != (arr_18 [i_0] [i_0] [7] [i_0]))), ((!(arr_6 [i_1] [i_1 + 3])))));
                            var_17 = (min(var_17, ((((~var_5) || (arr_8 [i_0] [i_0]))))));
                            var_18 = var_1;
                            arr_26 [i_0] [i_6] [i_5] [0] [i_7] [i_7] [i_6] = (arr_4 [1] [i_1 + 2] [i_1]);
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                arr_30 [i_0] [i_8] = var_1;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_36 [i_0] [i_1 - 2] [i_0] [i_9] [i_0] = var_4;
                            arr_37 [i_0] [i_1] [i_10] [i_9] [i_10] = var_8;
                            arr_38 [i_0] = ((((((arr_5 [i_1 + 3] [i_1 + 3] [i_9 - 1]) ? (arr_7 [i_1 - 1] [i_1] [i_9 - 1]) : (arr_5 [i_1 + 1] [1] [i_9 - 2])))) ? ((min((arr_19 [i_1 + 2] [i_1] [i_9 - 2] [i_1]), (arr_5 [i_1 - 1] [i_1] [i_9 + 1])))) : (min((arr_27 [i_1 - 1] [i_1 - 1] [i_9 - 1]), (arr_27 [i_1 - 2] [i_1] [i_9 - 1])))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_7;
                            arr_40 [7] [7] [i_8] [0] [0] = (min(var_5, var_3));
                        }
                    }
                }
                arr_41 [i_0] [i_1] [i_8] = ((((((arr_29 [i_8] [i_1] [i_0]) + var_0))) * (arr_21 [i_1] [i_1 + 2])));
            }
        }
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_19 *= ((min((min((arr_23 [i_0] [i_11] [i_11] [i_0]), var_1)), var_9)));
            var_20 = (arr_23 [i_0] [i_0] [i_0] [i_0]);
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_21 = ((~(((arr_28 [i_0] [i_0]) ? (arr_24 [4] [6] [i_12] [i_12] [i_12]) : (arr_35 [i_0] [i_12] [i_12] [i_12] [i_12] [i_0])))));
            var_22 = arr_10 [i_0] [i_12] [8] [i_0];
            var_23 = (((((60 ? 2565774900 : -60))) ? (((~(var_3 | var_6)))) : var_9));
        }
        var_24 = (min(((var_6 ? ((min((arr_16 [i_0]), (arr_13 [0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : 8388544)), ((24 ? 18446744073709551595 : 104))));
    }
    var_25 = -var_0;
    var_26 ^= -var_7;
    #pragma endscop
}
