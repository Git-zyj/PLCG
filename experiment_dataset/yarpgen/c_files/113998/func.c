/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113998
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
    var_18 = ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (unsigned char)10);
                var_20 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) - (-6873893783900009161LL)))) || (((/* implicit */_Bool) var_15)))) ? (var_3) : (((/* implicit */unsigned long long int) min(((+(-8939841197290765672LL))), (((/* implicit */long long int) (((_Bool)0) ? (16380U) : (2658942880U)))))))));
}
