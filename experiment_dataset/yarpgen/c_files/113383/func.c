/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113383
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
    var_16 = ((/* implicit */unsigned long long int) (signed char)-16);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_14))))) ? (max((((/* implicit */long long int) (signed char)16)), (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (unsigned short)32483)))))))));
                arr_6 [i_0] [i_1 - 3] [i_1] |= ((/* implicit */long long int) (~(min((((((/* implicit */int) arr_3 [6])) | (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
}
