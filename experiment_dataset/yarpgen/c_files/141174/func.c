/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141174
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
    var_16 = ((/* implicit */short) (+(min((max((var_7), (((/* implicit */unsigned int) (unsigned char)213)))), (((/* implicit */unsigned int) var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) 9506576979009903438ULL);
                var_18 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_2 [i_1] [i_1 + 1])) | (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : ((-(((((/* implicit */int) (_Bool)0)) ^ (-1871914721))))));
            }
        } 
    } 
}
