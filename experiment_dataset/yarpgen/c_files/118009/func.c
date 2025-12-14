/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118009
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_2] [i_2])) & (((/* implicit */int) (short)9948)))) & ((~(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                    arr_9 [i_0] [i_0] [(short)11] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_2))));
}
