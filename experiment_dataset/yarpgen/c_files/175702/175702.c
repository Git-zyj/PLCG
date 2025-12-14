/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2] [i_1 - 2] [i_0] [i_1] = (~var_12);
                                var_15 = var_2;
                                var_16 = ((((((arr_5 [i_0 + 1] [i_0 + 2]) & (arr_5 [i_0 + 1] [i_0 - 1])))) ? ((9223372036854775791 ? var_11 : (arr_5 [i_1] [i_1]))) : ((min(var_3, (arr_14 [i_0] [i_0] [i_1 - 2] [i_2] [i_0] [i_1]))))));
                                var_17 = (((arr_8 [i_4]) >> ((((max((arr_11 [i_1] [i_2] [i_4]), var_14))) ? (((((arr_7 [i_1]) <= var_0)))) : var_1))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_2] [i_1] [i_1] = arr_9 [i_1] [i_1] [i_1] [i_1];
                    arr_17 [i_1] [i_1] [i_1] = 1;
                    arr_18 [i_1] [i_1] [i_0] [i_1] = (((arr_8 [i_0 + 2]) ? (min(1272564188, (arr_7 [i_1]))) : (arr_8 [i_0 + 2])));
                    arr_19 [i_1] [i_1] = 101529306806201931;
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
