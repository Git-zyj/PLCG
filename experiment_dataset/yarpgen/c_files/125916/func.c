/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125916
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))) || (((/* implicit */_Bool) 236873122454575372ULL))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9))))), (((unsigned int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) / (((((/* implicit */_Bool) var_7)) ? (4153578021U) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 1]))))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((var_4), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [12LL] [12])) ? (((/* implicit */int) var_7)) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) var_7)) : (var_6))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10U] [8LL])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2]))))))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0 + 1] [i_0]), (var_4)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_0 [8U]))))))) : ((-(arr_1 [i_0] [i_0])))));
    }
}
