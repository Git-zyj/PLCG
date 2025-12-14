/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147125
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
    var_15 ^= ((((/* implicit */_Bool) ((min((var_0), (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))) ? (var_6) : (var_12));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_0))), (((/* implicit */unsigned int) var_13)))), ((+(min((var_6), (((/* implicit */unsigned int) var_3))))))));
        var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_14) / (((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_6))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [(signed char)7] [i_1] = max((((/* implicit */unsigned int) var_5)), ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : ((-(var_0))))));
        var_17 = min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))), (max((((/* implicit */unsigned int) var_4)), (max((var_12), (((/* implicit */unsigned int) var_11)))))));
        var_18 |= ((/* implicit */signed char) min((max((((/* implicit */unsigned int) min((var_8), (((/* implicit */int) var_11))))), (max((var_1), (var_0))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_9))))), (min((var_1), (((/* implicit */unsigned int) var_3))))))));
    }
    var_19 = var_5;
}
