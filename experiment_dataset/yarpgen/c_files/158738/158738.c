/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_14, (((~5941) ? 125 : 63865))));
    var_16 = 3815445323278253106;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((25 == (((var_6 ? 183 : 4294967295)))));
        arr_4 [i_0] = (((((14654 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ^ (arr_0 [i_0])))));
    }
    #pragma endscop
}
