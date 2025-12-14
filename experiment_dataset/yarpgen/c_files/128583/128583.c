/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((max(var_1, (-9223372036854775807 - 1)))) ? (((var_4 ? (arr_0 [i_0 - 1]) : var_0))) : (((arr_0 [i_0 - 1]) ? (min(var_1, var_3)) : (((min(1, 26297))))))));
        var_10 = ((-718325213 ? (((((var_2 % (arr_0 [i_0])))) ? (arr_1 [i_0 - 1]) : (arr_2 [i_0]))) : (((((((var_0 ? 1 : (arr_1 [i_0])))) || 21073))))));
        var_11 |= ((((((var_5 + (((max(-26297, 222)))))) + 9223372036854775807)) >> ((((var_9 ? var_2 : (arr_2 [i_0]))) + 60369746056611539))));
    }
    var_12 &= (((max((var_4 % 26296), (max(var_8, var_8)))) & ((min(var_9, -347454566)))));
    #pragma endscop
}
