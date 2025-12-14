/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132806
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
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 511U)), (((((((/* implicit */_Bool) -6337293593826162016LL)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551600ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)107)), (max((12528685268883641210ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = max((((/* implicit */int) ((((((/* implicit */_Bool) 538U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (arr_7 [i_2] [i_2]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3921)))))), (((((/* implicit */_Bool) min((5918058804825910407ULL), (((/* implicit */unsigned long long int) 6337293593826162015LL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1051458038)) || (((/* implicit */_Bool) (short)-28956))))) : (max((((/* implicit */int) (signed char)-127)), (arr_2 [i_0] [i_1] [i_0]))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])) : (max((69805794224242688ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_2 [i_0] [i_1] [i_0]) : (2147483647))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 4457519)) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_12 [i_0] [i_3] [i_3]))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) & (18446744073709551600ULL)));
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3973280160U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3045195812U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98)))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned short) ((arr_4 [i_3]) ^ (((/* implicit */long long int) arr_1 [i_0] [i_3]))));
        }
        arr_21 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (short)-16027)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)97)) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_23 [i_6] [i_6 - 1])), (((((/* implicit */_Bool) 9146841886336941636ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6]))) : (4411886601780668726ULL)))))) ? (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -1775837519)) ? (arr_23 [i_6] [i_6]) : (-351500426))) + (2147483647))) >> (((3594683972U) - (3594683968U)))))) : (((((3594683972U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))))) ^ (((((/* implicit */_Bool) 6337293593826162015LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16027))) : (3594683945U)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) -4667824099694806158LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775787LL)) || (((/* implicit */_Bool) -1775837496)))))) : (12528685268883641218ULL)));
    }
    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned char)163))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7] [i_7]))) / (((2898307666U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22)))))));
    }
    var_25 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((((/* implicit */long long int) var_4)) == (var_8))) ? (((/* implicit */int) var_10)) : (-1775837529)))), (754301482U)));
}
