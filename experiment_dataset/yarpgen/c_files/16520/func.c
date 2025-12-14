/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16520
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) - ((+(var_2)))))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_2))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_9);
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(arr_2 [i_0] [i_0])))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21040))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1]))) >= (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)6] [(unsigned short)0])))))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [(_Bool)1] [i_1])) - ((+(((/* implicit */int) var_9))))));
        arr_7 [i_1 + 2] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)85))));
        arr_8 [i_1 - 1] = var_11;
    }
}
