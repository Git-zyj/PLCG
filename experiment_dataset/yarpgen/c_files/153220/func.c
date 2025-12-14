/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153220
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = arr_0 [i_0];
                var_14 = ((/* implicit */unsigned int) (((+(arr_1 [i_0]))) / (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_3 [(unsigned short)8] [i_0] [i_0])))))))));
                var_15 = ((/* implicit */short) var_12);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((unsigned char) max((var_11), (((/* implicit */long long int) var_3))))))));
}
