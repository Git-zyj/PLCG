/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((-(min(var_2, 1879048192))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (((((arr_8 [i_0 - 4] [i_0 - 1] [i_2 - 3]) ? (arr_8 [i_0 - 4] [i_0 - 1] [i_2 - 3]) : (arr_4 [i_0 - 4] [i_0 - 1]))) * (arr_0 [i_2 - 2])));
                            var_17 *= (((arr_9 [i_0] [i_0 - 1] [i_0] [i_3 - 1]) ? (((arr_0 [i_1]) / -140027624711779183)) : var_9));
                            arr_12 [i_3] [i_1] [i_3] = (var_12 < 2782703773);
                            arr_13 [i_0] [i_3] [i_3] [i_3] = ((((var_5 ? (arr_8 [i_0] [i_0] [i_2 - 2]) : (arr_8 [i_0] [i_2] [i_2 - 1])))) ? ((+(((arr_6 [i_2] [i_1] [i_0]) ? 140027624711779182 : (arr_5 [i_0] [i_0] [i_2]))))) : (((-(1879048183 >= 2415919112)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_18 = ((!(~var_7)));
                            var_19 = ((var_9 == (arr_1 [i_4])));
                        }
                    }
                }
                var_20 = (min((((!(((arr_11 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]) > 2782703773))))), (((arr_5 [i_0] [i_0 - 4] [i_0 - 4]) / var_12))));
            }
        }
    }
    #pragma endscop
}
