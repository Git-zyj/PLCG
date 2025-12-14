/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177896
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
    var_11 = ((/* implicit */signed char) ((max((((long long int) var_5)), (var_5))) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_1 [(_Bool)1] [i_1]))), ((+(((/* implicit */int) (unsigned short)23736)))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) (~(((arr_0 [i_0 + 1]) >> (((arr_0 [i_0 + 1]) - (4862361314076018115LL)))))));
            }
        } 
    } 
}
