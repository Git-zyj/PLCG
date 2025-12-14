/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100229
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2923081556U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) / (((2923081556U) / (1371885740U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [3U] = ((/* implicit */unsigned int) min((((unsigned char) min((((/* implicit */long long int) 2923081561U)), (arr_3 [i_1] [i_1])))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1371885753U) / (arr_2 [i_0] [i_1])))) && (((/* implicit */_Bool) arr_2 [1ULL] [i_1])))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) & ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))), (min((((/* implicit */long long int) arr_0 [i_0])), (((arr_1 [i_1] [i_0]) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (var_8)))), (1371885735U)))));
    var_13 = ((((/* implicit */_Bool) ((((unsigned long long int) var_0)) * (((/* implicit */unsigned long long int) ((int) var_9)))))) ? (min((min((var_8), (var_8))), (((/* implicit */int) min((var_5), (var_5)))))) : (var_8));
}
