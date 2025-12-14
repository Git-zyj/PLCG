/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min(80308627, (((((var_11 <= (arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((!((((arr_0 [i_0 + 1]) << (((arr_1 [i_0 - 1]) - 233)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 += 1791424694;
        var_13 = (arr_0 [i_1]);
    }
    var_14 = max((min((var_4 + -4899379690241577642), (~var_8))), var_11);
    #pragma endscop
}
