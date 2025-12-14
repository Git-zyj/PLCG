/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156343
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
    var_18 |= ((/* implicit */unsigned int) var_10);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)-19493)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (short)-19493)) : (((/* implicit */int) var_12)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned int) min((arr_1 [i_0 + 3]), (((/* implicit */int) (short)-19493))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((arr_1 [i_0 + 3]) + (((/* implicit */int) (short)-16586))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : ((-(((/* implicit */int) arr_0 [i_0 + 3])))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [i_0 + 3])) ^ (1184131630U)))) ? (((/* implicit */int) ((arr_1 [i_0 - 1]) <= (-862437489)))) : (((arr_1 [i_0 - 2]) + (arr_1 [i_0 + 1]))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) min((arr_2 [i_1] [i_1]), ((short)19492)))) : (((/* implicit */int) (short)19518))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (-960814178) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_0 [i_1]))))) : (min((((/* implicit */unsigned long long int) (short)23986)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23986))) + (576460752303423424ULL)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
    }
}
