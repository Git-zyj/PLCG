/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146126
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
    var_14 ^= ((/* implicit */long long int) ((unsigned short) min(((-(((/* implicit */int) (unsigned short)64052)))), (max((-348778232), (((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-122)) % (-1987206624)))))));
    var_16 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((1108099343) != (((/* implicit */int) arr_3 [i_0 - 2])))))));
        arr_5 [i_0] [i_0 - 2] = ((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1])))) ? (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1]))));
        arr_6 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))));
        var_17 ^= (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((arr_3 [i_0 + 1]), (arr_3 [20ULL])))))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((var_12) <= (var_6)))), ((-(var_12))))) / (var_12)));
}
