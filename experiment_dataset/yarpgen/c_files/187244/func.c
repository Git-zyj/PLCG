/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187244
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) >= (var_7)))), (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_10)) - (34)))))))) || (((/* implicit */_Bool) (~((~(var_6))))))));
    var_12 = ((/* implicit */unsigned short) ((min((((/* implicit */int) max((var_5), (var_5)))), ((~(((/* implicit */int) var_3)))))) & (((/* implicit */int) (((+(((/* implicit */int) var_1)))) != (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((max((var_9), (var_0))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) || (((/* implicit */_Bool) var_1))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned char) var_2))))) + ((((+(arr_0 [i_0]))) - (arr_0 [i_0])))));
    }
}
