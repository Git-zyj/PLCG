/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146194
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
    var_16 = ((/* implicit */unsigned int) var_3);
    var_17 = ((/* implicit */short) ((unsigned int) 0ULL));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-128)) < (-1186342726))))) : ((-(var_8)))))) > ((~(18446744073709551602ULL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_19 |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))), (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) + (15289407317727521316ULL))))) >= (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (15289407317727521316ULL)))));
        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (36039773))), (((/* implicit */int) arr_2 [i_0] [(signed char)20]))));
        var_21 = ((/* implicit */short) (-(((unsigned int) -36039762))));
    }
}
