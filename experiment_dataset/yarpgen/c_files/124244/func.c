/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124244
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = (+((-(2491907565470646526LL))));
                var_16 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)16920)) ? (8377310125018134617ULL) : (18446744073709551600ULL))), (((/* implicit */unsigned long long int) var_6))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (_Bool)1);
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_15) / (((var_5) ? (var_15) : (((/* implicit */int) (short)-5632))))))), (var_11)));
}
