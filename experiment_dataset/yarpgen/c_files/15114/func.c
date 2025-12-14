/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15114
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) max((13152867897298942848ULL), (((/* implicit */unsigned long long int) (signed char)3))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) (+(var_17))))));
                arr_8 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) 1772378322676098563LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_10);
}
