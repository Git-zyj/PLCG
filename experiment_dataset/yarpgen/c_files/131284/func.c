/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131284
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3232716396U)) ? (9345117931551056071ULL) : (((/* implicit */unsigned long long int) 3481785547U))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_3))))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((int) var_1)) << (((((((int) var_8)) + (319160386))) - (28)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3517449794U)))) ? (((/* implicit */int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) : (((/* implicit */int) (signed char)-107))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_8))));
    var_16 |= ((/* implicit */unsigned char) (unsigned short)42355);
    var_17 = (-((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (1533332980U)))))));
}
