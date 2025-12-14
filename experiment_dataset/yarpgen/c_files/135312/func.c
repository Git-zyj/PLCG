/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135312
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
    var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned int) -3))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26308))) & (1757177081745057410LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (+((+(max((var_15), (((/* implicit */long long int) arr_2 [i_0]))))))));
                var_19 += ((/* implicit */signed char) (+((-(((/* implicit */int) arr_5 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_5);
}
