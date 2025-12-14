/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_1);
        var_18 = (min(var_18, (((((min(-4234303954826204053, ((32766 ? -74 : -21676))))) ? (((!((min(var_13, -20960)))))) : ((~(134 * var_12))))))));
    }
    var_19 = 33413;
    var_20 = var_9;
    #pragma endscop
}
