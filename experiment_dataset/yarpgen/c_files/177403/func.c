/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177403
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
    var_19 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_6))))));
    var_20 = ((/* implicit */long long int) var_11);
    var_21 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0 - 4] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0 - 3]);
        arr_5 [i_0] [i_0 - 3] = ((/* implicit */long long int) ((((2688831030U) + (arr_1 [i_0 + 2]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0]))))));
        var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0 + 2]))) ? (var_4) : (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_24 = ((/* implicit */int) (-(var_18)));
        var_25 = ((((-15LL) > (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) arr_8 [(unsigned short)17])))) : ((~(((/* implicit */int) (_Bool)1)))));
        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-26))));
        var_27 = ((/* implicit */long long int) ((signed char) (-(var_7))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_2])) || (((/* implicit */_Bool) var_9)))) || ((((!(((/* implicit */_Bool) 0U)))) || (((/* implicit */_Bool) arr_0 [i_2] [i_2]))))));
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_6 [i_2] [i_2])) + (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */long long int) var_7)) : (arr_2 [i_2]))))) ^ (((/* implicit */long long int) 0U))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-81))))), (min((var_18), (((/* implicit */long long int) arr_10 [i_2]))))))) ? ((~((~(((/* implicit */int) (signed char)72)))))) : (((/* implicit */int) ((unsigned short) min((var_14), (((/* implicit */int) var_3))))))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((arr_0 [i_2] [i_2]) - (arr_11 [i_2]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) var_2)))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) + (4424708953197470720ULL)))));
    }
}
