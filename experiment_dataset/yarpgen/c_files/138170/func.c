/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138170
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
    var_13 = ((/* implicit */short) min((7015252079668689608ULL), (7015252079668689605ULL)));
    var_14 = ((/* implicit */unsigned long long int) var_0);
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(var_4))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    var_16 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (7015252079668689608ULL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) min(((~(((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) & (((/* implicit */int) var_10)))))), (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */short) (-(min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0])))), (min((((/* implicit */int) (_Bool)1)), (-2038666195)))))));
        var_19 |= ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        var_20 += ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && ((_Bool)1))))) % (max((((/* implicit */unsigned long long int) arr_1 [2LL])), (1702757696635449180ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [(_Bool)1])))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_2 [i_1] [i_1])))))));
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) + (((((/* implicit */_Bool) arr_3 [i_1])) ? (739819908) : (((/* implicit */int) (_Bool)1)))))) / ((((((~(((/* implicit */int) arr_0 [i_1] [i_1])))) + (2147483647))) << ((((-(arr_3 [i_1]))) - (3514012445U)))))));
    }
}
