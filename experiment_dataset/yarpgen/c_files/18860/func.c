/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18860
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((39373142901695632ULL) <= (16232541495758587754ULL)))) >> ((((+(min((((/* implicit */int) arr_1 [i_0])), (var_8))))) + (1397584495)))));
                arr_5 [i_0] [i_0] [2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) min((39373142901695628ULL), (((/* implicit */unsigned long long int) 3316125644U))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
}
