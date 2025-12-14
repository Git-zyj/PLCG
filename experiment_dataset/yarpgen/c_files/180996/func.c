/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180996
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (_Bool)1))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) max((var_15), ((_Bool)1))))), (((((/* implicit */int) ((_Bool) var_4))) << (((var_16) + (7660272385061732396LL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_2))))) > (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (_Bool)1))))))) : ((~(((/* implicit */int) (_Bool)1))))));
    var_20 = max((var_8), (((/* implicit */short) ((((/* implicit */_Bool) ((8982564029160365295ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)407)))))) && (((/* implicit */_Bool) 18446744073709551614ULL))))));
}
