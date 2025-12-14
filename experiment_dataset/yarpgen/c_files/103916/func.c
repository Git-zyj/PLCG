/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103916
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) (unsigned char)243)));
        var_20 = ((/* implicit */short) ((unsigned short) 3539735850U));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) var_4));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21384)) || (((/* implicit */_Bool) (signed char)-95))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((short) var_7))))))) : (var_9)));
    var_24 = var_7;
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_16))))) + (max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((var_8) - (500982526U)))))))))))));
}
