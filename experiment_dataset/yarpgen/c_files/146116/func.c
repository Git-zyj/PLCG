/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146116
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) : (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ^ (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [0ULL]))))))))));
        var_19 ^= ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (9007199254740988LL) : (-9007199254740988LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) 983493561095091745LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? ((((_Bool)1) ? (3784636103684772396ULL) : (11194802844125093793ULL))) : (((((/* implicit */_Bool) -1967295671)) ? (3139487971971936713ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35149)))))));
    }
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (var_10)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)))))), (var_0)));
    var_21 = ((/* implicit */unsigned char) max((max(((((_Bool)1) ? (8230637071483239520LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) var_10))));
}
