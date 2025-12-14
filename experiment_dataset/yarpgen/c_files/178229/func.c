/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178229
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
    var_19 = var_5;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */short) ((signed char) arr_3 [i_0]));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_5 [i_0] [12LL] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))))) / (((/* implicit */int) (signed char)29)))))));
                var_22 -= ((/* implicit */short) (-(((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (unsigned char)110))))) - (((((/* implicit */_Bool) (unsigned char)108)) ? (-7410695943181756839LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12506)))))))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)40855)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21361))) : (834757850719828077LL)));
            }
        } 
    } 
}
