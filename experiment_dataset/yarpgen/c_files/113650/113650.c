/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 = (max((max((max(var_4, var_3)), var_12)), ((min(((((arr_1 [i_0 + 1]) > 16773120))), (min(-2605, (arr_0 [i_0 - 3] [i_0]))))))));
        var_14 = (((((((arr_1 [i_0 - 3]) < ((17 ? var_3 : -1)))))) > (max((var_7 ^ var_9), ((max((arr_1 [i_0]), (arr_1 [11]))))))));
    }
    var_15 = (max(var_15, ((min(-16384, 2829994214)))));
    var_16 ^= (((max(var_4, var_6)) ^ (((~(max(var_9, var_8)))))));
    #pragma endscop
}
