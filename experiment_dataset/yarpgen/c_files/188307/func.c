/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188307
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
    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) >= (max((1855842879U), (((/* implicit */unsigned int) (unsigned char)182))))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) ((arr_5 [14ULL] [i_1]) & (((arr_5 [i_0] [i_1]) << ((((~(var_7))) - (2106027935U)))))));
                var_19 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) + (min((((((/* implicit */_Bool) var_0)) ? (3020657936U) : (3020657936U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (-2147483647))))))));
            }
        } 
    } 
}
