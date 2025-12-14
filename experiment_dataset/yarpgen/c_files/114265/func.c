/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114265
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
    var_17 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)44358))))));
    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)95)) ? (var_7) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((int) (+(((/* implicit */int) (unsigned short)46497)))))));
                var_19 = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
}
