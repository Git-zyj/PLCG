/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 4294967283));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = (((~var_8) > ((+(((var_1 + 9223372036854775807) >> (-5654701675293045874 + 5654701675293045904)))))));
        var_15 = (min(var_15, (((~(max(var_8, 3494328522)))))));
        arr_4 [i_0] [i_0] = (max(((35010 ? 17836 : -30704)), ((~(var_4 != 65535)))));
    }
    var_16 = (min(var_16, var_11));
    var_17 = (min(var_7, (min(var_4, var_3))));
    #pragma endscop
}
