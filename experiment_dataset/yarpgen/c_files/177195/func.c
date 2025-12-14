/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177195
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
    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_1)) : ((((_Bool)0) ? (var_12) : (var_18)))))));
    var_20 = var_8;
    var_21 = ((/* implicit */signed char) (~(((var_5) ? (18356378986412366097ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) ? (max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))) : (((((/* implicit */int) (_Bool)0)) + (arr_2 [i_0 + 1])))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_23 = (~((~(((/* implicit */int) arr_3 [i_0 + 1] [i_0])))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_1 [i_1] [i_1 + 1])))) ? (((((/* implicit */_Bool) ((var_9) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_4 [i_1]), (arr_1 [i_0] [i_1])))) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) (signed char)127)) >> (((220945425) - (220945397)))))));
            var_25 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (arr_2 [i_0]))) < (((/* implicit */int) arr_4 [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (-112873650))))) / (((arr_5 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2] [11]))))))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (-7593608089161727521LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))))));
        }
    }
}
