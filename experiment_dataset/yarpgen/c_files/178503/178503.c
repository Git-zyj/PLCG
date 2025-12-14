/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_7, var_11));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = arr_0 [i_0] [i_0];
        arr_2 [i_0] [i_0] = ((18034 >= (min(85, ((4294967274 ? 29644 : 96))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_3 [i_1]) / (arr_3 [i_1])));
        var_16 = ((-73 ^ ((var_11 ? 85 : -106))));
    }
    var_17 = (min(var_17, 3539530592));
    var_18 = (max(var_18, ((min(var_7, (-32765 ^ -1))))));
    #pragma endscop
}
