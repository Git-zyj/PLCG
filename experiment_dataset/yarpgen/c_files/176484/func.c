/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176484
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((((/* implicit */_Bool) (+((+(var_7)))))) ? (((arr_2 [i_0]) ? (((((/* implicit */_Bool) arr_3 [15ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))) : ((~(18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((var_7) <= (18446744073709551615ULL))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1416216819)) ? ((-(((/* implicit */int) (signed char)-15)))) : (((/* implicit */int) ((6ULL) < (6ULL))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551591ULL)))) | (((0ULL) << (((((/* implicit */int) arr_3 [i_0] [i_1])) + (59))))))))))));
                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (((((/* implicit */_Bool) max((6ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? ((+(6ULL))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_0 [i_1] [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) != (8ULL)))) >> (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) (signed char)32)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))))))))));
    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)3)))) < (((((/* implicit */unsigned long long int) var_5)) * (18446744073709551615ULL))))))) > (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (var_3))), (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (131070ULL))))));
}
