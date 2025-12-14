/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147174
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0 - 2] &= var_8;
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (var_16)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((unsigned short) var_13));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
}
