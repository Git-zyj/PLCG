/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172408
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_0 [i_1]))))) - (((/* implicit */int) ((unsigned char) var_17))))))));
                arr_4 [i_0] = ((/* implicit */short) 18446744073709551615ULL);
            }
        } 
    } 
    var_20 = max((max((((/* implicit */int) var_13)), ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) ((_Bool) var_16))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) ((var_12) == (var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((-(var_15))))) : (((/* implicit */unsigned long long int) var_17))));
    var_22 = ((/* implicit */unsigned char) var_17);
}
