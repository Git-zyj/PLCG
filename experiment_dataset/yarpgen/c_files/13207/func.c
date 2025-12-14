/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13207
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (((!(var_6))) ? (2603791262U) : (((/* implicit */unsigned int) var_7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) ((((/* implicit */int) (signed char)11)) < (((/* implicit */int) (signed char)-71)))))));
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((var_0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : ((~(800265460863074486LL)))));
        arr_2 [3U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_6))) <= (((/* implicit */int) (unsigned char)24))));
        var_13 = ((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)14108), ((unsigned short)914))))));
    }
}
