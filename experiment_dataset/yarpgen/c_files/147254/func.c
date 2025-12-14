/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147254
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (15931328040387118934ULL)))));
    var_14 = max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10))))), (15473478289164291591ULL));
    var_15 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) 2973265784545260025ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (9LL))))) / (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) (signed char)50)))))));
        var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) 15931328040387118934ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31922)))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned long long int) (short)-26130)))));
        arr_2 [i_0] = ((((unsigned long long int) (-(274877906943LL)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) (unsigned char)228))))));
        var_19 = ((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned char)137)))))));
    }
}
