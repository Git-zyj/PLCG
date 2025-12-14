/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106003
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
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0])))), (((/* implicit */int) ((_Bool) min(((short)27645), ((short)-18876))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) 275788118U)) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_1])))))))) <= (min((((/* implicit */unsigned int) ((short) 819111407))), (4019179192U)))));
            }
        } 
    } 
    var_15 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */short) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) : (min((4019179177U), (275788105U)))))));
    var_16 = ((/* implicit */long long int) min(((unsigned char)234), ((unsigned char)255)));
}
