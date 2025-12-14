/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181798
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((1889680360), (((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (_Bool)1))))) && (min((var_5), (var_11)))))))))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((signed char) (signed char)114))))));
    var_22 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1)))))) >> (((/* implicit */int) (_Bool)1))));
                    var_24 = ((/* implicit */signed char) (-(-1546013396)));
                    var_25 ^= max(((signed char)37), (((/* implicit */signed char) (_Bool)1)));
                }
            } 
        } 
    } 
}
