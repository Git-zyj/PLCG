/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161644
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
    var_20 = ((/* implicit */long long int) ((1860851374297933130ULL) - (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_13)), (3818016592U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)94)) * (((/* implicit */int) (signed char)94))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_22 |= ((((/* implicit */_Bool) (signed char)67)) ? (1412728045U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [8U] [i_1 - 3])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) min(((signed char)94), (max((arr_1 [i_1] [i_1 - 3]), ((signed char)-95))))))));
        var_24 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-1))));
    }
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((~(((/* implicit */int) arr_5 [i_2] [i_2])))) - ((~(((/* implicit */int) (unsigned char)148)))))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~((~(arr_6 [i_2] [i_2 + 1]))))))));
        arr_7 [i_2] |= ((/* implicit */short) 2994848542U);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_27 = ((/* implicit */int) (-(((var_16) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1098714306)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19)))))))));
        arr_12 [i_3] [14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0)))))));
        var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_8 [i_3] [i_3]))));
        arr_13 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (short)1))));
    }
    var_30 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (~(var_13)))), (var_16))), (((/* implicit */unsigned long long int) var_7))));
}
