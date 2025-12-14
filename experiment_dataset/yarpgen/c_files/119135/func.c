/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119135
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
    var_18 = var_15;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) max((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (unsigned short)15701)) - (15685))))))))), (min((((/* implicit */long long int) arr_0 [i_0])), (max((((/* implicit */long long int) (unsigned short)35777)), (2LL)))))));
        var_20 -= (-(((((8591130349736358824LL) != (var_5))) ? (((/* implicit */int) arr_0 [0LL])) : (((/* implicit */int) var_6)))));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_21 += ((/* implicit */short) (+((+(((/* implicit */int) var_3))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)29758)) % (((/* implicit */int) arr_2 [i_1])))) - (((/* implicit */int) arr_2 [i_1 - 1]))))) ? (max((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_5 [i_1] [i_1])))), (max((8388607), (((/* implicit */int) var_17)))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) (short)31430)) || (((/* implicit */_Bool) var_6))))), ((-(((/* implicit */int) (_Bool)1))))))));
        var_23 |= ((/* implicit */unsigned short) ((((((arr_3 [i_1]) << (((((/* implicit */int) var_7)) - (47770))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9007199254740991LL)))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)35778)))))))))));
    }
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_3))));
}
