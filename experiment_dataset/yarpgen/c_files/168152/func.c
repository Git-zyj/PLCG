/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168152
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) (signed char)-29)), (var_8))) : (var_8)))) ? (70360154243072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_0 [(unsigned char)3])) : (-1788576868)))) ? ((+(((((/* implicit */_Bool) 18289637673115176444ULL)) ? (70360154243072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) 4294967295U))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)16))))) ? (((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 0U))))) ? (17979214137393152ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023574955782832270LL)) ? (var_7) : (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12199475491386044805ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (var_2))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 11911173600516425650ULL))));
                var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((16), (((/* implicit */int) (unsigned short)43184))))))) ? ((-(((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 70360154243072ULL)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (18446744073709551591ULL) : (((/* implicit */unsigned long long int) (+(-1520210749004381737LL))))));
    var_24 |= ((/* implicit */signed char) var_7);
}
