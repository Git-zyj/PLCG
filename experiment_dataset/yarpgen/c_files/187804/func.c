/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187804
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
    var_12 = ((/* implicit */_Bool) (~(var_7)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_11))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((_Bool) ((short) (-(((/* implicit */int) var_1)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)25375)) <= (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)40167)))))));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2097151)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_3)))))))) ? (((((_Bool) var_9)) ? (((/* implicit */int) min(((unsigned short)32767), (((/* implicit */unsigned short) var_1))))) : ((+(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)40174))))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))) : (((/* implicit */int) var_5))))));
    var_16 |= ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) var_4))));
}
