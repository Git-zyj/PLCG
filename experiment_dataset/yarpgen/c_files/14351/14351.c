/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_12, (max(var_6, 69))))) ? ((-101 ? -70 : 2917026660)) : ((min(((var_13 ? var_15 : var_10)), var_14)))));
    var_19 = (~var_16);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0 + 2] = (max((12647596685925924110 <= var_0), (~223)));
        arr_5 [i_0] = (min(-7561333846892530627, 1459180288175901132));
        arr_6 [i_0] = (max(-7561333846892530622, 127));
    }
    #pragma endscop
}
