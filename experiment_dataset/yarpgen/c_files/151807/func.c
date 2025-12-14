/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151807
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
    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_19) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */int) ((unsigned long long int) (unsigned short)6824));
                    arr_11 [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)241)) >> (((arr_3 [i_2]) - (797824787)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7511))))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))))));
                }
            } 
        } 
    } 
}
