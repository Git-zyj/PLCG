/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111901
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) (signed char)-44);
            arr_7 [i_0] [12] &= ((/* implicit */unsigned long long int) (short)21082);
            var_18 &= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (var_3))))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (signed char)34))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) arr_1 [i_0])))))) == (max((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (var_15))))), ((!(((/* implicit */_Bool) var_8))))));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((signed char)13), (((/* implicit */signed char) (_Bool)1))))), (arr_5 [i_0])))) ? (((/* implicit */long long int) arr_10 [i_0] [i_2] [i_2])) : (((((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0])), (var_9))))))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59734)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5809)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [(short)9]))))) : (18446744073709551615ULL)));
            arr_14 [14ULL] |= ((/* implicit */_Bool) arr_2 [i_0] [3ULL]);
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))) >= (arr_10 [i_0] [i_0] [i_3])));
            arr_18 [i_3] &= min((((/* implicit */unsigned long long int) (signed char)-35)), (18446744073709551615ULL));
        }
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((((((14915482075306353871ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) || (((/* implicit */_Bool) (signed char)35)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35516))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0])))))))));
            arr_21 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_0] [i_4]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)12))))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)34))))))), (((unsigned short) (unsigned char)255))));
        }
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(arr_23 [i_5])));
        var_22 = ((/* implicit */short) (+((~(arr_23 [i_5])))));
        var_23 |= ((/* implicit */signed char) ((arr_22 [i_5] [(unsigned short)3]) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) arr_22 [i_5] [(signed char)12]))));
    }
    var_24 &= ((/* implicit */short) var_7);
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)17))))))) ? ((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(var_17))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) (unsigned short)65535))))))))));
}
