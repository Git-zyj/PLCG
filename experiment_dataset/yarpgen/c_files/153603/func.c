/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153603
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)32766)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) * (max((6423115718950847983ULL), (((/* implicit */unsigned long long int) 4145113462U))))))));
                var_15 = ((/* implicit */_Bool) ((unsigned char) (((_Bool)0) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (unsigned short)42820);
    var_17 = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))) ? (max((-3529229414123503205LL), (((/* implicit */long long int) (signed char)87)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))));
}
