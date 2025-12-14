/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110301
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_1 - 1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 - 1])))) || (((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned int) min(((short)24586), (((/* implicit */short) (signed char)-1))))), (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ ((+(3512693601U)))))) < (max((((/* implicit */long long int) var_2)), (max((-9223372036854775795LL), (((/* implicit */long long int) var_6)))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2189880014U)) ? (268435456U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4966282323659174705ULL)) || (((/* implicit */_Bool) var_12))))))))) ? (((/* implicit */int) var_0)) : (1125134469))))));
    var_19 ^= ((/* implicit */short) max((min((((/* implicit */long long int) var_8)), (max((var_3), (((/* implicit */long long int) var_5)))))), (var_7)));
}
