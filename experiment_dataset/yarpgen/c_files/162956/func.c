/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162956
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (short)-23854)) <= (((/* implicit */int) var_1))));
    var_19 = ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5)))))) % (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23854))) : (9223372036854775807LL))))) >> (((var_15) - (8710232029456321525ULL))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_4))) ? (min((var_16), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (var_12))))))) : (-9223372036854775807LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) ((((16670981781745671363ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) <= (((/* implicit */unsigned long long int) ((unsigned int) var_10))))))));
                var_21 = ((/* implicit */unsigned int) arr_0 [i_0] [(unsigned char)7]);
                var_22 = ((/* implicit */int) ((min((var_14), (((/* implicit */long long int) (_Bool)1)))) ^ (((/* implicit */long long int) (+(4172502979U))))));
            }
        } 
    } 
}
