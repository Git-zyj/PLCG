/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157560
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
    var_15 = ((/* implicit */short) var_2);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (unsigned short)48276))))), (((12858724667896808030ULL) / (var_11)))))) ? (((/* implicit */int) (unsigned short)56226)) : ((+((-(((/* implicit */int) (unsigned char)10))))))));
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2930743542U) : (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [(short)22])) << (((((/* implicit */int) arr_0 [(signed char)8])) - (55))))))))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((2191276002274961416ULL) > (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) <= (1628820944225638760ULL))))))));
        arr_3 [(signed char)13] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_2)));
    }
    var_20 = ((/* implicit */short) var_6);
}
