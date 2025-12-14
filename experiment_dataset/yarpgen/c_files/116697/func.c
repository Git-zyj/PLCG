/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116697
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
    var_10 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = var_9;
        var_12 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_9))));
        arr_5 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 517786148270391878ULL)) ? ((~(((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) arr_1 [i_1] [i_1]))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) 2204508518U);
        var_15 = ((/* implicit */long long int) ((_Bool) -7731713604210267207LL));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))) + ((+(var_8))))))));
    }
    var_17 = min((var_0), (((/* implicit */short) var_2)));
}
