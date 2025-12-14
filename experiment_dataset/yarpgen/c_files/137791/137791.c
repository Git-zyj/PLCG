/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((3847892388 ^ (((((max(var_11, var_8)))) + (max(447074889, var_0))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((12295167789271650621 != (max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((var_11 + (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = ((!(~-76)));
    }
    #pragma endscop
}
