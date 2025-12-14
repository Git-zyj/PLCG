/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12731
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / ((-(((/* implicit */int) ((unsigned short) (unsigned short)41117))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_11;
                arr_7 [(unsigned short)6] &= ((/* implicit */unsigned char) ((_Bool) (unsigned short)33076));
                var_14 = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
}
