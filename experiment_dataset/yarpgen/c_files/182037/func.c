/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182037
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)13)))))) >= ((+(((((/* implicit */_Bool) (unsigned short)41)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned short)65497))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min(((-(6767059495961841968LL))), (((/* implicit */long long int) var_15)))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65523)) / (((/* implicit */int) (unsigned short)13))));
        arr_6 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) min(((unsigned short)15), (var_15)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_0 [6U] [6U]))))));
    }
    var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_3), (var_14)))) ? ((~(((/* implicit */int) (short)13115)))) : (min((56), (-41)))))));
}
