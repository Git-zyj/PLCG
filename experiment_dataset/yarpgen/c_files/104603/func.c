/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104603
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
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_4);
                var_16 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_7)) ? (4042247488U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16179)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-10000)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (4053370284U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((signed char)-1), ((signed char)-1))))))), (min((((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)30701))))), (((/* implicit */unsigned int) (signed char)-8))))));
    var_18 = ((/* implicit */short) (signed char)8);
}
