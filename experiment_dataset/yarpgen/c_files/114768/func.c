/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114768
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 *= (_Bool)1;
                var_15 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747))) : (var_10))))) == (var_9)));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1785240497)) | (var_11)))))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -1785240516)) && (((/* implicit */_Bool) (signed char)43))))) < (((/* implicit */int) ((593229246325243035ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32747)) | (((/* implicit */int) var_8))));
    var_19 &= ((/* implicit */short) ((((/* implicit */int) var_2)) - (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)35018))))) ^ (((((/* implicit */_Bool) (unsigned short)30361)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
}
