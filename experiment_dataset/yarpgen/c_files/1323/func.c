/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1323
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_8)) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 3785097378848874127LL)) : (var_13))))))))));
                            var_20 = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) var_10)), (-3785097378848874127LL))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -3785097378848874128LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -468048573)) ? (((/* implicit */int) var_3)) : ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-11887))))))) : (((((/* implicit */_Bool) ((unsigned short) 3849223066U))) ? (var_17) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)819)) : (((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) (_Bool)1))), ((+((((_Bool)0) ? (2344753629068748366LL) : (((/* implicit */long long int) var_9))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_2)) : (-7053317179105235725LL))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
