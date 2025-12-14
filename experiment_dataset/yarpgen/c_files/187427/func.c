/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187427
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (~((-(((7561442013102030619ULL) << (((17712391891542034899ULL) - (17712391891542034891ULL)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_3);
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))), (((((/* implicit */_Bool) 10885302060607521003ULL)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (((((/* implicit */unsigned long long int) var_4)) & (10885302060607520997ULL))))) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (max((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) ((17592186044415ULL) >= (10885302060607521022ULL)))))))))));
        var_16 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */short) arr_7 [i_1 + 2]);
        arr_9 [i_1] |= ((/* implicit */unsigned short) min((18446726481523507218ULL), (((/* implicit */unsigned long long int) (unsigned short)26710))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 734352182167516725ULL)))))))));
        arr_14 [i_2] = ((/* implicit */signed char) (unsigned short)38826);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((max((arr_6 [i_3] [i_3 - 1]), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26710))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        arr_17 [i_3] = ((/* implicit */unsigned int) max((arr_16 [i_3 - 1] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_15 [i_3 - 1]))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((16777215), (((/* implicit */int) var_10)))), (((/* implicit */int) max(((unsigned short)26719), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_1)))) : (var_2)));
}
