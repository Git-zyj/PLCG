/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132635
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = 1938234396U;
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_1] [i_1])), (var_3)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) min((var_1), (((/* implicit */short) arr_1 [i_1 - 1] [i_1 + 1])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_2);
    var_13 = (unsigned char)217;
    var_14 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47980)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_4))))) : (min((2992822809U), (4294967295U))))));
}
