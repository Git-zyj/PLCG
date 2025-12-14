/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120789
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_10 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -443229474)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (signed char)7)))) : (((/* implicit */int) ((4070815511637503576LL) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))))))) || (((/* implicit */_Bool) arr_3 [i_1])));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) var_7))))));
                var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (2047ULL)));
                arr_8 [9U] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned char) var_3);
}
