/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169295
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
    var_11 = ((/* implicit */unsigned char) var_4);
    var_12 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) (unsigned short)51745);
                var_13 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9507557282485327460ULL))));
}
