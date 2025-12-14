/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144867
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) (unsigned char)2);
                arr_5 [(unsigned char)2] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 3])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned short)60454))))));
            }
        } 
    } 
    var_15 = ((int) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_8))))) > ((-(var_5)))));
    var_16 &= ((/* implicit */int) var_4);
}
