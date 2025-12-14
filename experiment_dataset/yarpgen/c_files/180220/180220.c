/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = ((!(~-108)));
        var_12 |= (arr_2 [i_0] [i_0]);
        var_13 = (max(var_13, (arr_1 [i_0 - 1])));
        arr_3 [i_0] = ((((max((arr_2 [i_0 - 2] [i_0]), (arr_2 [i_0 + 3] [i_0])))) ? ((~(arr_1 [i_0 - 2]))) : (arr_1 [i_0 + 1])));
    }
    var_14 = (((((16 ? ((var_8 ? 63 : var_7)) : ((var_8 ? var_6 : var_7))))) ? (((min(1510489354, 915591590)) ^ (112 <= -96))) : (((~65535) ? (min(var_1, var_7)) : 122))));
    var_15 = -120;
    var_16 = var_7;
    #pragma endscop
}
