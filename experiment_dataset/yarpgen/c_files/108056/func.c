/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108056
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49793))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)34820), ((unsigned short)30696))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16460022096200285963ULL)))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))))))));
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 2] [i_0 - 2])))), (min((((/* implicit */unsigned int) arr_1 [i_0])), (max((((/* implicit */unsigned int) (unsigned short)30716)), (0U)))))));
        var_19 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_0 [i_0] [i_0])))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51365)) && (((/* implicit */_Bool) arr_0 [(unsigned char)7] [i_0]))))))) - ((-(((/* implicit */int) arr_1 [i_0 - 2]))))));
    }
    var_20 = ((/* implicit */unsigned int) var_9);
    var_21 |= ((/* implicit */unsigned long long int) min((((((_Bool) var_4)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) var_13)))), ((-(((int) var_0))))));
    var_22 = ((/* implicit */short) (+((-(((21U) * (4294967295U)))))));
}
