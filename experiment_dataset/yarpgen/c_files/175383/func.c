/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175383
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [15ULL] = ((/* implicit */signed char) min((max(((unsigned short)50667), (((/* implicit */unsigned short) ((short) arr_1 [i_0]))))), (((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_12)))))));
        var_13 = ((/* implicit */long long int) ((((unsigned int) arr_0 [i_0])) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((short)-9070), (((/* implicit */short) var_8))))) : ((+(arr_1 [i_0]))))))));
        var_14 = ((/* implicit */int) ((((_Bool) (unsigned short)14868)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((min((arr_0 [(short)1]), (arr_0 [18ULL]))) | (((var_3) * (arr_0 [i_0])))))));
    }
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (var_6)))) >= (((/* implicit */int) ((_Bool) ((12955525013742968322ULL) << (((((/* implicit */int) arr_5 [i_1])) - (149))))))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_9)))) ? (((/* implicit */int) max(((unsigned short)14868), (((/* implicit */unsigned short) (short)9070))))) : (((/* implicit */int) var_7)))));
        arr_7 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_5 [i_1])), (6112313537976842356ULL)));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [7U])) : (var_9)));
        arr_11 [i_2] = ((/* implicit */long long int) min((((_Bool) (unsigned short)14842)), (((arr_1 [i_2]) != (((/* implicit */int) var_4))))));
    }
    var_16 = ((signed char) var_10);
}
