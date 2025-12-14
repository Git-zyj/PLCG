/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120913
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (2003765444U)))) && (((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) -6295392920632074270LL)))))))), (min((max((var_6), (((/* implicit */unsigned long long int) var_8)))), (((var_16) | (var_10)))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -714651658)) < (2003765420U))))) / (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_7)))), (min((var_10), (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [7LL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)14]))))))) <= (((var_18) - (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */short) ((((5413639744619280521LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)-31160))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) / (2291201867U))))));
    }
}
