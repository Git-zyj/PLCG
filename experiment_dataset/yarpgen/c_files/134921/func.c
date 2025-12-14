/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134921
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((var_19), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) var_17))))) ? (min((((/* implicit */long long int) var_11)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))), (max((var_3), (var_1)))));
        var_20 = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (var_1)))), (((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
        var_21 = ((/* implicit */_Bool) var_6);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((var_16) > (min((min((var_1), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_19) - (1998202510U)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned short) var_8))))))));
        arr_8 [(short)16] &= ((/* implicit */unsigned long long int) var_3);
    }
    var_23 = ((/* implicit */_Bool) var_3);
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_18)), (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)32483)), ((unsigned short)40898))))))))))));
    var_25 = ((/* implicit */short) var_15);
}
