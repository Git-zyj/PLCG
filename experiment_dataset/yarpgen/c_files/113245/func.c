/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113245
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)3822)) : (((/* implicit */int) var_18))))))));
                    var_21 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)65535));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3834)) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) 319587094U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1))), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned short) (signed char)75)), (var_8)))))));
}
