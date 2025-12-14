/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160362
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
    var_11 = ((unsigned char) max((((/* implicit */long long int) ((int) 67553994410557440LL))), (min((67553994410557459LL), (((/* implicit */long long int) var_6))))));
    var_12 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1]))) * (4294967295U))));
                arr_4 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (~(((unsigned int) -67553994410557431LL))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (3010325186823697065ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
            }
        } 
    } 
}
