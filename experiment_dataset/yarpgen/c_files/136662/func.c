/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136662
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (+((-(var_13)))));
                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)26648))));
                arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                arr_9 [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_4 [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_1);
}
