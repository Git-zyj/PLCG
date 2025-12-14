/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140102
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 3478773712U)), (((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 4] [i_1])) : (796170143051971381ULL)))))));
                arr_4 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [i_1]))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0 + 1])))))) ? (((((/* implicit */_Bool) min(((short)32232), ((short)32232)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((arr_0 [i_0]) ? (arr_3 [i_0] [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) var_5)))))) : (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0 + 1] [i_1 - 1] [i_1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1])))));
                var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))) : (arr_2 [i_0]))))))), ((-(((((/* implicit */_Bool) (short)-32230)) ? (((/* implicit */int) (short)32232)) : (((/* implicit */int) arr_0 [i_0 + 1]))))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (arr_3 [i_0 + 1] [i_0 + 1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (unsigned short)59970))))) ? (arr_2 [i_0 + 1]) : (((((/* implicit */_Bool) var_4)) ? (var_18) : (arr_2 [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_10);
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) var_14))), (var_16)));
}
