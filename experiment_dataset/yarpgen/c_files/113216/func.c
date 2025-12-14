/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113216
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
    var_20 = ((/* implicit */int) (-((~((~(2626403825U)))))));
    var_21 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) min((var_7), (var_13))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(unsigned short)6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) | (var_1)))) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_15)))))));
                arr_5 [i_1 - 3] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_22 = (((-(((/* implicit */int) arr_1 [i_0])))) < (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_16)) << (((var_6) - (3291731843U))))))));
            }
        } 
    } 
    var_23 -= var_16;
}
