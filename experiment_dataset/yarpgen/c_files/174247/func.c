/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174247
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 -= ((/* implicit */unsigned short) min((((var_16) | (((/* implicit */unsigned long long int) 5768556859798878629LL)))), (((unsigned long long int) var_15))));
        var_22 = min((var_16), (((/* implicit */unsigned long long int) var_17)));
    }
    for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        var_23 = (signed char)-104;
        var_24 = ((/* implicit */signed char) max((var_24), (var_5)));
        arr_4 [i_1] = ((/* implicit */unsigned char) ((var_15) + (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (910969240U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (short)32736)))))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        var_25 = ((/* implicit */signed char) var_15);
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_0))));
        arr_8 [i_2] = ((/* implicit */signed char) var_11);
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_17))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (signed char)110)))))))))));
    }
}
