/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189120
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */int) var_9);
        var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [0ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((_Bool) var_1));
        var_13 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_1] [i_1]))));
        var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) arr_0 [i_1] [i_1]))));
        var_15 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (+(arr_5 [i_2])));
        var_17 = ((/* implicit */unsigned short) ((unsigned int) arr_4 [i_2]));
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_2]))))) : (((/* implicit */int) arr_4 [i_2]))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2])))))));
    }
    var_20 = ((/* implicit */int) (_Bool)1);
}
