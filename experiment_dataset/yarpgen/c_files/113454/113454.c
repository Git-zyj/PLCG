/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((-31 ? (arr_0 [i_1]) : 22));
                var_17 = (min(var_17, (255 / -13)));
                var_18 *= (((((arr_2 [i_0] [i_1]) | var_8)) ^ (((((arr_2 [i_1] [0]) + 2147483647)) >> var_12))));
                var_19 += (((max((((arr_2 [i_0] [i_1]) ^ -80)), 44)) >> ((((((max(10720396349206813859, (arr_0 [i_0])))) ? var_3 : (~12))) - 18446744073709551488))));
                var_20 = ((((max(((101 ? (arr_0 [i_1]) : var_0)), (var_11 || var_0)))) && (((-44 ? 4 : -45)))));
            }
        }
    }
    var_21 *= ((var_10 + (var_14 ^ var_0)));
    #pragma endscop
}
