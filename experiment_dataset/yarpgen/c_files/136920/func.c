/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136920
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned char)191)) ? (-5916413597080529308LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27054))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17163)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)14336)) != (((/* implicit */int) (unsigned short)4258))))) > (((/* implicit */int) ((((/* implicit */int) (short)-27055)) == (((/* implicit */int) var_0)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned short)63266);
    }
}
