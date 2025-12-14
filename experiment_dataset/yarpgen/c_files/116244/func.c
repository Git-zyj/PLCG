/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116244
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 310272524U)) ? (4294967295U) : (4294967284U))))) : (((unsigned long long int) arr_6 [i_0]))));
                    arr_7 [(_Bool)1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [4LL] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) 4372443783364547910LL))))) || (((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) var_7)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_0 - 1] [6U]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_15);
}
