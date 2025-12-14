/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max((((arr_1 [i_1]) ? var_2 : var_0)), (((arr_1 [i_1]) - 0))));
                var_13 = ((var_5 | 1) > (((arr_5 [i_1]) ? 110130863 : (arr_5 [i_1]))));
                var_14 = (max(((((((arr_1 [15]) ? 4294967295 : 10)) == (1 <= 1)))), (max((1 * 0), 1))));
            }
        }
    }
    var_15 = 8;
    var_16 = (max((((var_5 ? (4294967287 == var_4) : (var_0 ^ 1)))), ((1 ? 1 : 1))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (arr_8 [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (((min(4294967295, (!1258742760))) ^ (((arr_0 [i_2 - 1]) ? 0 : (var_0 ^ 2574081935)))));
                                var_19 = (max(var_19, 1164337408));
                                var_20 = ((4294967295 <= (~1)));
                                arr_17 [i_6] [i_5] [1] [i_3 + 1] [i_2 - 1] [i_2 - 1] = 0;
                            }
                        }
                    }
                    var_21 = 1;
                    arr_18 [i_3 + 1] = (((1 + 3125102646) ? (max(4113991342, (arr_7 [i_2 - 1]))) : (((-(arr_7 [i_2 - 1]))))));
                    var_22 = (!3029417144);
                }
            }
        }
    }
    #pragma endscop
}
