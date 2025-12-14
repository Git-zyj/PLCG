/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17121
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
    var_11 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_3)), (arr_2 [i_0])));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : ((~(arr_2 [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1791895252)))))))));
        var_14 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), (arr_0 [i_1])))))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 2761951075821610810LL)) || (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) arr_1 [16LL])))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (~(var_10))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_1 [i_1])) << (((((/* implicit */int) arr_0 [i_1])) - (592))))) : (((/* implicit */int) ((arr_3 [i_1]) <= (((/* implicit */unsigned long long int) arr_2 [i_1]))))))) : (((/* implicit */int) var_3))));
        var_16 = ((/* implicit */unsigned char) arr_3 [7ULL]);
    }
    var_17 *= ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((unsigned int) var_4))) - (min((((/* implicit */long long int) var_3)), (8643430896623007428LL))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (+(var_1)))) : (var_8)))));
}
