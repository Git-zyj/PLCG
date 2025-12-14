/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151950
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_2)) : (var_6)))));
        arr_4 [4LL] = ((/* implicit */_Bool) ((unsigned char) ((7942463906038846470ULL) == (((var_0) - (((/* implicit */unsigned long long int) var_13)))))));
        var_14 = ((/* implicit */int) min((var_14), ((((((_Bool)1) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) (unsigned short)60452)) | (((/* implicit */int) var_4)))))) % (min((var_11), (((/* implicit */int) (_Bool)1))))))));
    }
    var_15 = ((/* implicit */long long int) ((unsigned short) var_1));
    var_16 = ((/* implicit */unsigned int) (_Bool)1);
}
