/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102774
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
    var_18 = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (signed char)-104)))), (((/* implicit */int) var_17)))))));
    var_19 = min((max((((/* implicit */long long int) max((((/* implicit */short) var_15)), ((short)-1)))), (281474976710655LL))), (((/* implicit */long long int) var_5)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) 7600262524958665701ULL);
                var_21 = ((/* implicit */_Bool) max((var_14), (max((var_1), (var_15)))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (((10846481548750885921ULL) / (((/* implicit */unsigned long long int) var_10))))))) ? (max((min((((/* implicit */long long int) var_14)), (281474976710645LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4200770892U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
