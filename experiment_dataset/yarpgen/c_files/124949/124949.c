/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((arr_5 [i_1 + 2]) ? (((min(46, 1)))) : ((+(((arr_4 [9] [i_1]) ? 155789522 : var_15))))));
                var_16 = ((((((61151 != -15740) ? 1 : var_10))) ? ((var_4 ? (arr_4 [i_1 - 3] [i_1 - 2]) : (((var_0 ? var_6 : 61146))))) : ((var_13 ? var_8 : (max(6345769450469634520, 7))))));
                var_17 = var_4;
                var_18 = (((((((max((arr_0 [i_0]), var_5))) ? (min(var_6, var_2)) : (((var_9 ? var_4 : var_14)))))) ? (((!(!16659)))) : 254921045));
            }
        }
    }
    var_19 = -var_10;
    var_20 = (min(var_20, ((((((((max(179, var_1))) ? ((var_6 ? var_10 : var_13)) : var_13))) ? ((~(var_9 | var_8))) : (~var_14))))));
    #pragma endscop
}
