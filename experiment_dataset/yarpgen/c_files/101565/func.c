/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101565
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6935890138116784839LL)) >= (18446744073709551615ULL)));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57360)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (10ULL)))) || ((!(((/* implicit */_Bool) var_8))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */_Bool) arr_3 [i_1 + 3] [14U] [i_0]);
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (signed char)-113))));
            }
        } 
    } 
}
