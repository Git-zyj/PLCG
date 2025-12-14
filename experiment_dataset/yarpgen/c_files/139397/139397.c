/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [4] [7] = (((arr_0 [i_0]) >= (4214608795 <= 32765)));
        var_13 = 21;
    }
    var_14 = ((((((((var_4 ? var_3 : var_12))) ? (var_5 * -32766) : (max(var_1, var_2))))) ? 80358505 : ((((var_0 > var_10) ? (4214608795 != var_2) : var_6)))));
    #pragma endscop
}
