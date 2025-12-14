/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130367
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)21)), (arr_0 [i_0 - 1])))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0 + 2] [i_0]) : (((((/* implicit */int) var_6)) >> (((/* implicit */int) var_6))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483618)) ? ((-(max((2147483613), (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) 2147483635)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((+(378131149U)))))));
}
