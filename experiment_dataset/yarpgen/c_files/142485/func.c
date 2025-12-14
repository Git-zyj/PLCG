/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142485
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
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)50373)))) * (((/* implicit */int) (signed char)0)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 793529322301216642LL)) / (var_6)))))))));
    var_17 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((signed char) ((((175856074) / (175856074))) << (((((/* implicit */int) min(((unsigned short)127), (((/* implicit */unsigned short) var_14))))) - (108))))));
        var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) max((18388922155673296795ULL), (((/* implicit */unsigned long long int) -7690635512049288542LL))))) ? (((10856518428269105568ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))))) : (((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1081887422)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) / (var_4))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))))) % (((/* implicit */int) (signed char)22))))) - (max((min((5LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10)))))))));
        arr_8 [i_1] = ((/* implicit */long long int) min((((arr_2 [i_1] [i_1]) << (((/* implicit */int) (!(((/* implicit */_Bool) 7690635512049288542LL))))))), ((-(max((((/* implicit */unsigned long long int) (unsigned short)65409)), (13873286288233798057ULL)))))));
    }
}
