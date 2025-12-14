/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121696
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((var_3) == (((/* implicit */long long int) (~((-(((/* implicit */int) var_4))))))))))));
    var_15 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_10))))));
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) ((short) var_5))))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) 2487959430165912851LL);
    var_18 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22449))) : (2487959430165912851LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
}
