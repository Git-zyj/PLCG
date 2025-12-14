/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133419
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((4294967295U) % (((/* implicit */unsigned int) -1462710922)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_4))))))))));
    var_19 -= ((/* implicit */unsigned short) (unsigned char)92);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])), (2079638133U)))));
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [13U] [i_2 - 1] [i_2 - 1]), (arr_5 [i_2] [i_2 - 1] [i_2 - 1]))))) : (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2 - 1])))))));
                }
            } 
        } 
    } 
}
