/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123791
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
    var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (13819703316976612816ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))))) << (((/* implicit */int) ((((/* implicit */int) (short)-29010)) == (((/* implicit */int) (_Bool)0)))))));
                arr_4 [i_0] [i_0] [i_1] = ((unsigned int) (unsigned short)11942);
                var_23 = (~(((/* implicit */int) (_Bool)1)));
                var_24 = ((/* implicit */unsigned short) max((arr_3 [i_0] [i_1] [i_1]), (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (short)-30276))))));
            }
        } 
    } 
}
