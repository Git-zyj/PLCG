/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173451
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
    var_18 = (!(((/* implicit */_Bool) var_10)));
    var_19 |= ((/* implicit */long long int) var_8);
    var_20 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) ((_Bool) (unsigned short)2047));
                var_22 = (!(((/* implicit */_Bool) 0ULL)));
                arr_5 [(unsigned char)8] &= ((/* implicit */unsigned short) arr_0 [i_1]);
                var_23 = (+(4150055995580943379LL));
            }
        } 
    } 
}
