/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15817
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))) ? ((+(var_0))) : (var_7)))) | (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_2])));
                    var_12 -= ((/* implicit */signed char) arr_0 [i_0] [i_2]);
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */unsigned char) var_0);
    var_14 = ((/* implicit */int) var_5);
}
