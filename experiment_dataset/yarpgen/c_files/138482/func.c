/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138482
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
    for (short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) (unsigned short)19335))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : (var_8)))));
                arr_4 [i_1] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1624197079) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 2])))) : (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0 - 3]))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [(_Bool)1] [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)121)) ? (-4499847632013963473LL) : (9223372036854775807LL)));
            }
        } 
    } 
    var_17 = var_11;
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_7))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (560084089) : (((/* implicit */int) (unsigned short)30247))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_13)))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_4))));
}
