/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 += (min((((arr_0 [10] [i_0]) ? (min(18446744073709551614, 3)) : (max((arr_2 [8]), 18446744073709551607)))), (max(18, 16256))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (max(var_5, -23));
                    var_16 = 18446744073709551603;
                    var_17 ^= 2147483646;
                    var_18 = ((((max((arr_5 [i_0] [i_2 - 1] [i_0]), ((-7488314573706017580 ? (arr_6 [i_0] [i_1]) : var_6))))) ? 3581447074460580480 : ((((((13 ? var_12 : 9223372036854775807))) ? var_6 : 104)))));
                }
            }
        }
        var_19 &= (max(((max((arr_1 [11] [11]), (min(var_7, (arr_5 [i_0] [i_0] [i_0])))))), (max((arr_2 [2]), 1))));
    }
    var_20 = (min(var_20, var_3));
    #pragma endscop
}
