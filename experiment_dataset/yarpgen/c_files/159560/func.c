/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159560
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(704608542U)))) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) min((-2598626140518547336LL), (((/* implicit */long long int) ((unsigned char) 28U)))))) : ((-(var_9))))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) / (var_7)));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_17))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) var_11);
                    arr_7 [i_0 - 2] [i_0 - 2] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((int) var_6)));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) var_11);
                }
            } 
        } 
    } 
}
