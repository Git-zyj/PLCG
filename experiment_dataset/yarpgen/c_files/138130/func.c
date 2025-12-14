/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138130
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
    var_11 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_9)) + (((unsigned long long int) (unsigned short)192)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_0))))));
    var_12 -= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0]));
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 8576507489304841429LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))) : (752314629182701748LL))) - (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) (short)-14401)))))));
        arr_5 [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || ((_Bool)1)))) - (((/* implicit */int) arr_3 [i_0])));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [(unsigned char)2])) << (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535))));
}
