/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143950
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
    var_17 = ((/* implicit */signed char) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)27869)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122))))))))));
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_9)), (min((min((var_7), (((/* implicit */unsigned int) var_11)))), (((var_7) << (((/* implicit */int) (signed char)7))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (max((min((((/* implicit */unsigned int) var_0)), (0U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))))));
                var_20 += ((/* implicit */unsigned char) ((((var_13) << (((((/* implicit */int) var_14)) + (110))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_4 [i_0] [5ULL])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (var_10))) : (((((/* implicit */_Bool) (signed char)108)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
}
