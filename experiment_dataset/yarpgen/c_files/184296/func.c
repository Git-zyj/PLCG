/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184296
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_4 [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) 582443736))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */unsigned int) var_6)), (var_1))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_0 [i_1 - 1])), (var_10))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) 8352227670165049700ULL))));
}
