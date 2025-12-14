/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155285
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_3))));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned short)8)))) : ((~(((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned int) 3926715015U))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1)))))))));
}
