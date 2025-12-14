/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151978
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]))) : (var_14)))));
                    var_21 -= ((/* implicit */unsigned short) ((unsigned char) var_14));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((long long int) arr_1 [i_0])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) (~(min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (var_6)))), (((((/* implicit */_Bool) var_14)) ? (-107110950659282793LL) : (((/* implicit */long long int) var_16))))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((500322709) + (1463142400)))))) - (var_19)));
}
