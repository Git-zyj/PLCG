/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108388
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned char)252)))) && (((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]))))))))) <= (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_0])) | (arr_0 [i_0] [i_1])))) ? (((/* implicit */long long int) ((arr_3 [i_0] [i_1]) << (((((arr_4 [i_0]) + (901565658))) - (23)))))) : (((((/* implicit */long long int) arr_4 [i_0])) ^ (arr_0 [i_1] [i_0])))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) arr_1 [(signed char)8]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((((var_15) || (var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)1)) ? (var_4) : (341394166)))) : (((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_17 = var_8;
}
