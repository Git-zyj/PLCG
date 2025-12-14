/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144869
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
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
    var_16 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3492911968U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))))))) / (((/* implicit */unsigned int) arr_1 [i_1] [i_1]))));
                var_18 = ((((/* implicit */_Bool) (+(((unsigned int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 511LL)))))) : (((((/* implicit */_Bool) (~(1ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) & (arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) arr_2 [i_0])))));
                var_19 -= ((/* implicit */unsigned char) (+(((((unsigned long long int) 18446744073709551615ULL)) * (((/* implicit */unsigned long long int) (-(var_3))))))));
                arr_6 [i_0] = ((unsigned int) arr_5 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
