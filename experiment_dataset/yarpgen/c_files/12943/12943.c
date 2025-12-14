/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(var_9, ((((4310681397405162253 - -1) ? var_7 : var_2)))));
    var_14 = (((((max(-1926258395840736256, 6166)) | (!13664))) > ((min(((13664 ? var_12 : var_1)), (~var_4))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 1));
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) & ((5442784331076323247 ? (arr_1 [i_0]) : (arr_1 [i_0])))))) & ((65535 >> (((((arr_1 [i_0]) >> 0)) - 16))))));
    }
    var_15 &= var_1;
    #pragma endscop
}
