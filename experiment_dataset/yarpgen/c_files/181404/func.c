/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181404
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
    var_18 -= ((/* implicit */short) ((max((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) (unsigned short)43175)) || (((/* implicit */_Bool) 1401764854U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (var_13)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43146)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) : (var_15)));
    var_19 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_9)), (((var_11) - (((/* implicit */unsigned long long int) 1208629797)))))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (arr_0 [i_0] [i_0]))), ((~(arr_0 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned int) ((4281575613U) <= (13391682U)));
        var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-31)) ? (((arr_0 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) 8444249301319680ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */long long int) 1631067095U)) & (var_7)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22361)))))) - (((arr_0 [i_1] [i_1]) ^ (arr_0 [i_1] [i_1])))));
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1346987620U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_3 [i_1])) : ((+(((/* implicit */int) (unsigned short)43175))))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (140737484161024ULL) : (((/* implicit */unsigned long long int) ((unsigned int) 902801888)))))));
        var_26 = ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1]))))) : (((1125899906842623ULL) & (((/* implicit */unsigned long long int) 1985036428U)))));
        var_27 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) >= (var_8))))) : (((9754252605927483155ULL) << (((/* implicit */int) (_Bool)1)))))))));
    }
}
