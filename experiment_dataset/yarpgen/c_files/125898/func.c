/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125898
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
    var_10 = ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4))))), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (((((((/* implicit */_Bool) var_3)) ? (17272043985459651024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) % (max((13864054431516770644ULL), (((/* implicit */unsigned long long int) (signed char)45)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(var_2))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_0 [i_0]))))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_5) : (var_0))))));
        var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) 4294967281U))))) ? (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) arr_0 [i_0])))) != (((/* implicit */long long int) (((((-2147483647 - 1)) <= (((/* implicit */int) (_Bool)1)))) ? ((+(var_0))) : (((((/* implicit */_Bool) arr_0 [8])) ? (((/* implicit */int) (signed char)60)) : (var_6))))))));
        var_13 = ((/* implicit */long long int) ((max((7166425165579386655ULL), (1174700088249900591ULL))) >= (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-2147483647 - 1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)89)) : (var_6)))) * (1174700088249900591ULL)));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_9))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
    }
}
