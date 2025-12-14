/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166413
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (short)-14054)) >= (((/* implicit */int) (short)0))))) : (((/* implicit */int) ((short) (short)-18)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) ^ (((/* implicit */int) (unsigned char)254))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)8] [5LL]))))) : (((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) (short)-1)))))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -12LL)) ? (((/* implicit */int) min(((short)-2), ((short)-6248)))) : (((/* implicit */int) (short)-14031))))) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) arr_5 [i_0])))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned char) ((((long long int) (~(4664593770495041760LL)))) & (min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
}
