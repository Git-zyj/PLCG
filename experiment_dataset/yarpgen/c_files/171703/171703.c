/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? ((-2554452912521612001 ? ((-1 ? -29893419 : 34235)) : var_7)) : ((((134215680 - 159) == ((min(var_4, -25713))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min((((min(159, 0)) ^ (arr_0 [i_1 + 1]))), 951594111));
                var_20 -= (-2554452912521612009 ^ 137);
                var_21 ^= (((12 ? 9223372036854775807 : (1 ^ -19205))));
                var_22 = ((~1) ? (min((arr_1 [i_1 - 1]), ((var_5 ? 39 : 99)))) : 1);
            }
        }
    }
    #pragma endscop
}
