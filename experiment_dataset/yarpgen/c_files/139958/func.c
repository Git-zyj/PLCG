/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139958
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min(((unsigned char)62), (((/* implicit */unsigned char) var_16)))))))) ? (min((((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) ((((min((var_12), (((/* implicit */unsigned long long int) var_11)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) - (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_1 [i_0])), (296670806U))), (max((((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_0])), (2997483498U))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42587))) - (((-2617360572996775606LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5765))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned short)42587))));
        arr_6 [6] [i_1] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) 3637838836U)) - (arr_5 [12]))), (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
        arr_7 [(unsigned short)11] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_4 [9ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))) : (var_18))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [12ULL])) + (((/* implicit */int) arr_1 [i_1]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [13LL] [i_1]), (arr_0 [i_1] [i_1])))))));
        arr_8 [i_1] [(short)5] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
    }
}
