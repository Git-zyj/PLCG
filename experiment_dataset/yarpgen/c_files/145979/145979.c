/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!0);
    var_14 = (((max(-var_10, 8484111695072072569)) >= ((((1252024535 ? 2 : 26))))));
    var_15 = ((!(((((19 ? var_2 : var_9)) * var_5)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = 8484111695072072562;
        var_16 ^= ((((((!var_6) >> (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_7)) - 1333464597))))) ? (((arr_0 [i_0]) + 1073741824)) : (((!(arr_0 [i_0]))))));
    }
    #pragma endscop
}
