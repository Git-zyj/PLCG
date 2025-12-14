/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((~8454) ? (arr_2 [i_0] [i_0]) : (!var_11)));
        var_20 = ((1457472761 != (min(4294967289, 31))));
    }
    var_21 = (min(var_21, ((min(-51, ((((min(50, var_12))) ? var_5 : ((var_5 ? -57 : var_5)))))))));
    #pragma endscop
}
