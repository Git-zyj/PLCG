/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184593
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
    var_16 = ((/* implicit */short) min(((unsigned short)18723), ((unsigned short)46813)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
        var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)46813))));
    }
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-104)), (var_14)))) ? (((/* implicit */int) min((var_1), (((/* implicit */short) var_8))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)18726)))))))) ? (((/* implicit */int) max((min((var_11), ((unsigned char)154))), (((/* implicit */unsigned char) var_4))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_8)))))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)101)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)25))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))));
}
