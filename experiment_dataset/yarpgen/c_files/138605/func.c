/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138605
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (18295850644325293619ULL)));
        var_20 = ((/* implicit */_Bool) min((var_20), (arr_1 [i_0])));
        arr_2 [i_0] |= ((/* implicit */int) (~(((unsigned long long int) arr_1 [i_0]))));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))) ? (((/* implicit */unsigned long long int) (~((~(var_11)))))) : ((+(var_5))))))));
    var_22 |= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((0ULL) & (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1371407231)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
}
