/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189045
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) var_11)));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_5 [i_1 - 1]))))) | (((/* implicit */int) ((short) arr_5 [i_1 + 2]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 553405047)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) < (((((((/* implicit */_Bool) var_14)) ? (13292238037413189800ULL) : (((/* implicit */unsigned long long int) 3151358732U)))) + (var_3)))));
}
