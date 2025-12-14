/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141055
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
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (1615533488U))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)111)), (var_3)))))) : ((-(2712321720U)))));
    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? ((+(1552692747U))) : (2679433807U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48655)) ? (var_2) : (((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (unsigned short)38897)), (144044819331678208LL))), (((/* implicit */long long int) var_3))));
                var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0]);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)84))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) max((var_2), (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) 144044819331678208LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (3454784363402110486LL))))))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16558)))), (((((/* implicit */_Bool) 3454784363402110486LL)) ? (-273812780) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((unsigned short) var_6))), (((((/* implicit */_Bool) (unsigned char)189)) ? (-5655114455677073188LL) : (((/* implicit */long long int) -2147483645)))))), (((/* implicit */long long int) var_11))));
    var_17 = ((/* implicit */unsigned short) ((long long int) var_2));
}
