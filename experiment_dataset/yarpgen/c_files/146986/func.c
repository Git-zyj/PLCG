/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146986
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
    var_13 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_14 -= ((unsigned int) max((var_9), (var_7)));
                    arr_8 [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_10)))) * (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_5))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0] [(unsigned short)19] [i_0]), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((-(((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_12)) - (38979)))))))));
                }
            } 
        } 
    } 
}
