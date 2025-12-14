/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116136
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        arr_4 [(unsigned short)8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_0 [(short)12] [(short)12])) ? (arr_0 [i_0] [i_0 - 2]) : (((/* implicit */long long int) 870682189))))));
        arr_5 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (arr_2 [i_0])))));
        arr_6 [1LL] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) ? (arr_0 [i_0] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_3 [i_0])) + (4205))))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((var_12) ? (4017079128U) : (var_4))))));
    var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)219))));
    var_19 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */short) ((var_6) == (((/* implicit */unsigned long long int) (~(3319073872U)))))))));
}
