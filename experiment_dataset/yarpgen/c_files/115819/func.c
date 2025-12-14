/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115819
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
    var_18 = max((((((/* implicit */_Bool) ((unsigned short) var_16))) ? (min((28U), (4294967249U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((arr_4 [i_0] [i_1]) ^ (((/* implicit */int) var_17))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (((var_16) & (var_3)))))) ? (((((28U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)9]))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (arr_0 [3U])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                var_20 = ((/* implicit */signed char) var_17);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_1) + (234333300)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))));
}
