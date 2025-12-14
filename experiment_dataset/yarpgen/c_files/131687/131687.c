/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((2998801155 ? ((4184275728 ? 1 : 2479653054)) : var_10))), var_0));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0 + 1] [i_1] [i_2 - 1] [i_2 - 1] [i_2] = ((17140 ? 6221035732058639836 : (((((4215759154 ? 18446744073709551613 : 9411439034439637896))) ? (var_0 ^ 32) : (((var_5 ? -6221035732058639844 : 255)))))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [9] = var_6;
                            arr_16 [i_0] [i_2 - 1] [i_3] [i_4] = (((((((arr_10 [i_0] [8] [i_0]) ? (arr_10 [i_0] [i_0] [i_2]) : 1)))) - var_8));
                        }
                        arr_17 [i_0] [i_0 + 3] [i_0] [i_0] = (((!(arr_10 [0] [i_2] [i_3]))) ? ((((737582110 || ((48405 != (arr_14 [i_0 + 2] [i_1] [i_1] [i_0 + 2] [i_2] [i_3]))))))) : (min(((6221035732058639844 ? 4 : 537105176)), (((32767 ? var_2 : (arr_9 [i_0] [i_2 - 1] [i_3])))))));
                        arr_18 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] = (1851270472 ^ (max(3002990119, (arr_6 [i_0 + 3] [i_0 + 1] [i_0 - 1]))));
                        arr_19 [i_2 - 1] [i_2 - 1] [2] [i_2 - 1] = 3;
                    }
                }
            }
        }
        var_16 = ((1 ? ((min((arr_2 [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (var_2 + 1)));
    }
    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        var_17 = (max(var_7, ((((arr_20 [i_5]) ? (arr_20 [i_5 + 1]) : (arr_20 [i_5 - 3]))))));
        var_18 = ((!(arr_20 [1])));
    }
    var_19 = ((((min(1851270477, 235))) & 1));
    var_20 = ((((60670 ? var_10 : var_9)) <= 2443696847));
    #pragma endscop
}
