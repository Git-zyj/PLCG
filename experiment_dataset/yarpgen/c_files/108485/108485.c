/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min((min(var_8, var_6)), (((var_2 ? -110 : 2023726051))))), 42761));
    var_11 = ((((min(var_7, 1))) - var_7));
    var_12 = ((~((((~var_1) != 2786501109)))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_13 -= ((((max((arr_0 [i_0]), (arr_0 [i_0 + 1])))) || ((6218901118309674662 >= (max(-4, (arr_0 [i_0 + 1])))))));
        arr_2 [i_0 - 1] = (((arr_0 [i_0 + 3]) ? 845210301099340007 : 110));
    }
    #pragma endscop
}
