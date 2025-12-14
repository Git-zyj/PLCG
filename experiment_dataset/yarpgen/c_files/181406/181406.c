/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_13;
        var_14 = (((-(arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (max(var_15, (((((min((arr_3 [i_1]), (arr_3 [i_1])))) ? (((max(13392, (arr_5 [i_1]))))) : (max((arr_0 [i_1]), (((arr_5 [i_1]) ? (arr_0 [i_1]) : var_3)))))))));
        arr_6 [14] = (min(((((!(arr_0 [16]))) ? 532676608 : (arr_1 [i_1]))), var_7));
        arr_7 [i_1] = min(3762290687, (((3762290687 ? ((-(arr_5 [i_1]))) : (~30543)))));
    }
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_11 [i_2] = 532676609;
        var_16 = (max((((var_2 ? 75 : (min(0, var_6))))), (min(var_10, (arr_8 [i_2 - 2])))));
    }
    var_17 = var_1;
    #pragma endscop
}
