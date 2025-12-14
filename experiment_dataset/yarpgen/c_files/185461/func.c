/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185461
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
    var_17 |= ((/* implicit */unsigned char) ((int) 1711198521));
    var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1711198521)) ? (((/* implicit */long long int) 133258398)) : (var_8)))) ? (((/* implicit */int) var_13)) : (((var_15) ? (-1711198539) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28376)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) | (var_11)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((int) (_Bool)1))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))) + (4095U)))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1711198522)))))) + (max((var_8), (((/* implicit */long long int) (_Bool)1))))))));
            }
        } 
    } 
}
