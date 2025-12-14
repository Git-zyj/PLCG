/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15948
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
    var_12 = max((((/* implicit */long long int) var_5)), (var_1));
    var_13 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [(short)2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (signed char)34)) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_6))) - (2732670887U))))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */int) (((-(arr_3 [i_0] [i_0]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)118), ((unsigned char)9)))))))));
        arr_6 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_7 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_1 [i_0])) : (0LL)))))));
    }
    var_14 = ((/* implicit */long long int) var_7);
}
