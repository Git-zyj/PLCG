/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119160
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) (unsigned short)27055)) ? (((/* implicit */int) (unsigned short)27055)) : (((/* implicit */int) (unsigned short)8191)))), (((((/* implicit */int) (unsigned short)38481)) - (((/* implicit */int) (unsigned short)38481)))))) - (((/* implicit */int) var_4)))))));
    var_13 = ((/* implicit */short) ((((((/* implicit */int) min((var_11), (var_11)))) != (((/* implicit */int) min((((/* implicit */unsigned short) (short)21551)), (var_4)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)221)) * (((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) ((signed char) 1626883578))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)16368))))) : (((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), ((!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (((var_8) - (((/* implicit */unsigned int) var_10))))))))));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27054)) ? (12789896881309093690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (0ULL)));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))));
        var_17 *= ((/* implicit */_Bool) ((short) min((((/* implicit */short) arr_2 [i_1])), (arr_4 [i_1]))));
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_4))));
}
