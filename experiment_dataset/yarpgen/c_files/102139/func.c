/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102139
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
    var_15 += ((/* implicit */long long int) var_12);
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)44)))), (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (unsigned short)20548)) & (((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) (unsigned short)20550)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_1])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) min(((unsigned short)20557), (((/* implicit */unsigned short) (unsigned char)238))))) ? (((/* implicit */int) arr_4 [(signed char)4])) : (((/* implicit */int) arr_4 [6]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                var_18 = min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)44978)) < ((+(((/* implicit */int) var_6))))))), ((unsigned short)42945));
            }
        } 
    } 
}
