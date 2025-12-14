/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166111
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
    var_15 = ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [(short)19]) ^ (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) 2U))))))) ? (((((/* implicit */_Bool) var_4)) ? (min((var_13), (((/* implicit */unsigned long long int) (unsigned short)38917)))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_4 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15591209541708260503ULL)) ? (643166145U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48409)))))), (arr_1 [i_0] [i_1])));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) (signed char)-1)), (var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((var_11), (var_11)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((var_5) - (4294967295ULL)));
    var_19 = ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */unsigned long long int) var_6);
}
