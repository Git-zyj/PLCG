/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119022
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
    var_15 = ((((/* implicit */_Bool) ((var_12) >> (((((/* implicit */int) var_2)) - (20360)))))) ? (11437947612187122992ULL) : (var_13));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39080))))), (((7008796461522428629ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (arr_0 [i_0])))))))));
        var_17 = ((/* implicit */unsigned long long int) (-(((unsigned int) ((((/* implicit */int) (unsigned short)7)) == (-2073028860))))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)45144))))), (((7008796461522428618ULL) & (11437947612187123002ULL))))))));
}
