/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((var_6 ? (772868847 == 32767) : var_3));
        var_17 = ((((((arr_0 [i_0] [i_0]) ? 29839 : -212976029))) ? 7451095645576688115 : (((~-17569) ? (arr_1 [i_0]) : (var_9 - var_12)))));
        var_18 *= (arr_0 [i_0] [11]);
    }
    var_19 ^= (max(var_8, (max(((min(var_14, var_1))), (var_16 % -772868848)))));
    var_20 = (max((var_6 - 6983888597320423880), (((var_7 ? var_2 : 6229)))));
    var_21 = (max(var_21, (((((min(var_16, var_14))) >> (-212976029 + 212976042))))));
    #pragma endscop
}
