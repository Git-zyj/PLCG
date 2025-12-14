/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10209
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
    var_19 = ((/* implicit */short) ((unsigned int) (short)21990));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (short)-21991);
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (-2204680006781606451LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2945325999916177795LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))) != (((/* implicit */long long int) arr_2 [i_0 - 3]))));
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((2239618405U) == (2055348877U)))), (((signed char) (~(16251167227935123365ULL))))));
            }
        } 
    } 
}
