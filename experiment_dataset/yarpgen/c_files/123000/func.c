/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123000
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
    var_10 = var_2;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (+(arr_4 [i_1] [14U])));
                var_12 = min((1278983119U), (((/* implicit */unsigned int) (unsigned short)33849)));
                arr_6 [i_0] [i_1 - 4] = ((/* implicit */unsigned short) (~((-(var_0)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) 2671535725788746307LL);
}
