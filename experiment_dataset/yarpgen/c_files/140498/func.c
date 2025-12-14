/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140498
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
    var_17 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */_Bool) 11396224346948694085ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))), (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_18 ^= ((unsigned int) ((((/* implicit */_Bool) 3758096384U)) ? (((/* implicit */unsigned long long int) 3201025177U)) : (var_1)));
        var_19 += ((/* implicit */unsigned int) var_4);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(536870911U)))) ? (((/* implicit */unsigned long long int) (~((-(2010188103U)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (1023ULL)))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (142629733U))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2829711427U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))) & (14120797870785646198ULL)));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [3U] [i_1]))) || (((/* implicit */_Bool) 1619339924U))))) != (((((((/* implicit */int) var_7)) < (((/* implicit */int) arr_4 [i_2] [i_2])))) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))))))))));
            var_23 = ((/* implicit */signed char) max((var_23), (min((((/* implicit */signed char) ((_Bool) arr_8 [i_1] [i_1] [i_1]))), (arr_8 [i_1] [i_1] [i_2])))));
        }
    }
}
