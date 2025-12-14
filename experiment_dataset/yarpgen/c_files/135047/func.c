/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135047
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -456739458868817051LL))) ? (min((var_9), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) arr_2 [i_0]));
        arr_5 [i_0] = ((/* implicit */long long int) ((int) arr_3 [i_0] [i_0]));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_8 [0LL] [i_1] &= ((/* implicit */unsigned char) (-(var_10)));
        var_13 &= var_8;
        arr_9 [i_1] = ((/* implicit */long long int) var_5);
        var_14 += ((/* implicit */_Bool) var_3);
    }
}
