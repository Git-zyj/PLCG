/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12869
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned short)6] [12LL] [i_2] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1244001660U)) < (var_12))))));
                    var_15 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [(unsigned char)20])))));
                }
            } 
        } 
    } 
    var_16 = var_0;
}
