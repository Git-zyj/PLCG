/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183015
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
    var_10 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_5)) ? (5467055376865752053LL) : (((/* implicit */long long int) 67108864U)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) arr_0 [i_0]);
        arr_2 [6LL] [6LL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-5135)), (arr_0 [i_0])))) ? (((long long int) -1556798311)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (unsigned short)15698))))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0])))) ? ((~(-1428341815659655310LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [(unsigned char)4]), (arr_1 [i_0]))))))));
    }
    var_12 -= min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) 67108874U)) ? (((/* implicit */int) (short)-20888)) : (1556798304)))));
}
