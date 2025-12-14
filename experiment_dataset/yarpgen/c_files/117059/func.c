/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117059
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (2147483647) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (15503840518815755948ULL)))) ? (((/* implicit */int) ((signed char) (short)5810))) : (((/* implicit */int) ((15503840518815755948ULL) >= (((/* implicit */unsigned long long int) var_6)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0] [i_0])) ? (min((2942903554893795667ULL), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31552))))), (((/* implicit */unsigned long long int) (signed char)-94))));
                var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)52)), (var_0))))) : ((~(-914153913900074630LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27436))) >= (15503840518815755948ULL))))));
                var_21 ^= ((/* implicit */long long int) max((max((((unsigned short) (unsigned short)4597)), (((/* implicit */unsigned short) min((arr_4 [i_0] [i_0] [i_1 + 1]), (arr_4 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
            }
        } 
    } 
}
