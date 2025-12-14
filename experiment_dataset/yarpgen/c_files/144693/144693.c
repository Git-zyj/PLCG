/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((arr_0 [i_0]), 676940038084060888));
        arr_3 [i_0] = ((((((6330 ? 111 : 56870))) ? (((max(var_8, var_6)))) : (arr_0 [i_0]))));
        arr_4 [i_0] = -118;
    }
    var_19 = (min(107, 65526));
    #pragma endscop
}
