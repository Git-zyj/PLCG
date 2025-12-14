/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124305
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (min((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))), (((arr_1 [i_0] [i_0]) ? (7338771511682781868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = ((((((/* implicit */_Bool) 4294967285U)) || (((/* implicit */_Bool) -4315854068671792599LL)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) arr_2 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((/* implicit */int) ((signed char) 4294967285U))) : (((/* implicit */int) ((short) var_5)))))), (((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 - 2])))) : (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_1 [i_0 - 1] [10U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [9]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))) : (var_2)))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0]) ? (((/* implicit */unsigned long long int) (-(var_1)))) : (var_4)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [(unsigned char)6])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [0ULL]))))))) : (((unsigned long long int) var_0)))))));
    }
    var_21 = ((/* implicit */signed char) var_12);
    var_22 = ((/* implicit */unsigned int) var_18);
}
