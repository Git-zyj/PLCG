/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((arr_1 [i_0 - 2]) / ((68719476608 / (arr_1 [i_0 - 4])))));
        var_13 = ((18446744073709551615 >> (((arr_0 [i_0 + 1] [i_0 - 1]) + 9589))));
        arr_3 [10] = -1078824925;
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_14 = var_5;

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_15 = ((17309627428972153507 * (((((var_6 * (arr_8 [i_2])))) ? ((68719476608 ? -209822649610900214 : 68719476608)) : -3972178724552156083))));
            var_16 ^= (((max((min(var_9, (arr_7 [i_1] [i_2] [i_2 + 1]))), ((68719476606 ? (arr_7 [10] [2] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_2 - 1] [12]))))) == 1));
            arr_10 [i_1] = (arr_5 [i_1 - 2]);
        }
        arr_11 [i_1 - 2] = ((-(((arr_5 [3]) ? (arr_7 [7] [12] [i_1]) : (max((arr_6 [12] [i_1 - 1]), 1137116644737398109))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            {
                arr_19 [i_4] = (15445315396351024353 / var_2);
                var_17 = (((-((min(214, 1))))));
            }
        }
    }
    var_18 = ((17309627428972153482 != (((((max(334802610, -8011540390629952189))) ? (var_2 + -2267594832340497097) : var_2)))));
    #pragma endscop
}
