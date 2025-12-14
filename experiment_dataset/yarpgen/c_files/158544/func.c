/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158544
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
    var_14 = (-(((((((/* implicit */_Bool) (unsigned char)134)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> (((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_9))))) - (27806))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) && (((/* implicit */_Bool) var_1))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */long long int) var_0)) / (var_6))) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (signed char)58))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]));
        var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))));
    }
}
