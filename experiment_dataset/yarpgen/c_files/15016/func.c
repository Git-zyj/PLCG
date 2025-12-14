/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15016
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]), (arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2]))));
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201))))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (262143))))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)55))))) % (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))))));
                var_16 = ((/* implicit */unsigned int) ((unsigned char) (-(((((/* implicit */unsigned long long int) 1793993066091754934LL)) % (18446744073709551615ULL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_5);
    var_18 = ((/* implicit */short) (+(min((-3228694522125737328LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -242194396)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-78)))))))));
    var_19 ^= ((/* implicit */unsigned short) var_10);
}
