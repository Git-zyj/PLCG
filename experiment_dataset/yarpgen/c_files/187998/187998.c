/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_9 ? (-1618309692 - 1) : ((-1427972444 ? 65515 : (-2147483647 - 1)))))) ? ((-((15 ? var_3 : var_6)))) : 1));
    var_19 = (((max(var_12, 6565171310593697917))) ? ((var_4 ? 27 : ((max(var_6, var_13))))) : var_9);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 -= ((arr_2 [i_0 + 1]) % (arr_2 [i_0 - 2]));
        arr_3 [i_0] = -2147483640;
    }
    #pragma endscop
}
