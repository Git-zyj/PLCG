/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179800
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (~(var_9)))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((((/* implicit */_Bool) (unsigned short)65520)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) min((var_15), ((+(arr_1 [i_0]))))))));
    }
    var_17 = ((/* implicit */short) ((long long int) var_1));
}
