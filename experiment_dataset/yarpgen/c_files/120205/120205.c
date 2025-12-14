/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 > (!-1699561737)));
    var_13 = max(1023, (min((var_2 && var_6), var_9)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (-var_11 ^ -22755235);
        arr_4 [8] [i_0] |= (((var_11 - 48656) | (arr_0 [i_0])));
    }
    var_14 = (max(var_14, ((max((((var_10 * 0) ? ((1 ? 9223372036854775807 : 1023)) : ((((var_5 + 2147483647) >> (((((-9223372036854775807 - 1) - -9223372036854775779)) + 47))))))), (((-67 + var_1) - var_8)))))));
    #pragma endscop
}
