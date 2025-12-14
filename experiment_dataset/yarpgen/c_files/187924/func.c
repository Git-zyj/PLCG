/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187924
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)53211))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -436886010)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (5345322184721576270LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4194048)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))))), (max((((((/* implicit */int) (unsigned short)20626)) != (((/* implicit */int) (short)-7893)))), (((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) 679730469869572994LL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 436886010);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */int) max((var_17), ((unsigned short)61025)))) / (((((/* implicit */int) var_19)) + (((/* implicit */int) (short)30866)))))), ((-(((/* implicit */int) max(((unsigned short)59690), ((unsigned short)45802)))))))))));
}
