/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143722
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
    var_17 = ((/* implicit */unsigned char) min((var_16), (15916827158692062712ULL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) min((((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((576460752236314624ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (576460752236314624ULL)))))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((max((576460752236314624ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) <= (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (17870283321473236991ULL)))))));
}
