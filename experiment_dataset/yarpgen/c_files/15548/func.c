/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15548
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
    var_14 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned short)18091)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (15824592338456188785ULL)))))));
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 ^= (unsigned char)6;
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-18190)))))) ? (((/* implicit */int) max(((unsigned short)42624), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) max((arr_1 [i_1] [i_0]), (var_4)))))))));
            }
        } 
    } 
}
