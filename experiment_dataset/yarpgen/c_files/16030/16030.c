/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_11 + ((-(min(var_1, 4095)))))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_14 = (max(var_14, (((var_4 * ((-((0 + (arr_0 [8]))))))))));
        arr_2 [i_0] [i_0] = ((~(((arr_0 [i_0 + 2]) ? (arr_1 [i_0 - 1]) : var_8))));
        arr_3 [3] [i_0 + 1] = (~var_4);
    }
    var_15 *= (((((-var_7 + 2147483647) << (var_7 - 81))) | var_6));
    var_16 = var_6;
    #pragma endscop
}
