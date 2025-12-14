/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = var_3;
                    var_16 = ((~(-9223372036854775807 - 1)));
                }
            }
        }
    }
    var_17 = (max((((((var_5 ? var_5 : 1506912133))) ? -9223372036854775784 : (min(var_10, var_12)))), ((max(((var_5 ? (-9223372036854775807 - 1) : var_6)), ((var_10 ? var_8 : var_3)))))));
    var_18 = ((9223372036854775783 || 1963654804) ^ (((!0) ? var_5 : (((1 << (7794714001911748584 - 7794714001911748580)))))));
    var_19 = (max(var_19, ((((-35905 - var_6) ^ (min((min(2062012439223491621, var_5)), var_11)))))));
    #pragma endscop
}
