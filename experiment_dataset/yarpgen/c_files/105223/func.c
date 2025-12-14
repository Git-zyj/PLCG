/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105223
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551606ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_1])))));
                arr_6 [1] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_10);
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
}
