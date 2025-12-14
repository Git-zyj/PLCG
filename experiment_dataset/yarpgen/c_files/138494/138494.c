/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((!(((18085064985764250938 ? var_10 : var_7)))))), var_12));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((!(((var_11 ? var_2 : var_9)))));
        var_16 = (((((3308893377811174615 ? var_10 : (arr_0 [i_0])) << (((((var_8 + 2147483647) >> (var_6 - 45853547))) - 4081))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_17 = ((((4084433152 && (((-2035468596 ? var_5 : (arr_2 [i_1])))))) ? (arr_4 [i_1 - 2]) : var_3));
        var_18 = (arr_1 [i_1]);
        var_19 = (min(var_19, ((((max(2137175099, 180)) != ((min((arr_1 [i_1 - 2]), (arr_4 [i_1 - 1])))))))));
        arr_5 [i_1 - 2] = ((~(max(((-2035468576 ? -3637728254618058762 : var_7)), ((((arr_2 [i_1 - 2]) % -60)))))));
        var_20 = (max(var_20, var_9));
    }
    #pragma endscop
}
