/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122481
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
    var_12 = (+(((((/* implicit */_Bool) 796473217)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1941706949)))))) : (var_9))));
    var_13 = ((/* implicit */unsigned short) (short)-2091);
    var_14 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) (unsigned short)1030))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((-13LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-24959)))))));
        var_16 += ((/* implicit */unsigned int) arr_1 [4LL]);
        var_17 -= ((/* implicit */unsigned short) ((long long int) (((-(((/* implicit */int) (unsigned char)0)))) >= (((/* implicit */int) max((arr_0 [(unsigned short)14]), (arr_0 [(short)12])))))));
    }
    var_18 -= ((/* implicit */int) (unsigned short)64513);
}
