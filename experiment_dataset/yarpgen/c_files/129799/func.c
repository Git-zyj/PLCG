/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129799
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -7646416173055067377LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14641)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38531)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) <= (((3015332423522801166ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29329))))))))) : (min((arr_1 [i_0 + 2]), (arr_1 [i_0 - 2])))));
    }
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22201)) ? (((/* implicit */int) (short)-6391)) : (((/* implicit */int) (unsigned short)9258))))) : (1398279227917358177ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10920)))));
    var_12 |= ((/* implicit */long long int) (unsigned short)2539);
}
