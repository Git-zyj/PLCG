/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110718
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)12] [(short)12]))) : (arr_1 [(_Bool)1]))) >> (((((2084317809352637095LL) | (((/* implicit */long long int) var_3)))) - (2084317813085830098LL)))))) ? (var_10) : (((/* implicit */unsigned int) ((int) min((var_2), (((/* implicit */int) var_11))))))));
    }
}
