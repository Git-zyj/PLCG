/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104654
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) | (min((((/* implicit */unsigned int) (unsigned short)12872)), ((~(9U)))))));
        var_14 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) -9223372036854775788LL)) && (((/* implicit */_Bool) -9223372036854775802LL)))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (short)22813)))))) : (((/* implicit */int) var_4))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
    var_17 = ((/* implicit */_Bool) min((72057594035830784ULL), (((/* implicit */unsigned long long int) 2147483639))));
}
