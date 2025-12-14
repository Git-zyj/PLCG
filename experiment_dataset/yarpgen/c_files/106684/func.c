/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106684
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_15 -= ((long long int) var_8);
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))));
        var_17 = ((/* implicit */short) (-(var_13)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */unsigned char) var_3);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 + 2]);
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_14)), (var_0)))))) : (((unsigned int) var_3))));
    var_19 = ((/* implicit */long long int) ((375705558670554837ULL) >= (((/* implicit */unsigned long long int) 800219589))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_9))));
    var_21 = ((/* implicit */unsigned int) (signed char)46);
}
