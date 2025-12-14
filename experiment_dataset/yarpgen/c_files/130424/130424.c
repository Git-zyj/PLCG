/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((-(~359149807)));
    var_12 -= (~176);
    var_13 = (max(var_0, var_9));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 *= (((~(((arr_1 [i_0]) ? 4294967291 : 2520544853)))));
        arr_4 [i_0] [1] = (arr_0 [i_0]);
        arr_5 [i_0] [11] = 0;
        var_15 = -111;
    }
    #pragma endscop
}
