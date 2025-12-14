/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137229
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_16);
        var_18 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (short)26350)))) + (2147483647))) >> (((max((((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)199))))))) - (12597LL)))));
    }
    var_19 = ((/* implicit */int) var_15);
    var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6626))) - (268435456U)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */long long int) var_9)) < (var_12))))))));
    var_21 ^= ((/* implicit */unsigned char) var_16);
    var_22 = min((8796093022208LL), (((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned char)48)) && (((/* implicit */_Bool) var_0))))))));
}
