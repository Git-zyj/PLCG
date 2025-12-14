/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169575
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
    var_14 |= ((/* implicit */unsigned short) ((((min((((/* implicit */int) var_11)), (var_3))) / (((/* implicit */int) min((var_12), (var_2)))))) < (var_10)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = 865510545;
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_3 [i_0] [i_0])))) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [(short)0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_3 [i_0] [i_0])))) % (((unsigned long long int) arr_3 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((long long int) var_3))));
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-6315497478867780734LL)));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) 31244051))));
        arr_12 [i_2] [i_2] = max((max((576320014815068160LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 268435328)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) arr_6 [i_2] [i_2])));
    }
}
