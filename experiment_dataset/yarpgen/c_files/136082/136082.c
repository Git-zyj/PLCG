/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 += -47;

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_16 = ((-((~(arr_10 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1] [i_1])))));

                        for (int i_4 = 4; i_4 < 7;i_4 += 1)
                        {
                            arr_16 [i_3 - 3] [i_1] [i_3 + 1] [i_3 + 1] [i_3] [i_2] [i_1] = (((((-(246 != 11525699025599612470)))) ? ((((((arr_4 [i_0] [i_1] [i_0]) ? 16 : (arr_1 [i_1] [i_3 - 1])))) ? (var_9 | var_5) : 8340040712103150107)) : ((1 ? ((2 ? 10106703361606401505 : 10106703361606401509)) : 246))));
                            var_17 = (min(((~(arr_2 [i_3 - 3]))), 22));
                        }
                        arr_17 [i_1] [i_3] [i_0] [i_1] = ((((var_6 ? 246 : 11084))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_18 = (min(var_18, (((((min(1, (arr_10 [i_0] [i_5] [i_1] [i_5] [i_0] [i_0])))))))));
                        var_19 = (((arr_14 [i_0] [i_1] [i_2] [i_2] [i_1]) ? (min(0, (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : -11091));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_20 = (arr_4 [i_0] [i_1] [i_2]);
                        var_21 = (min(var_21, (((-(arr_11 [i_0] [i_1] [i_0]))))));
                        arr_24 [i_6] [i_0] [i_1] [i_0] &= (((arr_18 [i_2] [i_2]) ? (min(((max((arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_1]), 228))), 8340040712103150131)) : var_8));
                        var_22 = (((+-11089) ? (((arr_18 [i_0] [i_6]) << (arr_18 [i_1] [i_2]))) : (((!(arr_1 [i_0] [i_1]))))));
                    }
                    arr_25 [i_0] = (((((~(arr_4 [i_0] [i_1] [i_0])))) ? ((max((min(var_2, (arr_14 [i_0] [i_0] [i_2] [i_2] [i_2]))), (arr_7 [i_2])))) : ((((((8358 ? -8365 : 1623506131)) + 2147483647)) >> (((arr_5 [i_0]) - 23027))))));
                    var_23 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
