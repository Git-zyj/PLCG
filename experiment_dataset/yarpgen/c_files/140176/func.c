/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140176
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_14 = arr_1 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+(arr_2 [i_0] [i_0])));
        var_15 = ((/* implicit */unsigned char) ((arr_1 [i_0]) + (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)-94))))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_5))) ? (3847771056661978657LL) : (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) var_11)) : (min((var_9), (((((/* implicit */_Bool) 4293785696639331995LL)) ? (var_9) : (((/* implicit */long long int) var_10))))))));
    var_17 -= (-(((/* implicit */int) ((signed char) var_1))));
}
