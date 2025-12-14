/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170517
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
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 8728696425906956943ULL)) ? (66060288U) : (((/* implicit */unsigned int) arr_5 [i_2] [i_1] [i_0] [i_0])))) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_0]))))) ? (((/* implicit */int) ((unsigned short) 34359738336LL))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_2] [i_1])) : (arr_5 [i_0] [i_0] [i_1] [i_2])))));
                    var_15 = ((/* implicit */long long int) var_1);
                    var_16 = max(((signed char)14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned short)44035)))))))));
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_3 [i_0] [i_1] [i_2])))))) / (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (((8728696425906956919ULL) << (((arr_0 [i_0]) - (9013289473522667702LL)))))))));
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [i_2] [i_1] [i_2] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (8728696425906956943ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)14487)), (var_12))))))) ? ((((~(arr_5 [i_2] [i_0] [i_0] [i_0]))) ^ (((/* implicit */int) arr_2 [i_2] [i_1])))) : (((/* implicit */int) ((short) arr_2 [i_0] [i_2])))));
                }
            } 
        } 
    } 
}
