/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10197
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294965248U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_11)))))))) : (((/* implicit */int) ((((/* implicit */int) max((var_16), (var_10)))) >= (((/* implicit */int) var_13)))))));
    var_19 = var_7;
    var_20 |= ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-1)))))));
        var_22 *= ((/* implicit */short) ((((1472996641U) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) / (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (signed char)-1)))))));
        var_23 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) 2546516656U))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 1748450626U)) : (var_4))) : ((~(var_1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_24 += ((/* implicit */signed char) var_14);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_17)))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) ((((unsigned long long int) (_Bool)0)) < (var_1))))));
        var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1797352013U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-26LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)24))))))) : (((((/* implicit */_Bool) var_1)) ? ((~(arr_3 [i_1] [i_1]))) : (arr_3 [i_1 + 1] [i_1 - 1])))));
        var_26 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [8LL] [8LL]))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42157)) >> ((((+(((/* implicit */int) (unsigned short)33873)))) - (33866))))))));
    }
    for (unsigned char i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) (~((~(arr_7 [i_2 - 1])))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_16)), ((unsigned char)178)))) ? (((int) var_7)) : ((-(((/* implicit */int) var_9))))))) & (min((arr_8 [i_2 - 1]), (var_8)))));
        arr_10 [i_2] [i_2] = max((((short) min((var_8), (((/* implicit */unsigned long long int) var_11))))), (var_9));
    }
}
