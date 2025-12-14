/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175267
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) arr_0 [i_0] [(_Bool)1])))) : (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> ((((-((-(((/* implicit */int) var_8)))))) - (55))));
        var_15 |= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_1))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (2851962945U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    }
    var_16 = ((/* implicit */int) ((short) var_4));
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (((unsigned short) ((unsigned short) var_5)))));
}
