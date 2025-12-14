/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (((((0 | 1265290530) ? -1265290554 : ((-1265290553 ? -1265290572 : 801320916)))) | (~255)));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = 8521215115264;
            arr_6 [i_0] = (((((var_13 ? (max((arr_0 [1]), (arr_4 [i_0] [i_0] [12]))) : (((arr_1 [i_0]) ? (arr_4 [i_0] [i_1] [i_1]) : 6137624824803832851))))) ? (((arr_0 [i_0]) ? var_4 : (arr_5 [i_0] [i_1]))) : (!1982229595)));
            var_21 = ((!(((801320916 ? 41137 : (arr_2 [i_1]))))));
        }
        var_22 = (min(var_22, (max((((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_2 [i_0]))), ((((arr_5 [i_0] [i_0]) && (arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2] = (!((!(arr_7 [i_2] [i_2 - 1]))));
        var_23 = (arr_7 [i_2] [i_2]);
        arr_12 [i_2 + 1] = (arr_8 [i_2 + 1]);
    }
    var_24 = 138;
    #pragma endscop
}
