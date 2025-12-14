/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16136
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
    var_18 = ((/* implicit */unsigned char) (((~(min((var_6), (((/* implicit */unsigned long long int) var_10)))))) & (min((var_0), (((/* implicit */unsigned long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_2))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (((~(((((/* implicit */int) (unsigned short)33794)) ^ (((/* implicit */int) var_14)))))) <= (((/* implicit */int) arr_3 [i_0])));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31726)) % (((/* implicit */int) (unsigned short)31726))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 2921543899U))));
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(short)8])) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33794)) & (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) var_17);
    var_22 |= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)31726))))), (((var_3) ^ (((/* implicit */long long int) var_10)))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */int) (signed char)21)) < (((/* implicit */int) (_Bool)1))))))))));
}
