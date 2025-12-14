/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109184
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
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (-(0U)))) : (((((/* implicit */_Bool) var_4)) ? (var_12) : (var_2)))))));
    var_14 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (unsigned short)29149)))) : (((/* implicit */int) (signed char)-40))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (_Bool)1)))))) | (min((var_2), (((/* implicit */long long int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2420765606149331431LL)) || (((/* implicit */_Bool) var_11))))), (2379464106U)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_0 + 1])) && (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_9))))))));
                var_16 = ((/* implicit */signed char) var_7);
                var_17 = ((/* implicit */unsigned short) (~(4294967295U)));
                arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))) >= (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) max((var_10), ((unsigned short)8128)))) : (((/* implicit */int) (unsigned short)8128))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_11);
}
