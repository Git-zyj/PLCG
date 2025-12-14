/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160263
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
    var_12 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) 2142475892)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-88)))) < (((/* implicit */int) ((_Bool) (signed char)110)))))) == (((/* implicit */int) ((unsigned char) var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((signed char) ((var_10) | (((/* implicit */int) (signed char)126))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 9876489340981619412ULL))) - (((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) var_9)) ? (1293014938) : (1961125438)))))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1140873287U) * (2223400274U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) var_10)) : (((unsigned long long int) 2071567021U)))))));
                    var_16 = ((/* implicit */short) ((((unsigned long long int) (short)-32763)) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))) + (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_6))))))));
                }
            }
        } 
    } 
}
