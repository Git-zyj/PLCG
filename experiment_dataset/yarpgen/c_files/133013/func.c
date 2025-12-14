/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133013
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
    var_13 = ((/* implicit */_Bool) ((signed char) max(((unsigned char)187), (((/* implicit */unsigned char) (signed char)110)))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) max((5832685936386815009LL), (((/* implicit */long long int) arr_4 [(unsigned short)0] [i_0] [i_1]))));
                arr_7 [4] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-96)), (((unsigned long long int) (signed char)-96))));
            }
        } 
    } 
}
