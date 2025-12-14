/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153065
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
    var_17 = ((/* implicit */long long int) var_8);
    var_18 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (7975460831160152047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32375)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (var_6)));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-((((-(var_5))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_12))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))))) : (((unsigned long long int) ((unsigned short) (unsigned short)26822)))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >> (((/* implicit */int) var_13)))))));
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    }
}
