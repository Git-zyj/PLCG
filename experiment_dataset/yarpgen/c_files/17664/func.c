/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17664
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)7)) < (((/* implicit */int) ((signed char) var_14))))))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0 + 3])))) != (741489908))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)9673)) : (((/* implicit */int) (short)12300)))))) : (((/* implicit */int) ((((var_5) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (125535290U)))))))))));
}
