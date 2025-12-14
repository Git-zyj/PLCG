/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (min((~-1), (-1793 >= var_9)));
    var_18 ^= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((max((((((max(var_0, (arr_2 [i_0])))) ? var_9 : ((-(arr_2 [i_0])))))), (((var_15 * (arr_4 [i_0] [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, (((var_12 ? ((~((var_6 ? var_14 : (arr_2 [i_2]))))) : ((((min((arr_7 [i_0]), var_0))))))))));
                            arr_10 [i_1] [i_2] [i_1] [i_1] [i_1] = (((((!((min((arr_4 [i_1] [i_2] [i_2]), 249)))))) != 1));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_0] [i_1] = (((((((max(var_3, var_8))) ? (((arr_14 [i_5]) ? (arr_4 [i_0] [i_0] [i_0]) : 6)) : (!var_0)))) ? (min((arr_13 [1] [i_1] [1] [i_1]), (((var_0 ? (arr_4 [i_0] [i_4] [i_4 + 1]) : var_6))))) : var_12));
                                var_21 = ((-((((((arr_14 [i_5]) ? (arr_2 [i_5]) : (arr_4 [i_4] [i_1] [i_1])))) * (((arr_0 [i_1]) ? (arr_12 [i_0] [i_1] [i_0] [i_5]) : var_14))))));
                                var_22 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_23 = -32757;
                arr_26 [8] = (arr_0 [i_7 - 1]);
                var_24 = (max((max((arr_9 [i_7 - 4] [i_7] [i_7 - 3] [i_7 - 4] [i_7 - 4] [i_7 + 1]), var_5)), ((((arr_9 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 + 2]) < (arr_9 [i_7 - 2] [17] [i_7 - 3] [i_7 + 2] [i_7 - 1] [i_7 + 1]))))));
                var_25 ^= 10066411846421075384;

                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    arr_29 [i_9 - 2] [7] [i_7 + 1] = 6;
                    arr_30 [i_7] [i_7 + 1] [i_7] [i_7] = (((((max(var_6, var_4))) || var_0)));
                }
            }
        }
    }
    #pragma endscop
}
