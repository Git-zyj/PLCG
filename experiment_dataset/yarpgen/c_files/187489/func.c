/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187489
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) && ((!(((/* implicit */_Bool) 6)))))))));
        var_20 = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) ((arr_6 [i_1]) ? ((+(arr_5 [i_1]))) : (arr_5 [i_1])));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) && (var_17)));
        var_21 ^= ((/* implicit */unsigned int) ((((1360892542) - (arr_7 [i_1]))) + (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [(unsigned short)6]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25386)) && (((/* implicit */_Bool) var_0)))))) == (((((/* implicit */_Bool) (unsigned char)0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
    var_23 = ((/* implicit */int) var_18);
}
