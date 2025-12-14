/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131224
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
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) : (9223372036854775806LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) arr_7 [i_0] [(unsigned short)2] [(_Bool)0]))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))));
                    var_15 = ((/* implicit */unsigned long long int) (unsigned char)164);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) | (min((((((var_11) + (9223372036854775807LL))) << (((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) - (120))))), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2]))))));
                    var_17 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) >> (((arr_3 [i_1] [i_2]) - (9167190219885639022LL)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_4)))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2))))))) ? ((+(min((((/* implicit */unsigned int) var_12)), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36)))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))) * (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */int) var_8)))))))));
}
