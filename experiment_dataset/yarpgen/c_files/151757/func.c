/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151757
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(short)16] [(signed char)14] |= ((/* implicit */signed char) min((min((((/* implicit */int) (signed char)127)), (((((/* implicit */int) var_7)) - (((/* implicit */int) (short)32050)))))), (((/* implicit */int) (signed char)(-127 - 1)))));
                var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned short) 2842857391403223606ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)17412))))) : (min((-1013089284), (((/* implicit */int) arr_3 [(unsigned char)8]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) (short)-17412)) ? (11ULL) : (var_4)))))));
    var_22 = ((/* implicit */_Bool) var_3);
    var_23 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
}
