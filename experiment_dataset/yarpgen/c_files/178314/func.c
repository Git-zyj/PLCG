/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178314
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31)))))));
        arr_3 [i_0] [i_0] = (i_0 % 2 == 0) ? (max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */int) (unsigned short)49041)) >> (((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) + (23873))))))) : (max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */int) (unsigned short)49041)) >> (((((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) + (23873))) - (45891)))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-53)), (var_5)));
    }
    var_16 = ((/* implicit */signed char) max((var_16), (var_2)));
    var_17 = ((/* implicit */_Bool) ((signed char) (((-(var_5))) * ((+(((/* implicit */int) var_12)))))));
}
