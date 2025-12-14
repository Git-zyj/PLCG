/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113708
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1])))))) ^ (max((-1292342181516439305LL), (((/* implicit */long long int) arr_4 [i_0 - 1] [2LL]))))));
                var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(-1292342181516439305LL))), (((/* implicit */long long int) arr_0 [(unsigned char)0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_1);
    var_23 = 4294967295U;
    var_24 *= ((/* implicit */long long int) ((((min((var_1), (((/* implicit */unsigned int) var_7)))) & (max((var_1), (((/* implicit */unsigned int) var_4)))))) << (((((((/* implicit */_Bool) min(((signed char)-121), ((signed char)(-127 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (1932568993182680534ULL))) - (194ULL)))));
}
