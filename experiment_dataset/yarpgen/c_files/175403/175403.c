/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = max((min(var_15, (max(-3404917760313138179, (arr_0 [i_0] [i_0]))))), (((var_14 ? (((var_12 == (arr_0 [i_0] [i_0])))) : var_12))));
        var_19 = (~var_7);
        var_20 = (min(var_20, (37286 > 32767)));
    }
    var_21 = (max((max((4503599627369984 > var_12), -6313384804314953574)), (((min(0, var_10)) % (((var_9 ? 8064 : -8084)))))));
    #pragma endscop
}
