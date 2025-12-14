/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109532
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = max((8699583936531767563ULL), (17373807295188632193ULL));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_9)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-23))));
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0])))))) : (var_9)));
            }
        } 
    } 
    var_15 ^= ((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-7776)))))))));
    var_16 *= ((/* implicit */unsigned char) max(((+(7623736400389196975ULL))), ((((+(960667338895443440ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_17 = ((/* implicit */signed char) var_0);
}
