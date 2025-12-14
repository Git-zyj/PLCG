/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122644
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) arr_0 [i_0] [(short)3])) : ((-(arr_1 [i_0])))))), (min((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (arr_1 [i_0])))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_0]))) : (var_10)))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), ((-((~(3586568149U))))))))));
        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (var_7))))) ^ ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) var_1)) : ((~(var_16)))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) >> (((((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? ((-(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) var_2)))))) + (74)))));
}
