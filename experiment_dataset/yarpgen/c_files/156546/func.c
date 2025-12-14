/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156546
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
    var_11 = ((/* implicit */_Bool) ((unsigned short) var_7));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1 - 1]))))) : ((((_Bool)0) ? (3247009122U) : (1047958174U)))));
                var_12 = ((/* implicit */_Bool) 849912906);
                var_13 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8)))));
                arr_6 [i_0] [i_1] [i_0] |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 + 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1 + 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned int) -1141679382)))))));
}
