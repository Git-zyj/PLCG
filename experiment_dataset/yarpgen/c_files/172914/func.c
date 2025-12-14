/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172914
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
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_11)), (min((((18433782352053066993ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 12961721656484615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52606))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52576))) : (((((/* implicit */_Bool) var_3)) ? (2305843009213693948ULL) : (((/* implicit */unsigned long long int) 1023)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_13) + (9223372036854775807LL))) << (((12857004005589279818ULL) - (12857004005589279818ULL)))))))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), ((-((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12188206106382188721ULL)))))))));
        var_19 += var_2;
    }
}
