/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (min(var_10, ((((((3658795112445341595 ? var_1 : 18446744073709551591))) ? 65510 : (min(5440896155156168353, 15)))))));
        arr_2 [i_0] [17] = ((((((2484235438307505616 / var_6) ? var_2 : 1))) ? (max((90 + 15), 540755047471985332)) : var_2));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_11 = (min(((var_0 ? 605327293 : (arr_1 [i_1 + 1]))), (((-1 / (arr_4 [i_1 - 1]))))));
        var_12 *= ((!(((~(max((arr_1 [i_1]), 605327315)))))));
        var_13 = (-108 ? -2864233578892173650 : -8192);
    }
    var_14 *= var_8;
    #pragma endscop
}
