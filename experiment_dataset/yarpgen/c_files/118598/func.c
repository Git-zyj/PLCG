/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118598
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
    var_16 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 += ((((((/* implicit */int) (unsigned short)47107)) >> (((/* implicit */int) (unsigned char)7)))) > (((int) arr_0 [i_0] [(_Bool)1])));
        var_18 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [6LL] [(short)10])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >> (((((unsigned int) var_10)) - (3104750240U))))) : (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (32286)))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)47113)))) > ((-(((/* implicit */int) (unsigned short)32768)))))))) : (var_9)))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_15))));
    var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 2147483647)) : (((((/* implicit */_Bool) ((int) var_11))) ? (max((var_10), (((/* implicit */long long int) 2147483647)))) : (((long long int) var_13))))));
}
