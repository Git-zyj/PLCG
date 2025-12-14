/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17319
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_2), (17679135880349046842ULL)))) ? (max((((/* implicit */unsigned long long int) var_1)), (17679135880349046842ULL))) : (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned long long int) var_8)) : (17073943947328560089ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_20 -= ((/* implicit */long long int) arr_2 [9ULL] [i_0]);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (arr_1 [i_0])))), (((1546207208545865084LL) % (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_15)) ? (4593168903618033830LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_23 *= ((/* implicit */short) (-(((((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) (unsigned char)164)))) - (((/* implicit */int) arr_4 [i_1 + 1]))))));
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-27199))))))) ? ((-(arr_5 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 + 2])) % (((/* implicit */int) arr_4 [i_1]))))));
    }
    var_24 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-27194)) > (((/* implicit */int) (signed char)-85)))))))) ? (((((/* implicit */_Bool) -3037676638429297149LL)) ? (((long long int) var_18)) : (((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_4)))))) : (((/* implicit */long long int) (~(((/* implicit */int) max((var_15), ((short)2047))))))));
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_14), (((/* implicit */signed char) var_5))))), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_11))))))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-5984))) - (var_7)))), (((15515711276516702735ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_26 = ((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_16)))))))))));
}
