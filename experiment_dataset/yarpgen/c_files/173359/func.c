/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173359
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 302125511);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)13213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)37129))))), (var_4)))));
}
