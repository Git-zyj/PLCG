/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108204
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((unsigned char) arr_1 [i_0] [i_1])));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) (+(arr_2 [i_0] [i_1]))));
                arr_7 [(short)7] = max((arr_1 [i_0] [i_0]), (min((arr_4 [i_1]), (((/* implicit */unsigned short) ((_Bool) var_6))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) var_4);
}
