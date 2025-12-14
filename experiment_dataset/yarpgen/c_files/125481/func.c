/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125481
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (~(15108943945975559356ULL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            arr_8 [(unsigned char)8] [i_1] [i_1] = ((/* implicit */unsigned long long int) 1924148724);
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3)))) ? (((140737487831040ULL) >> (0ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (140737487831028ULL))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) 805306368U);
            var_17 = ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_0])) ? (arr_2 [(unsigned char)4]) : (arr_2 [i_0]));
        }
    }
    var_18 = var_13;
}
