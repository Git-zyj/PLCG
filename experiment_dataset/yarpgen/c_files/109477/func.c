/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109477
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19960)) + (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [7U]))))))) / (((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (min((var_2), (((/* implicit */long long int) arr_1 [i_0] [(unsigned char)2]))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)1)), (8948074884381474560LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0 - 2])) ^ (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -1074280626)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0 - 2] [i_0 + 3])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-6585716366581507857LL)))) ? (arr_0 [i_0 + 4]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)9633))))))))))));
        var_20 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_4))))), (((/* implicit */unsigned long long int) 1632645304))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_4 [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) -1632645305)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)163)))))));
        var_21 *= ((/* implicit */_Bool) var_12);
    }
    var_22 = ((/* implicit */_Bool) (short)9643);
}
