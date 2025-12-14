/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136694
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (var_1))))));
    var_15 = ((/* implicit */unsigned int) var_12);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((var_13) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))) | (((/* implicit */int) ((short) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-22880)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (var_0)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((unsigned short)47146), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) var_9))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16))) : (var_1)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)16383)), (-12))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (((long long int) var_1)))))));
        var_18 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_1 [i_0])) / (var_5))));
        arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_2 [i_0 - 1]))))));
    }
}
