/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169117
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (166073089335470308ULL))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-5128526587367272699LL) : (((/* implicit */long long int) var_3))))) ? (((18280670984374081296ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) / (3976521352U))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [(signed char)11] [10ULL] [i_1 + 1]))))) : ((~(18280670984374081296ULL)))));
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18280670984374081307ULL)) && ((((_Bool)1) || (var_15))))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
}
