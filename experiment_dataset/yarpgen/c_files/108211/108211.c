/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (((~(min(var_11, (arr_3 [i_0]))))));
        var_15 = 32753;
    }
    var_16 = (max((min(((var_11 >> (var_6 + 5380357722176541714))), var_7)), (--1)));
    #pragma endscop
}
