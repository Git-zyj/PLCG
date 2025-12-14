/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (max(var_17, (((~(arr_1 [1]))))));
        var_18 -= ((!(arr_1 [i_0])));
    }
    var_19 &= ((-((((max(32, var_16))) + ((max(var_9, 0)))))));
    var_20 = ((47 << (((min((1189550610859561903 * var_0), var_2)) - 12092860740385488438))));
    var_21 = ((+(((232 == var_13) ? var_7 : (((var_12 + 9223372036854775807) << 0))))));
    #pragma endscop
}
