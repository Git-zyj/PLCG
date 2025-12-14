/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    var_11 = min(125, var_6);
    var_12 &= -8;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
        arr_4 [i_0] = (((-7090071831304959712 + 9223372036854775807) << ((((max((arr_1 [i_0 + 1]), var_2))) - 43125))));
    }
    #pragma endscop
}
