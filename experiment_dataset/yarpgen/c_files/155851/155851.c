/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0] [i_0]) ? 1 : (-9223372036854775807 - 1))), (min(((-8161 ? -1005840585 : (-9223372036854775807 - 1))), (arr_0 [1])))));
        arr_3 [16] [16] = (max(-29728, 32751));
        var_11 += (((max(32758, (arr_0 [i_0])))) <= (((-9223372036854775807 - 1) ? (arr_0 [i_0]) : -32741)));
    }
    var_12 = ((-(((-9223372036854775807 - 1) ? (9223372036854775807 || var_4) : var_4))));
    #pragma endscop
}
