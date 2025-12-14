/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169387
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */unsigned long long int) var_3);
    var_12 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 6049194831864939933LL)) ? (((/* implicit */unsigned int) max((1532617033), (((/* implicit */int) (signed char)-73))))) : (0U))), (((((/* implicit */_Bool) max((11968759456138948673ULL), (((/* implicit */unsigned long long int) (signed char)29))))) ? (((/* implicit */unsigned int) ((229949158) + (((/* implicit */int) (unsigned short)65534))))) : (((((/* implicit */_Bool) 11968759456138948660ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) : (var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((((/* implicit */_Bool) (unsigned short)4153)) && (((/* implicit */_Bool) (unsigned short)63111))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */_Bool) var_1);
        var_16 |= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned char)3)) > (((/* implicit */int) (signed char)-18))))));
    }
}
