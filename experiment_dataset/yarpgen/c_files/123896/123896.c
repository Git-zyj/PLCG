/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0 - 3] [5] = (((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_3 - 1]) ? (4186112 + 1210365123) : (arr_5 [i_0] [19] [i_2]))) * (((((var_10 >= 402653184) || (!6635)))))));
                        var_15 = ((1 ? 32767 : 1261474716));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_16 = (arr_12 [i_0] [i_1] [15]);
                            arr_13 [i_0 - 1] [i_0] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0] = (((((var_13 ? (arr_7 [i_0] [i_3 - 1] [0] [i_0]) : var_3))) ? (min((arr_7 [i_0] [i_3 - 1] [i_2] [i_2]), var_10)) : var_4));
                        }
                        var_17 &= (arr_4 [i_2] [10]);

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_18 = (((arr_12 [i_0 + 1] [i_2 - 2] [i_3 - 1]) | (arr_7 [i_0] [i_2 - 2] [i_3 - 1] [i_2 - 2])));
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_5] = var_6;
                        }
                    }
                    var_19 = (arr_9 [i_0] [i_1] [i_0] [i_2 - 2] [i_1] [i_1]);
                    arr_18 [i_0] [i_0] = (min((max((arr_7 [i_0] [i_1] [i_0 - 3] [i_1]), 1)), (((arr_7 [i_0] [i_0] [i_0 - 3] [i_1]) ? (arr_7 [i_0] [i_0] [i_0 - 2] [i_2]) : (arr_7 [i_0] [i_1] [i_0 + 1] [i_2 - 1])))));
                    var_20 = ((((max(63, (min(var_3, (arr_5 [i_0 - 1] [i_1] [i_2])))))) ? 1 : (!var_13)));
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
