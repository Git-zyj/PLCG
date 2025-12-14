/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183394
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) -4555869754764867638LL)) ? (-2475370417628925210LL) : (-7530761306545652529LL))), (((/* implicit */long long int) (_Bool)1)))) - (((long long int) arr_5 [i_0 - 3] [i_1 + 3]))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((-1655634283780529373LL) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (-6959439745507108239LL)));
                    var_22 = ((/* implicit */long long int) var_17);
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((6959439745507108238LL), (-6959439745507108239LL)));
                    var_23 = ((/* implicit */_Bool) ((((_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((6959439745507108238LL), (((/* implicit */long long int) (short)6077)))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((long long int) 708372712081995788LL))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_17);
}
