/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185
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
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)137)) >= (((/* implicit */int) var_8))))), ((unsigned char)33))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (signed char)78))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)174))))) : (var_5)))));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((unsigned int) arr_2 [i_2 - 1])));
                    var_17 *= ((/* implicit */unsigned long long int) (+(((((((arr_1 [i_0 - 3]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)21077)) - (21032))))) - (((long long int) (_Bool)0))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 939108801774899548ULL)) ? ((+(((/* implicit */int) (unsigned char)88)))) : (((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (_Bool)1))))))));
}
