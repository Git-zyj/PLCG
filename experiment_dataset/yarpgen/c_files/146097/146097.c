/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_3;
    var_19 = (((var_14 ? 242 : 9223372036854775805)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] &= (~((~((var_8 ? 9921591111240242228 : 1)))));
        var_20 = (max((arr_3 [i_0] [i_0]), -8525152962469309407));
        var_21 = (max((max(9921591111240242241, (((1 & (arr_0 [i_0])))))), ((((arr_0 [i_0]) >> (12390320756889587287 - 12390320756889587270))))));
        arr_5 [i_0] = ((-(arr_3 [i_0] [i_0])));
    }
    var_22 = (max(var_22, 1));
    #pragma endscop
}
