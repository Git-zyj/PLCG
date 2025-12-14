/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181692
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
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_12))))) : (var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((1643800323373829744LL), (max((((/* implicit */long long int) (unsigned char)166)), (-1643800323373829749LL)))));
                    var_18 |= (+(1643800323373829761LL));
                }
            } 
        } 
    } 
}
