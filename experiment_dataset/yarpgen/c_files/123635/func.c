/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123635
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
    var_18 = ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            arr_5 [i_1 - 1] [i_1] [i_0] = ((unsigned char) var_16);
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_8))));
            var_20 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [6])))));
            var_21 += ((/* implicit */unsigned int) ((int) arr_0 [i_1]));
            arr_6 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_1]))) ? ((+(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_1))))));
        }
    }
}
