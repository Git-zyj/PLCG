/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_2 ? (((!((min(var_3, var_12)))))) : (((var_1 <= ((min(var_5, 2167939858))))))));
    var_19 = (+-13294);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = (~0);
        var_21 = ((((((min((arr_1 [1] [i_0]), (arr_0 [5])))) ? 9143690847477816682 : (((arr_1 [i_0 + 1] [i_0 + 2]) ? var_7 : (arr_1 [i_0] [i_0 + 2]))))) == (min((((arr_0 [i_0]) ? -1314550063 : (arr_0 [1]))), var_5))));
    }
    var_22 = (~var_16);
    #pragma endscop
}
