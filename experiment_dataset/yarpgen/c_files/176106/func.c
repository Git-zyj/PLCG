/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176106
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */unsigned long long int) (-(var_10)))) & (arr_2 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5163385340421991492LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_1 [(_Bool)1])))))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) arr_1 [(signed char)0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(((/* implicit */int) (unsigned short)24576)))) : (((((/* implicit */_Bool) (unsigned short)25507)) ? (((/* implicit */int) (short)19414)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25507)))))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [(signed char)2] |= ((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1)));
    }
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
}
