/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139709
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
    var_14 = ((/* implicit */unsigned char) max((4294967290U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) (unsigned char)81))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_5)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_2) : ((+(var_2)))));
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)243))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) (short)27893)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_18 = ((/* implicit */unsigned char) arr_1 [i_0]);
            }
        } 
    } 
}
