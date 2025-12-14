/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147277
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))) : ((-(arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_12)) : (min(((-(((/* implicit */int) var_12)))), (((/* implicit */int) max((((/* implicit */short) var_6)), (var_1))))))));
    var_18 |= ((/* implicit */unsigned short) var_2);
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (var_3)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) : (min((var_8), (((/* implicit */unsigned long long int) var_11))))))));
}
