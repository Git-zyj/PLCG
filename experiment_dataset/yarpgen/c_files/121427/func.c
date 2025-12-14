/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121427
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7508594327388164742LL)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) (short)-1)) ? (7055799600920863163LL) : (-7508594327388164742LL))))))));
        arr_2 [i_0] = min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-121))))), (((((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) -7055799600920863164LL)))) ? (((((/* implicit */_Bool) 2118452259)) ? (-9223372036854775792LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (7055799600920863168LL))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((17582071856663536148ULL), (((((/* implicit */_Bool) 10878066248958647256ULL)) ? (10878066248958647243ULL) : (((/* implicit */unsigned long long int) 65504LL))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (-380310596268556729LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-125)), (1963958703U)))) <= (((((/* implicit */_Bool) var_6)) ? (7055799600920863164LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [11LL] [11LL]))))))))))))));
    }
    var_14 &= (signed char)-121;
    var_15 = (signed char)-76;
}
