/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((0 & (((1 ? var_3 : 1))))));
    var_20 ^= var_9;
    var_21 = 2024524694;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_22 = ((583202686 << 1) != ((6 ? (((-(arr_1 [i_0 - 3] [i_0])))) : -4294967295)));
        var_23 = ((18446744073709551615 ? (min(((max(1, -119))), (min(1018788248, 1)))) : 4294967295));
    }
    #pragma endscop
}
