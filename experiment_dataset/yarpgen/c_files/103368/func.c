/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103368
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [(unsigned short)2]);
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) arr_5 [7LL] [i_1]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_8)));
    var_14 = ((/* implicit */unsigned short) var_2);
    var_15 += ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
}
