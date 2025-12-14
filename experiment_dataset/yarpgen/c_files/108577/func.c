/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108577
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_11), (((/* implicit */unsigned long long int) var_4)))), (max((var_11), (((/* implicit */unsigned long long int) var_17))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)14] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(short)4] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6ULL] [i_0]))) - (arr_0 [i_0 - 2])))));
        var_21 *= ((/* implicit */_Bool) arr_1 [(unsigned short)16] [(unsigned short)16]);
    }
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)94)) > (((/* implicit */int) (signed char)-94)))))));
}
