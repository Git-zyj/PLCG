/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152686
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
    var_15 = ((/* implicit */short) ((((var_0) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) (_Bool)1))))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (max((((/* implicit */unsigned long long int) var_13)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 7205033904185382390LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) max((((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned char)93)))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_13)), (var_8)));
    var_19 = max((((/* implicit */short) var_1)), (((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) | (4294967295U)))));
}
