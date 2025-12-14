/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160387
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
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((signed char) (short)-1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)45))))) : (((((/* implicit */int) (unsigned short)14048)) & (((/* implicit */int) arr_4 [i_1])))))), ((-(((/* implicit */int) arr_2 [i_0 - 2]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((var_9) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)43053)) : (((/* implicit */int) (short)32759)))) : (max(((~(((/* implicit */int) (unsigned short)57344)))), ((-(((/* implicit */int) (unsigned char)10))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (min((((((/* implicit */int) var_7)) | (((/* implicit */int) var_1)))), (((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))))) : (((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_0))))) + (((/* implicit */int) (unsigned char)10))))));
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
}
