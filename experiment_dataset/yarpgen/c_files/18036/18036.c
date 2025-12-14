/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 |= ((((min(var_2, ((5359226389361061401 ? var_2 : 61739))))) ? (0 < 511) : (max(((var_4 ? var_6 : var_7)), var_17))));
    var_20 = var_17;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = (min(var_21, (((515 / ((65025 ? 8946743871336426092 : 511)))))));
        var_22 = ((-(arr_0 [i_0])));
    }
    #pragma endscop
}
