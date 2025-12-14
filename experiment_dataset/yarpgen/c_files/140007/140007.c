/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!0) - (min(var_0, var_1))))) ? ((-(var_6 / var_5))) : 5476));
    var_15 = var_4;
    var_16 = ((!((max(((var_5 ? var_5 : var_13)), 1)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((((max(0, -8244726335662003071))) ? -1080799711 : 229))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [5] [22] [9] = (((((arr_6 [i_1 + 2] [i_3 + 1]) - var_1)) * (arr_6 [i_1 - 2] [i_3 + 2])));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_17 -= ((-((32744 - (arr_10 [i_1 + 1] [i_1 + 3])))));
                            arr_14 [i_0] [i_0] &= ((var_5 * (max(var_10, (arr_1 [i_1 + 3])))));
                            var_18 += max(var_13, (((arr_0 [i_4]) ? var_0 : (!1))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_19 ^= (-((var_10 | (arr_5 [i_0] [18] [i_0]))));
                            arr_18 [18] [i_1] [i_5] = (9223372036854775807 >> var_0);
                            var_20 = ((var_12 ? (arr_8 [i_0]) : (((arr_1 [i_2]) ? (arr_13 [i_0] [i_1] [20] [5] [i_1]) : var_5))));
                            var_21 = (~var_8);
                        }

                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            arr_22 [i_0] [i_3] [i_1] = -var_7;
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_1 [i_0]);
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = var_4;
        var_22 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
        var_23 = 2928224920029585460;
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_24 ^= var_9;
        arr_27 [i_7] = (4 != 4);
    }
    #pragma endscop
}
