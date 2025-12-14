/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154212
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) ((unsigned short) 11987018963973779512ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_1))))) : (min((var_15), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (var_13))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) 7807685293631994909LL)) ? (((/* implicit */int) (short)-21459)) : (((/* implicit */int) (short)-21459)))), (((/* implicit */int) (short)-21473)))), (((int) var_0))));
                arr_4 [i_0] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (9017272145062667097LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21468)))))) ? (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */unsigned int) var_13)))))));
            }
        } 
    } 
}
