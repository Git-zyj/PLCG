/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_4 ? ((var_3 ? var_0 : var_14)) : ((var_14 ? var_10 : var_13)))), (((((min(var_10, var_5))) ? var_15 : (((var_14 ? var_14 : var_14))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((((min(((max(var_15, var_13))), ((var_16 ? var_2 : var_4))))) ? ((((max(var_16, var_16))) ? (min(var_10, var_1)) : ((min(var_1, var_5))))) : (max((min(var_3, var_9)), var_8))));
                    var_19 = (max(var_10, (((var_5 ? var_11 : ((var_2 ? var_8 : var_2)))))));
                    arr_9 [i_0] [i_1] [i_2] = var_16;
                    var_20 ^= var_8;
                }
            }
        }
    }
    var_21 = ((var_0 ? ((((((var_10 ? var_6 : var_2))) ? var_1 : (min(var_15, var_13))))) : ((((max(var_16, var_15))) ? var_2 : (min(var_0, var_6))))));
    #pragma endscop
}
