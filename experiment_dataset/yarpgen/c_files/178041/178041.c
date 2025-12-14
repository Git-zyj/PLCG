/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((var_1 + var_13) ? (((min(12288, -25596)))) : ((var_10 + ((max(var_12, var_1)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 += ((11 ? -25599 : 117));
        arr_4 [i_0] = ((((arr_1 [i_0] [i_0]) << (var_17 + 13915))));
    }
    var_21 += var_0;
    var_22 = (max(((!(((129 ? 0 : 99))))), (!var_17)));
    var_23 = (min(var_13, var_6));
    #pragma endscop
}
