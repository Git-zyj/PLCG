/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))) != (arr_1 [i_0] [6]))))));
        var_16 += ((~(4294967292 != 4294967292)));
        arr_2 [i_0] = ((7 ? 8 : 12393631600915335519));
    }
    var_17 = (~var_6);
    #pragma endscop
}
