/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 1;
    var_14 = (((((var_5 ? var_7 : (min(var_10, -1))))) && ((max(1, (max(-1, var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (((arr_6 [i_0 - 1] [i_0]) ? (min((arr_6 [i_0 - 1] [i_0]), -105)) : (((max(var_0, 89))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1 - 1] [0] [i_3] [i_0] = (-(-8657537875595103504 & 0));

                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_2] [i_4 + 1] [i_3] [4] [12] [i_3] &= (arr_4 [i_2]);
                            arr_15 [i_0 - 1] [i_4 + 1] [i_2] [i_0] [i_4 + 1] [22] = (((-(arr_4 [i_0]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 = (arr_19 [i_0] [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_2]);
                        var_17 = (max(var_17, (((~(arr_1 [i_0] [22]))))));
                        arr_20 [i_0 - 1] [i_0] = ((2 ? (arr_19 [i_0] [i_0 - 1] [i_1] [i_1 - 1] [i_1 - 1]) : (arr_19 [i_0] [i_0 - 1] [i_0] [i_1 + 1] [i_1 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_24 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_0] [i_6] = var_5;
                        var_18 = (arr_13 [i_1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
