/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136725
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((/* implicit */int) (unsigned short)28672))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)35947)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_0)))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_1))) | ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) max((-1), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3)))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_1 [i_0]))))), (0ULL)))));
        var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)60)) > (-1274206134)))) >= (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 1274206132)) : (arr_2 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (16383U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36837)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) 4095)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (17974508U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)9566)))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
}
