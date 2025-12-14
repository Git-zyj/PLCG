/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((var_9 & var_4) | (var_3 | 1221209439))));
    var_19 = (!-1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = 6333760953664447163;
        arr_2 [i_0] [i_0] = (max(var_8, ((((((27678 ? (arr_0 [i_0]) : -27678))) ? ((~(arr_1 [i_0] [i_0]))) : ((((arr_0 [i_0]) && (arr_1 [8] [i_0])))))))));
        var_21 |= (min((arr_1 [i_0] [i_0]), (max((arr_1 [i_0] [i_0]), ((var_0 + (arr_0 [i_0])))))));
    }
    #pragma endscop
}
