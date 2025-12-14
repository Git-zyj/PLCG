/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170940
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
    var_18 &= ((/* implicit */unsigned short) (short)9282);
    var_19 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */signed char) (_Bool)1);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-15907)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21834))))) : (((((/* implicit */_Bool) (unsigned short)43690)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)235))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) arr_8 [i_1] [i_1])) < (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
        var_21 -= ((/* implicit */unsigned short) (~(0U)));
    }
    var_22 = (~(18446744073709551615ULL));
}
