/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157714
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) var_12);
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)252))))))), (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])) ? (arr_7 [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9201)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_12);
    var_22 |= ((/* implicit */unsigned int) ((signed char) (((-(3728707279U))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7400))))));
    var_23 *= max((((((/* implicit */_Bool) max(((unsigned short)7168), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_6))))), (((/* implicit */unsigned long long int) var_1)));
    var_24 = ((/* implicit */_Bool) var_7);
}
