/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153938
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
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_9))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) | (var_10)));
        var_19 = ((/* implicit */signed char) (~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((arr_2 [6U] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_2 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) 
        {
            arr_6 [3ULL] [12ULL] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (unsigned short)21445)) << (((((/* implicit */int) arr_3 [i_1])) - (230))))));
            arr_7 [i_2] [i_1] [12U] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-6768))));
        }
    }
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (var_10))))));
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((var_1) - (4372374973318691185LL)))))) : (var_5))))));
}
