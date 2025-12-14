/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16560
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
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1206))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), ((unsigned short)46183)))))), ((!(((/* implicit */_Bool) ((short) var_13)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64355))) ^ (16U)))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (var_9)))) && (((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1166)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0]))) & (12979259346851795958ULL))))));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) << ((((~(((/* implicit */int) var_8)))) + (239))))))));
}
