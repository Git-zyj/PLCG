/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((54 ? 1999835871 : -79))));
    var_14 = -var_9;
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((((((arr_3 [i_0] [i_0] [i_1]) == (((arr_0 [i_1]) ? var_3 : 1073741824))))) << (((arr_1 [i_1]) - 76))));
                var_17 = (((~3926603858) ? ((min(-8, -15450))) : (arr_1 [i_0])));
            }
        }
    }
    var_18 *= (min(1, (((((-7857518 ? -1115730514 : 1))) ? ((var_3 ? var_7 : var_11)) : (0 || 4600727478762670395)))));
    #pragma endscop
}
