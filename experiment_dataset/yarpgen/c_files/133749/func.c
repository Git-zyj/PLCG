/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133749
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
    var_11 = ((/* implicit */signed char) var_2);
    var_12 &= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) & (((/* implicit */int) (unsigned char)87))));
                var_13 = ((/* implicit */unsigned long long int) max((min((max((2180974135794615210LL), (((/* implicit */long long int) (short)18391)))), (min((-5620099581798523572LL), (((/* implicit */long long int) (unsigned char)87)))))), (((/* implicit */long long int) ((_Bool) arr_1 [i_0 - 1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_4))));
}
