/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_21 = (min(var_21, ((max((((~44136) | 15)), 58827)))));
        var_22 |= (max(((15311997987936879698 >> (8388352 - 8388347))), (max(11963984041056653852, (arr_1 [i_0 - 1])))));
        var_23 = (arr_1 [i_0]);
    }
    #pragma endscop
}
