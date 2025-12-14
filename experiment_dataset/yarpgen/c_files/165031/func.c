/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165031
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
    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))))))) ? (max((((((/* implicit */int) var_12)) + (((/* implicit */int) (signed char)-60)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) (short)16384))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)16368))))) : (((var_3) - (((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_8))))))));
                arr_5 [i_0 - 4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                arr_6 [i_0 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)32))))), (min((var_11), (var_14)))))) || (((/* implicit */_Bool) arr_2 [i_1]))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned int) 658614402);
}
