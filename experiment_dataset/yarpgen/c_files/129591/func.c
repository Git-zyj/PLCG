/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129591
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
    var_15 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2989086426U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) > (-601471156)))) >> ((((+(((/* implicit */int) (signed char)87)))) - (71)))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) var_1))), (((((/* implicit */int) ((((/* implicit */int) (unsigned char)200)) < (((/* implicit */int) var_7))))) % (((/* implicit */int) (unsigned char)56))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) var_10)) << (((((/* implicit */int) var_10)) - (26779))))) == (((/* implicit */int) (unsigned char)200))))) >> (((unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_10)))))));
}
