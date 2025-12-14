/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125174
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)28744)))) ? (((/* implicit */int) max((arr_0 [2U]), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */signed char) (short)-28745);
        var_19 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_0 [i_0])))), (((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_0 [i_0])) - (183)))))))));
        arr_5 [(signed char)6] &= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_0] [i_0])))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_14)))) | (((((/* implicit */int) arr_2 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) max((max((((/* implicit */long long int) arr_8 [i_1 + 2])), (min((var_16), (arr_7 [i_1 - 1]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) var_8)), ((short)29752)))), (((((/* implicit */_Bool) arr_8 [13ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */int) (signed char)126)) >> (((arr_7 [i_1]) + (7001584500185046233LL)))))), (((/* implicit */unsigned int) ((signed char) max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 2])))))));
    }
    var_21 = ((/* implicit */signed char) max((((unsigned long long int) (short)28744)), (((/* implicit */unsigned long long int) ((long long int) var_15)))));
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))) <= (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)28746)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))), (((long long int) var_16))))));
}
