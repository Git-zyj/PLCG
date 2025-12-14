/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183924
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 |= (~(2048242613U));
                    var_20 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2246724659U)) ? (arr_0 [9U]) : (var_6))))) ? (max((arr_3 [i_2 - 2] [i_1] [i_0 + 1]), ((~(arr_3 [i_2] [i_1] [i_0]))))) : (min((((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (arr_1 [22U] [i_1]) : (2743853839U))), (((((/* implicit */_Bool) 1245005566U)) ? (1245005566U) : (379446547U))))));
                }
            } 
        } 
        var_21 = ((unsigned int) (-(arr_2 [i_0] [i_0 - 1])));
        var_22 = ((/* implicit */unsigned int) max((var_22), (2921235127U)));
    }
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 2) 
    {
        var_23 *= max((min((3915520748U), ((+(1U))))), ((+(379446524U))));
        var_24 &= 2246724695U;
        var_25 = var_11;
    }
    var_26 -= (~(2048242598U));
    var_27 -= ((unsigned int) var_18);
    var_28 ^= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1245005543U)) ? (var_1) : (4139358295U))), (min((7U), (2031812255U)))))) ? (((((/* implicit */_Bool) (+(1548917617U)))) ? (var_7) : (((((/* implicit */_Bool) 1245005543U)) ? (var_1) : (var_11))))) : ((+(3049961750U))));
}
