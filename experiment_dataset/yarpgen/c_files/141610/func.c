/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141610
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
    var_11 = ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)15327))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = arr_0 [i_0];
                var_13 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_7)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32752))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max(((short)-28351), ((short)30222))), (arr_2 [i_1])))) ? (((((((/* implicit */int) arr_1 [i_0] [(unsigned short)13])) < (((/* implicit */int) (short)28348)))) ? (((arr_3 [(unsigned short)9]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)54505)))) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) max(((signed char)-14), (((/* implicit */signed char) (_Bool)1)))))));
                var_15 = ((/* implicit */_Bool) min((max((((/* implicit */int) max(((signed char)-68), (((/* implicit */signed char) arr_5 [i_0] [i_1]))))), (((((/* implicit */_Bool) (short)28349)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (unsigned short)9939))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-30)), ((unsigned short)256))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-6)) && (((/* implicit */_Bool) (unsigned short)0)))) || (((/* implicit */_Bool) var_9))))), ((signed char)-2)));
}
