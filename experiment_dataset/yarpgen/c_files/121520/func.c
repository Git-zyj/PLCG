/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121520
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
    var_15 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)88))))), (((var_3) << (((/* implicit */int) ((unsigned char) var_2)))))));
    var_16 ^= ((/* implicit */short) min((var_3), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_0 [i_0]) - (124802894084322823ULL)))))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_7 [i_0] [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((int) arr_3 [i_0])))));
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_6 [i_2]), (arr_6 [i_1 - 1])))) != (((((/* implicit */int) arr_6 [i_0])) / (var_4)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_5) - (var_5))) * (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_2)) ? (((var_9) ? (var_6) : (((/* implicit */long long int) 2989500843U)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))) : (((/* implicit */long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2)))))))));
    var_19 = ((/* implicit */long long int) (((+(var_7))) / (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))));
}
