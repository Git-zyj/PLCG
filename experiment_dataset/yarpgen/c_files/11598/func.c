/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11598
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
    var_20 = ((/* implicit */int) var_19);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 3])), (127611469U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (unsigned char)167)), (arr_1 [i_0] [i_0 - 1])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1])));
        var_22 = ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_1 [(short)12] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))));
    }
}
