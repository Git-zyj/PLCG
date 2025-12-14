/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143309
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_16 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (((long long int) arr_1 [i_0 - 1]))));
        var_17 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) arr_1 [i_0 + 1])))));
        var_18 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 + 1])) * ((~(((/* implicit */int) arr_1 [5ULL])))))) | (((/* implicit */int) min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) (signed char)120)) || (((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)120))))), (2591713548519185493LL)))) ? (-1LL) : (max((((/* implicit */long long int) 442151108U)), (-8672143593725312875LL)))));
        arr_2 [i_0 + 1] = ((/* implicit */long long int) max((arr_0 [i_0] [i_0 - 1]), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_1 [(_Bool)0])) - (((/* implicit */int) var_11))))))));
    }
    var_20 = ((/* implicit */unsigned int) ((long long int) (signed char)5));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-79))))) ? (min((((/* implicit */long long int) ((var_15) >> (((((/* implicit */int) var_0)) + (119)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_3))));
}
