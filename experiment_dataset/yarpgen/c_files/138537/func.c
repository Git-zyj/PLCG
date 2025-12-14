/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138537
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
    var_10 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) max((var_1), (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) (signed char)8)))));
            }
        } 
    } 
}
