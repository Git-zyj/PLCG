/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180675
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_4))));
    var_17 ^= ((/* implicit */signed char) 1400156057781458595LL);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2 - 1])) && (((/* implicit */_Bool) 4294967294U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_8))))) : (arr_7 [i_2 - 1]))))));
                    var_19 = ((/* implicit */unsigned char) ((_Bool) min((-1400156057781458595LL), (-1400156057781458595LL))));
                    arr_8 [i_0] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (1400156057781458595LL))), (((/* implicit */long long int) ((arr_0 [i_1 - 4]) - (var_2))))));
                }
            } 
        } 
    } 
}
