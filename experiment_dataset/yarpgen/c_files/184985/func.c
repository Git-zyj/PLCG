/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184985
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
    var_11 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((long long int) var_1);
        arr_5 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_12 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [(signed char)6] [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
    }
    var_13 = ((/* implicit */short) var_6);
    var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) ((unsigned short) 785636878316391909ULL))) : (((/* implicit */int) var_3))))));
    var_15 ^= ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) 4035016282U)) ? (((/* implicit */int) (_Bool)1)) : (2076412843))), ((~(((/* implicit */int) var_1))))))));
}
