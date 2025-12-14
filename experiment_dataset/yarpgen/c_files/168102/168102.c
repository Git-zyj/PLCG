/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = (min(var_17, var_11));
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 |= ((!((max((((arr_1 [i_0]) ^ (arr_1 [i_0]))), (max(1, 925609004)))))));
        var_20 &= 5857221017665843006;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 += ((!(arr_0 [i_0])));
            arr_6 [i_0] [i_1] = (63 - 1279961632);
            var_22 = 1;
        }
        var_23 = (arr_3 [i_0] [i_0]);
        var_24 = (~(!8036229893819370779));
    }
    #pragma endscop
}
