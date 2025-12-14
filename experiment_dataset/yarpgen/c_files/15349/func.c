/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15349
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
    var_15 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((-3277304112150759069LL) * (0LL)))) + (((((/* implicit */unsigned long long int) arr_2 [(_Bool)1])) * (arr_0 [i_0]))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
        var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (0LL)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || ((_Bool)1)))), (min((arr_2 [i_0]), (arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 0LL))))));
    }
}
