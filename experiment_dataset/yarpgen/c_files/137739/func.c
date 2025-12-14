/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137739
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_8)), (14678976786093855510ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0] [i_0 + 3] [i_0 + 3])))));
                var_15 *= ((/* implicit */_Bool) ((unsigned short) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_3 [i_1] [12U] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_1);
}
