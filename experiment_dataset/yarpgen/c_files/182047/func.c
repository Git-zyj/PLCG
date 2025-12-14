/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182047
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_8)) - (80)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)184))))) ? (((/* implicit */int) max((var_2), ((unsigned char)0)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_2))) && (((/* implicit */_Bool) ((unsigned char) var_9))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_6))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)219)))), (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
    }
    var_11 += ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)5)) - (((((/* implicit */int) (unsigned char)143)) + (((/* implicit */int) var_9)))))) < (((/* implicit */int) max((var_3), (var_4))))));
}
