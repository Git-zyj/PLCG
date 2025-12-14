/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121884
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned char) var_4);
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775799LL)), (18446744073709551587ULL)))) ? (44ULL) : (((/* implicit */unsigned long long int) 1684629556))))) ? (((/* implicit */long long int) 14U)) : ((-(arr_3 [i_0]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(((int) var_5))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8))) & (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_5)), (var_1)))))))))));
}
