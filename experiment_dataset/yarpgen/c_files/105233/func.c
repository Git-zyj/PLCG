/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105233
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
    var_15 *= ((/* implicit */unsigned char) max((var_11), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) > (2213409653457293543ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32765))) > (33554431U))))) : (((4294967287U) >> (((var_12) - (346041191)))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) - (4261412854U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3210498463U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27249))) : (arr_1 [i_0 + 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((+(8870815693186382998ULL)))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (signed char)84))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (unsigned char)19)));
        arr_6 [i_1] = ((/* implicit */unsigned short) (~(min((16233334420252258069ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))));
    }
}
