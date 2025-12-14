/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102917
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
    var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (signed char)7)) >= (((/* implicit */int) (unsigned char)4)))))))) ? (((/* implicit */long long int) (+(28U)))) : (max((-16LL), (((/* implicit */long long int) var_17)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((signed char)7), (((/* implicit */signed char) (_Bool)0)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (3978183754U) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 1]))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)24))))) ? ((+(((((arr_0 [i_0 - 1] [i_0]) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))) : (max((((/* implicit */int) (_Bool)1)), (arr_0 [i_0 + 1] [i_0])))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)22980))));
        var_21 |= ((/* implicit */unsigned char) ((min(((-(((/* implicit */int) (signed char)3)))), (((/* implicit */int) (signed char)-44)))) - ((+(arr_0 [i_0] [i_0])))));
        var_22 *= ((/* implicit */unsigned short) arr_1 [(short)4]);
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) -1894742516);
        arr_5 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1]))))) ? ((-(((/* implicit */int) (unsigned short)3634)))) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
    }
}
