/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14929
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
    var_16 = ((/* implicit */_Bool) (+(-576460752303423488LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) var_6);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 4294967274U)), (16909464914639937421ULL)));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [0U]);
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) var_6);
    var_19 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((unsigned short)25154), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (+(576460752303423487LL)))) : (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
}
