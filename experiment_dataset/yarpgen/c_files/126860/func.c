/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126860
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_16))))))), ((~(min((((/* implicit */unsigned int) var_18)), (var_0))))))))));
    var_21 = ((((/* implicit */_Bool) min((((unsigned char) var_4)), (((/* implicit */unsigned char) (signed char)116))))) ? ((~(((((/* implicit */_Bool) (signed char)-3)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) var_15)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((unsigned int) ((long long int) -1612178992))) * (((/* implicit */unsigned int) 1612178968))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4294967295U)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((~((+(var_17))))) : (((unsigned int) ((var_12) != (((/* implicit */unsigned long long int) var_17)))))));
}
