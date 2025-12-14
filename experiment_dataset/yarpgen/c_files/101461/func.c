/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101461
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0 + 1]))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)11386)))))))))));
        arr_4 [i_0 + 2] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) var_15))))) ? (((var_11) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) max(((unsigned short)54145), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))) : (((/* implicit */int) var_14))));
        var_18 ^= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [4LL])))))));
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)54145)) ? (((/* implicit */unsigned long long int) 9223372036854775795LL)) : (2ULL)));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_11)))), (((var_2) - (((/* implicit */int) arr_3 [i_1] [10]))))))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (2703475339305023625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((unsigned short)54122), (((/* implicit */unsigned short) arr_1 [1ULL] [i_1 - 2])))), (((/* implicit */unsigned short) arr_1 [i_1 + 1] [i_1 + 2]))))))));
        var_21 = ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */unsigned int) (-(((var_11) ? (((/* implicit */int) arr_1 [i_1] [12LL])) : (((/* implicit */int) var_8))))))) : (((unsigned int) max((1361100807), (((/* implicit */int) var_5))))));
    }
    for (short i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) (-((+(((/* implicit */int) arr_3 [i_2] [i_2]))))))), (((((/* implicit */_Bool) (signed char)75)) ? (-9081828835893487970LL) : (((/* implicit */long long int) 127))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((min((var_13), (((/* implicit */unsigned char) var_8)))), (arr_1 [i_2 + 1] [5ULL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(1714992924U)))) & (((((/* implicit */_Bool) (unsigned short)11417)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)1] [i_2])))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [11]))))), (max((arr_2 [i_2]), (((/* implicit */unsigned long long int) var_7)))))))))));
    }
}
