/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10159
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((1464902553392638793ULL) - (((/* implicit */unsigned long long int) 578552283U)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) * (((2880123470U) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)21217)))))))));
        var_17 = 578552270U;
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) ((((max((1414843801U), (((/* implicit */unsigned int) (short)14641)))) & (((((/* implicit */_Bool) var_2)) ? (3258866503U) : (3716415012U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
            arr_7 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_4 [i_1] [i_1])))))) == (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [(unsigned char)10]))))))), ((~(((/* implicit */int) var_11))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_13))));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)49211)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14641))) : (max((6016553998410966209LL), (((/* implicit */long long int) 3716415014U)))))), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9)))) + ((+(((/* implicit */int) arr_3 [i_0])))))))));
            arr_12 [i_2] [(unsigned short)10] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [2U] [i_2] [i_2])) && (((/* implicit */_Bool) arr_9 [i_0]))))), (max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0])), (arr_9 [i_0])))))));
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)64400)), (578552282U)));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3716415031U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) | (arr_9 [i_0])));
            arr_18 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (short)-1);
            arr_19 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3] [i_0] [i_0])) % (((/* implicit */int) (unsigned short)64386))));
            arr_20 [i_3] = ((/* implicit */unsigned char) (((-(578552284U))) * (arr_16 [i_0])));
        }
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4]))) >= (var_10))))) | ((-(arr_5 [i_4] [i_4])))));
        arr_24 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(short)11])) || (((/* implicit */_Bool) arr_21 [i_4] [i_4]))));
        arr_25 [i_4] = (((-(3258866508U))) >> (((((((/* implicit */int) (short)9963)) << (((2880123481U) - (2880123481U))))) - (9935))));
        arr_26 [i_4] = ((/* implicit */unsigned short) ((2871484214U) << (((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned short)9])) : (10695931564574843490ULL))) - (3690544542ULL)))));
        arr_27 [i_4] [i_4] = ((/* implicit */short) ((arr_9 [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32753))))))));
    }
}
