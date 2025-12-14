/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179265
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
    var_16 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)0))))), (((((((((/* implicit */_Bool) 14767783607266703548ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_14))))))));
    var_17 = ((/* implicit */unsigned char) var_1);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */short) var_6)), (var_3))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_4 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((unsigned int) (~(-5309599826985181182LL)))))));
                arr_6 [5LL] [i_0] = ((((((/* implicit */int) ((unsigned char) 3678960466442848060ULL))) + (((/* implicit */int) ((unsigned char) (unsigned char)25))))) + ((~(((/* implicit */int) arr_5 [i_1] [i_0])))));
            }
        } 
    } 
}
