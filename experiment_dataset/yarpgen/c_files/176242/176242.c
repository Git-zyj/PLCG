/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 &= (max(((0 ? 1009280122 : ((536870908 ? 3758096388 : 1)))), 16989));
                    var_17 = ((((min(var_11, var_15))) ? (max(var_7, (arr_1 [i_0] [i_1]))) : (min(var_14, (arr_1 [i_0] [i_1])))));
                }
            }
        }
    }
    var_18 |= ((((max(var_12, (min(-16989, var_7))))) ? (min(((max(0, 16969))), ((248223243 ? var_12 : var_8)))) : (((((4550342100912028494 ? var_10 : var_11))) ? ((var_5 ? 3 : var_14)) : ((max(var_15, var_1)))))));
    #pragma endscop
}
