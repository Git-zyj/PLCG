/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129171
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
    var_20 |= ((/* implicit */int) max((((max((var_13), (var_13))) + (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)95))))))), (((/* implicit */unsigned long long int) var_11))));
    var_21 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 *= max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))), (min((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (var_19))), (((/* implicit */unsigned long long int) (+(-547258776)))))));
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_19)))) <= (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 2])))));
                }
            } 
        } 
    } 
    var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */long long int) ((573949385U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_15)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) || (((/* implicit */_Bool) (~(var_15)))));
}
