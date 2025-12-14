/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = ((-((var_0 ^ (arr_2 [i_0])))));
                            arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] = (min((arr_9 [i_0] [i_0] [i_0] [i_0]), (min(2066784415753922608, ((max((arr_3 [i_3 + 1]), var_8)))))));
                            arr_12 [i_0] [i_0] = var_6;
                            var_10 = (min(var_10, (((((((((var_4 / (arr_7 [i_1])))) ? var_4 : -9223372036854775779))) || ((((arr_2 [i_1]) ? (arr_1 [i_3]) : var_7))))))));
                            var_11 = ((var_1 < ((64105 ^ (var_5 & 64105)))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_12 = ((((arr_6 [i_5 + 1] [i_4] [i_0]) ? (arr_20 [i_4]) : var_1)));
                                arr_22 [i_0] [10] [i_0] [i_0] [7] [i_0] [7] = (arr_18 [i_0]);
                                arr_23 [4] [i_1] [i_1] [i_1] [i_1] &= (((((var_9 ? (arr_18 [i_4]) : var_7))) ? (((arr_15 [i_0] [12] [i_1]) ? (arr_17 [i_0] [i_1] [i_0] [i_1]) : var_5)) : (var_1 < 2066784415753922608)));
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_4] = ((var_8 ? (arr_7 [i_0]) : 1840450868));
                    var_13 = (min(var_13, 5733));
                    arr_25 [i_0] [i_1] [i_0 - 2] [i_0] |= (arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 2]);
                    var_14 = (min(var_14, (arr_20 [i_1])));
                }
            }
        }
    }
    var_15 = (min(var_15, var_1));
    var_16 ^= 9223372036854775756;
    #pragma endscop
}
