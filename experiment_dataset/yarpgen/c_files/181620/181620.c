/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (((((max(330151192, -940748059))) ? (!var_15) : -var_17)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = ((!(arr_1 [i_0] [i_0])));
        var_22 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = ((max(var_8, var_17)));
    }
    var_23 = (((((var_0 + 7022490130544712628) && (var_12 >= 4104440927339574775))) ? 330151189 : ((max(var_14, (var_6 + var_5))))));
    #pragma endscop
}
