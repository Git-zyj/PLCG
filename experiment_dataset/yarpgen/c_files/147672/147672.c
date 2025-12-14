/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(258048, 258048)), var_6));
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = ((var_5 | (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((((((((arr_1 [i_0]) ? -1075921138 : (arr_1 [i_0])))))) % (-9223372036854775789 + 1)));
    }
    #pragma endscop
}
