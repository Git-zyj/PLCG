/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16095
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
    var_11 = ((/* implicit */unsigned short) min(((signed char)91), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0LL)) == (var_8))))));
    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_5)))) ? (var_8) : (((/* implicit */unsigned long long int) max((var_3), (var_5)))))), (((/* implicit */unsigned long long int) var_3))));
    var_13 = ((/* implicit */unsigned short) (!(var_0)));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_9)) >> (((((var_3) - (var_5))) + (1713589027159735329LL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (signed char)91))))));
        var_16 += ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0]));
        var_17 = ((/* implicit */short) ((signed char) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [(_Bool)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [5LL]))))))));
    }
}
