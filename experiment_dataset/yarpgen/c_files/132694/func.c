/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132694
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [24LL] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)76)), ((unsigned short)24477)));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((359380827U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 94426333)) | (273833982U)))) ? (((((_Bool) 3935586469U)) ? (((unsigned int) (signed char)76)) : (((/* implicit */unsigned int) ((int) (unsigned char)223))))) : (((/* implicit */unsigned int) var_11))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))) & (1495307534U)));
}
