/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119925
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) min((var_2), (((/* implicit */short) (unsigned char)29))))), (((1102529489) - (((/* implicit */int) (signed char)63))))))), (((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) var_8))))) ? (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-15449))))) : (((4276573326U) + (((/* implicit */unsigned int) 1102529489))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) (unsigned char)31)))) * (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : ((-(var_13)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 0U))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_3 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)31)))))))) * (((/* implicit */int) min((((((/* implicit */int) (unsigned char)224)) == (((/* implicit */int) var_15)))), (((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_2))))))))))));
            }
        } 
    } 
}
