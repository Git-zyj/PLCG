/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104636
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [11U] [i_0])) ? (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))));
                    arr_6 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_2] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
    var_16 = var_5;
}
