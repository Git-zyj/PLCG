/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125893
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
    var_11 = ((/* implicit */short) var_3);
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((_Bool) var_5)))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) var_5);
                    var_14 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_0 + 1]);
                    var_15 = ((/* implicit */signed char) arr_4 [i_0] [5LL] [i_0]);
                    var_16 = ((/* implicit */unsigned short) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_1);
}
