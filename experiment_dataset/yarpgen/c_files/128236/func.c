/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128236
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 += ((/* implicit */unsigned short) arr_2 [i_0]);
                var_11 = var_0;
                var_12 += ((unsigned short) (+(arr_2 [i_1 - 1])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (var_6)));
    var_14 = var_9;
    var_15 = ((/* implicit */unsigned int) min((((unsigned short) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((unsigned short) ((unsigned int) 3359978233U)))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (var_1)));
}
