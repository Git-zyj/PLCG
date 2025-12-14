/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186067
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_9);
        arr_5 [i_0] [i_0] = (+(((/* implicit */int) var_6)));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_10 -= ((/* implicit */_Bool) ((((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * ((~((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    }
    var_11 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_0)))) ? ((+(((/* implicit */int) var_3)))) : (((((_Bool) var_3)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)5098)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))))));
}
