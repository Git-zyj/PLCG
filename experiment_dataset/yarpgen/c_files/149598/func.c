/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149598
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
    var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((int) 9223372036854775807LL)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 |= ((/* implicit */unsigned long long int) arr_0 [2] [2]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((signed char) 9223372036854775801LL));
        arr_3 [i_0] = ((/* implicit */_Bool) (signed char)101);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = max((var_4), (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775805LL)))))))));
        arr_9 [10LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [1ULL])) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (signed char)82))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) arr_7 [i_1]))));
        var_14 ^= max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), ((~(-9223372036854775807LL))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_12 [i_2] = (((-(var_11))) / (min((((arr_11 [i_2] [i_2]) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) var_9)))), (arr_10 [i_2]))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(var_6))))));
    }
    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775791LL)) || (((/* implicit */_Bool) 9879182595506886534ULL))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (arr_15 [i_3 + 1])))) - (15191256724658164412ULL)));
            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -9223372036854775798LL)), (15555526743894066300ULL)));
            var_17 ^= ((/* implicit */unsigned int) (+(((unsigned long long int) 364991385U))));
        }
        var_18 = (!(((/* implicit */_Bool) ((unsigned int) min((2147483647), (((/* implicit */int) arr_13 [6ULL] [i_3])))))));
        arr_21 [6] = ((/* implicit */unsigned int) var_9);
        arr_22 [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) 103636952U);
    }
}
