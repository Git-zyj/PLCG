/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132899
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
    var_15 = ((/* implicit */_Bool) var_12);
    var_16 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (11046424178155276121ULL)))) > ((+(min((16836000241871318426ULL), (((/* implicit */unsigned long long int) var_9))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U))))) / (((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) - (1U)))));
                    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ ((~(23U)))));
                }
            } 
        } 
    } 
}
