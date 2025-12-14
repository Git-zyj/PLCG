/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136723
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
    var_19 += ((/* implicit */unsigned int) var_1);
    var_20 = ((/* implicit */int) (+((+((-(18446744073709551615ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (18446744073709551614ULL))))));
                arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) min((21ULL), (((/* implicit */unsigned long long int) ((arr_2 [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) 18446744073709551594ULL)) ? (var_7) : (var_7)))));
}
