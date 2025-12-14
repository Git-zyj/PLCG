/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138701
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
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((+(3002986921U))))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - (1291980375U))) <= (min((1291980374U), (((/* implicit */unsigned int) (unsigned char)116)))))))));
    var_14 &= ((/* implicit */long long int) max((422482485U), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(short)23] [(short)23] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)3)))))))));
                    arr_8 [i_0] [i_0 - 4] [i_0] [i_0 - 3] |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-12063)) + (1931483784)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (unsigned char)93);
}
