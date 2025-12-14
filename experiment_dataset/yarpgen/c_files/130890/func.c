/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130890
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
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) >> (((((((/* implicit */int) var_0)) + (((/* implicit */int) (signed char)-2)))) + (21)))))) != (var_10)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) 203071454);
        var_18 = (~(2147483647));
        var_19 = ((unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 203071424)) : (var_10))) * (((/* implicit */long long int) ((((/* implicit */int) var_0)) / (203071424))))));
        var_20 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) / (min((((long long int) arr_0 [6ULL] [i_0])), (((/* implicit */long long int) var_3)))));
    }
    var_21 = ((/* implicit */signed char) min((var_10), (((/* implicit */long long int) ((int) var_5)))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155))) + (var_12))))) ? (min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_14)))), (min((var_6), (((/* implicit */int) (unsigned char)124)))))) : (((/* implicit */int) var_15)))))));
    var_23 = ((/* implicit */unsigned long long int) ((var_13) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((507377730735216140LL) != (((/* implicit */long long int) ((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))))));
}
