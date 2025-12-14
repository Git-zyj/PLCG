/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16843
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_16)))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-104)), (var_12)))) - (134)))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)10)) || (((/* implicit */_Bool) (signed char)10))))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-11))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) max(((+(1298023417))), (((((/* implicit */int) (signed char)59)) << (((((/* implicit */int) var_4)) - (83)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 ^= ((int) ((((/* implicit */int) min((var_3), (var_0)))) % (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) (signed char)-12)))))));
                    var_22 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) ((signed char) var_13))));
                    var_23 = ((/* implicit */signed char) max((var_23), (var_10)));
                }
            } 
        } 
        arr_13 [10U] &= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) var_1))))));
    }
    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_10)))) + (var_14))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_10))))))));
}
