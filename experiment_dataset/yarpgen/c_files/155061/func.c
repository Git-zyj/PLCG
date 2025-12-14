/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155061
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
    var_17 = ((/* implicit */unsigned char) 1325118205U);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_14)), ((((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) min((1073741822LL), (((/* implicit */long long int) var_15)))))))));
        var_19 = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) 2969849091U)), (((arr_3 [i_0] [i_0]) & (arr_3 [i_0] [i_0])))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-17233))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (var_10)))));
    }
    var_21 = ((/* implicit */long long int) max((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (var_8)))) ? (((/* implicit */unsigned int) var_3)) : (var_0))))));
}
