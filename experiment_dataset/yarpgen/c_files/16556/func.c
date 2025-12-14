/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16556
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (min((((/* implicit */unsigned long long int) (unsigned char)59)), (var_2)))));
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [6LL] = ((/* implicit */unsigned char) ((((arr_1 [i_0 - 1]) / (arr_1 [i_0 + 1]))) * (((((/* implicit */_Bool) max(((signed char)4), ((signed char)4)))) ? (((/* implicit */int) (unsigned char)15)) : ((+(((/* implicit */int) var_11))))))));
        var_14 = (((-(((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))))) - (var_6));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) (short)16531))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_7))))))) % (arr_1 [i_1]))))));
        var_16 += ((/* implicit */_Bool) arr_5 [i_1]);
    }
    var_17 -= ((/* implicit */_Bool) var_3);
}
