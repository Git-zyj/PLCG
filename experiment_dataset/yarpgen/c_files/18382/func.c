/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18382
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)19)) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (max((var_14), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))) ? (max((((/* implicit */long long int) (unsigned short)1)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
        var_16 = ((/* implicit */signed char) min((var_16), (var_15)));
        arr_3 [i_0] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((signed char) var_7))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) min(((signed char)127), (var_15))))))));
        var_17 *= ((/* implicit */unsigned int) var_0);
    }
    var_18 = ((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)60)) >> (((34634616274944LL) - (34634616274922LL))))), (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */unsigned short) (((-(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_11))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))));
    var_21 = ((/* implicit */signed char) var_4);
}
