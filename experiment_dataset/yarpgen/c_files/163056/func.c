/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163056
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 *= arr_2 [i_0] [(_Bool)1];
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (short)112)) << (((max((var_0), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) var_16)))))) - (1072799368)))));
        var_20 -= ((/* implicit */long long int) (+(((/* implicit */int) (short)6))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((unsigned int) var_5));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) (short)-6)), (arr_4 [i_1]))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((arr_4 [i_1]) | (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-108)), ((unsigned short)56445))))))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6))) != (4U)))) | (((((/* implicit */int) var_16)) >> (((((arr_4 [i_1 - 1]) << (((/* implicit */int) var_16)))) - (7294702899932890334ULL))))))))));
        var_24 = ((/* implicit */short) (+(max((arr_4 [i_1]), (((/* implicit */unsigned long long int) (unsigned char)151))))));
    }
    var_25 = ((/* implicit */short) max((max((((/* implicit */unsigned int) (signed char)-113)), (4U))), (var_14)));
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)7)) <= (((/* implicit */int) (short)0))));
}
