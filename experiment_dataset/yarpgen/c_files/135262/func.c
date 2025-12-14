/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135262
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), ((+(((/* implicit */int) (signed char)105))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((2029245195U), (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) (unsigned char)211)) ? (6574572860146632389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0])) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10))))))), (var_3)));
                arr_6 [i_0 + 2] [i_1] [6ULL] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned char)9] [(unsigned char)9] [i_0 + 3])) == (((/* implicit */int) var_1))))), ((((~(((/* implicit */int) (signed char)-118)))) - (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))));
                var_16 ^= ((/* implicit */_Bool) 0U);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_14);
}
