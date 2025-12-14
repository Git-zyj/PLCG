/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171740
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] = min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))), (((((/* implicit */_Bool) arr_2 [i_0] [14U])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (var_1))));
                arr_8 [i_0] [i_1] [i_0] = 18446744073709551615ULL;
            }
        } 
    } 
    var_16 += var_5;
    var_17 = ((/* implicit */unsigned short) var_7);
}
