/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12183
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
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)209))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) 18258634720731249514ULL))), (arr_1 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) : ((-(18446744073709551615ULL))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (signed char)-14)) <= (((/* implicit */int) (unsigned short)11170))))) <= (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_1] [i_0])), (var_12)))) <= (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((arr_1 [i_1] [i_0]) > (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))) ? (((unsigned long long int) ((unsigned long long int) (unsigned char)28))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) <= (arr_2 [i_1] [i_0])))))));
                var_18 = ((/* implicit */unsigned int) (signed char)-113);
                var_19 = ((/* implicit */_Bool) ((((1ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)91))))))) ? (((((/* implicit */_Bool) (unsigned short)55553)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (0ULL))) : ((+(min((0ULL), (((/* implicit */unsigned long long int) 4194303U))))))));
            }
        } 
    } 
}
