/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144292
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_9))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) var_11));
                    arr_10 [i_2] = ((/* implicit */int) ((short) 8388608));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((unsigned short) (unsigned short)0)))))));
    var_20 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned long long int) (unsigned short)0))));
}
