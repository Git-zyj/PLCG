/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179538
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [2ULL] |= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_2 [10ULL])), (((arr_1 [(signed char)10]) | (arr_1 [(unsigned char)6]))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1)))))));
        var_20 = ((/* implicit */signed char) var_15);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (~(arr_2 [i_0]))))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_22 = ((/* implicit */unsigned char) var_14);
    var_23 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)31))))))) - (((/* implicit */unsigned int) ((int) ((var_16) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_7 [i_1]))));
        arr_9 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_1] [i_1]))));
        arr_10 [i_1] = (((!((_Bool)0))) ? (((arr_8 [i_1] [i_1]) ? (12915532U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_1]) >= (((/* implicit */int) var_11)))))));
        var_25 = ((arr_5 [i_1]) | (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-1)))));
    }
}
