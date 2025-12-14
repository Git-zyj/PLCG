/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159790
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_14 = (_Bool)1;
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((long long int) 14719662368832121841ULL)) : (((/* implicit */long long int) 1389346972))))) : ((-(arr_6 [i_1 - 1] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned short) 16812777789191272186ULL);
    var_17 = ((/* implicit */unsigned short) var_3);
}
