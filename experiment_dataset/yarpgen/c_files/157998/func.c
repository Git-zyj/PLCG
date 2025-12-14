/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157998
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
    var_17 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_1)), ((~(((unsigned long long int) 18446744073709551615ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = (short)26374;
                var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) (short)26393)));
                arr_6 [i_0] = max((((/* implicit */unsigned int) min((arr_3 [i_0] [i_0 - 3]), (((/* implicit */int) arr_5 [i_0] [4] [i_0]))))), (4128768U));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_7));
                var_20 |= ((/* implicit */unsigned long long int) ((long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 8187073044377416872LL)))));
            }
        } 
    } 
    var_21 = var_7;
}
