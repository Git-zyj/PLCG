/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153381
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
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) (signed char)-22);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) (signed char)35))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_1 [i_0]))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_1 [i_0 + 1])), (arr_0 [i_0 + 2] [i_0]))))))));
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0] [i_0]))), ((+(var_6))));
    }
    var_19 = ((/* implicit */_Bool) var_13);
}
