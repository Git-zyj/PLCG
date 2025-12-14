/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100054
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(arr_4 [i_0 + 2] [i_0 + 2] [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))))) : ((~(arr_0 [i_0 + 1])))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3764664271453931062LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(6134871477507525608LL)))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) (_Bool)1))))))) : (8796093022207ULL)));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1706400337)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (705234976) : (1925756493)))) ? ((-(var_3))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
}
