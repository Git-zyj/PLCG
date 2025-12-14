/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_3 [i_0] = ((((min(var_8, 6144)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((min(6144, -6098145989118946699)));
        var_14 = ((((arr_6 [8]) == (arr_5 [i_1]))));
        var_15 = (--6150);
    }
    var_16 = (min(var_16, -8320));
    #pragma endscop
}
