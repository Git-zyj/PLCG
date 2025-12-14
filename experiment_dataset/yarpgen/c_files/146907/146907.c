/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = -var_14;
                var_21 *= ((((((((var_16 ? var_12 : var_1))) ? ((var_17 ? var_14 : var_1)) : var_15))) ? (var_14 || var_0) : ((var_6 ? var_1 : var_5))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_22 = (((1219168061 - 5688) ? (var_18 + var_7) : ((var_0 ? var_5 : var_15))));
                    var_23 = ((((2147483647 ? -1514778631 : 8)) / var_3));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_24 = ((1 ? 6642346305480176727 : 1));
                    var_25 = ((!var_19) * ((((var_3 ? var_15 : var_18)) / ((var_3 ? var_14 : var_10)))));
                }
            }
        }
    }
    var_26 = var_11;
    #pragma endscop
}
