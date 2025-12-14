/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178600
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
    var_12 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_14 ^= (((_Bool)0) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59536)) ? (((/* implicit */int) (unsigned short)6000)) : (((/* implicit */int) arr_4 [i_1] [6] [i_1]))))));
            arr_5 [i_0] [(short)8] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])));
        }
    }
}
