/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147948
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
    var_20 = ((/* implicit */unsigned short) (short)9339);
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9339)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (unsigned short)33486))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) : (var_12)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(-583979941)));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                arr_8 [(signed char)0] [(signed char)0] [i_0] = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
}
