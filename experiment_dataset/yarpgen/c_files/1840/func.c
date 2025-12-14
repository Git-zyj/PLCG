/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1840
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_8))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((max((arr_0 [i_1] [i_1]), (arr_1 [i_1]))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))))));
                var_23 = ((/* implicit */int) (!((_Bool)1)));
                var_24 *= ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1] [i_1]))));
                var_25 = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
            }
        } 
    } 
}
