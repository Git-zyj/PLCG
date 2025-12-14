/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138547
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = max((((288230376143323136ULL) | (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_5 [i_0] = ((short) max((min((18446744073709551615ULL), (288230376143323144ULL))), (((/* implicit */unsigned long long int) (unsigned char)21))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) << ((((-(((unsigned long long int) 12ULL)))) - (18446744073709551594ULL)))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)122)) + (((/* implicit */int) (unsigned char)128))));
        arr_10 [i_1] [i_1] = ((unsigned char) (-((-(((/* implicit */int) (short)12288))))));
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) max((17382382424909582175ULL), (((/* implicit */unsigned long long int) (short)0)))))))))));
}
