/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108653
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
    var_17 = ((/* implicit */long long int) (((_Bool)0) ? ((+(((/* implicit */int) (unsigned char)8)))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-8632811740740610968LL)))) ? ((-(((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) ? (1102760828) : (((/* implicit */int) (_Bool)1))));
                var_18 *= ((/* implicit */unsigned char) ((17U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))));
            }
        } 
    } 
}
