/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_19 += 245;
        var_20 += ((!((!(arr_1 [i_0 - 3] [i_0])))));
        arr_3 [i_0] &= ((((15098 >> (127 - 106))) * ((-39 ? -28 : 61510))));
    }
    var_21 = max((((24930 ? 5 : 120))), -77);
    var_22 = (max(var_22, ((min(18446744073709551595, 8660692712408177336)))));
    #pragma endscop
}
