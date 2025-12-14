/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = ((((((((var_11 ? -3379 : var_9)) < ((max(var_2, var_2))))))) - (((((0 ? var_4 : var_2))) & var_10))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (+(((var_4 + 9223372036854775807) << (((arr_1 [i_0 + 1]) - 1857224095)))));
        var_17 = ((((((((arr_1 [i_0]) < (arr_1 [4]))) ? -39 : 172))) ? (!1) : (((((124 ? -29 : 15607835069788434756))) ? ((28672 ? 5084 : 2901427018)) : ((((arr_0 [i_0] [i_0]) ? var_13 : var_11)))))));
        arr_3 [i_0] = max((max(2838909003921116853, 1)), (arr_1 [10]));
        var_18 = ((+(((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0 - 1])))) >= -1568992661442370153)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (arr_0 [16] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5] = (arr_1 [i_1]);
                                arr_16 [8] [i_4] [i_3] [i_2] [i_1] [i_1] = ((((((((arr_10 [i_1] [i_2]) ? 124 : 46589)) >> (((arr_14 [i_1] [i_2] [i_2] [i_4] [i_5]) - 37))))) ? ((1 ? (arr_1 [i_1]) : (((arr_5 [i_2] [i_3]) ? (arr_7 [5] [0] [0]) : 2901427023)))) : ((((((-(arr_9 [i_1])))) ? (((217 ? 1 : -31))) : -var_8)))));
                            }
                        }
                    }
                    var_19 = (~111);
                }
            }
        }
        var_20 *= ((-(arr_4 [i_1] [i_1])));
        arr_17 [i_1] = 2040;
    }
    #pragma endscop
}
