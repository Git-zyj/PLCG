/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17027
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
    var_12 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (max((((/* implicit */int) var_2)), (-793647644))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) > (min((((/* implicit */unsigned int) -1)), (var_5))))))));
    var_14 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-12965)))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54103))) : (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11432)) ? (((/* implicit */int) var_7)) : (1936920770)))) : (max((3357734842U), (((/* implicit */unsigned int) 65536)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [(short)4])) << (((var_0) - (5089230860535783755ULL))))))));
                    var_16 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) 1936920770)) : (9223372036854775787LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
}
