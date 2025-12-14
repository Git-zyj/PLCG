/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153031
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (3758720805U))))) ? (-2147483640) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (unsigned short)3)) << (((((/* implicit */int) var_11)) - (57461)))))))));
    var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3758720829U)) ? ((-(((/* implicit */int) (unsigned char)31)))) : (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) var_8)))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((var_7), (var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 3758720792U))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16248))) : (((long long int) var_10))));
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >> (((((/* implicit */int) arr_4 [i_1] [i_1])) - (58990)))))) : ((-(977463839080040789ULL))))), (min((((15066983235190866581ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16250))))), (arr_5 [i_1] [i_1])))));
    }
}
