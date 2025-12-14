/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181830
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
    var_17 = ((/* implicit */signed char) ((long long int) max((max((var_9), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) min(((unsigned short)60982), (((/* implicit */unsigned short) var_11))))))));
    var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (min((((/* implicit */unsigned int) var_15)), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) -2147483645))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (1590897906U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4576))) > (arr_0 [i_0])))))) : ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_20 *= ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_0 [12U]), (((/* implicit */long long int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_0 [(signed char)4])) ? (arr_0 [2LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))) + (((/* implicit */long long int) (+(((/* implicit */int) (signed char)63)))))));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_1 [i_1 - 1])), (((unsigned char) arr_1 [i_1 - 1]))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            arr_6 [i_1] [i_2] [i_1] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((arr_2 [i_1 - 1] [i_1 + 1]) << (((min((((/* implicit */int) arr_4 [i_2] [i_2])), (min((191989336), (arr_3 [i_2]))))) - (28077)))))) : (((/* implicit */_Bool) ((arr_2 [i_1 - 1] [i_1 + 1]) << (((((min((((/* implicit */int) arr_4 [i_2] [i_2])), (min((191989336), (arr_3 [i_2]))))) - (28077))) + (7214))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)60971)), (min((4294967295U), (((/* implicit */unsigned int) arr_8 [i_1] [i_1]))))))) + (((((-1028111681) != (((/* implicit */int) (unsigned short)60961)))) ? (((/* implicit */long long int) arr_3 [i_1 + 1])) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-16544)))))))));
                var_23 = ((/* implicit */int) arr_0 [i_2]);
            }
            /* LoopSeq 1 */
            for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                var_24 = arr_2 [i_1 + 1] [i_2 + 1];
                var_25 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1] [(unsigned char)8])))), ((~(((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 1]))))));
            }
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)60982)))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2]))))));
        }
        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) (-(min((1028111680), (-1028111681)))));
            arr_15 [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_1] [i_5] [i_5]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_5] [i_1 - 1])), (-1028111693)))) : (min((((/* implicit */unsigned int) arr_3 [i_1])), (arr_2 [i_5] [i_1])))))) ? (min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_5])) : (arr_3 [i_1]))), (((/* implicit */int) arr_14 [i_5 - 1] [i_1 - 1])))) : (min((arr_9 [i_5] [i_5 + 1] [i_5]), (arr_9 [i_5] [i_5] [i_5])))));
            var_27 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1])))))) : (arr_2 [(signed char)8] [i_5]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_1])) | (((/* implicit */int) (unsigned char)209))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_1 + 1] [i_1 - 1]))) : (((arr_0 [(signed char)4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4560)))))));
            var_29 *= ((/* implicit */_Bool) (signed char)-56);
            var_30 += ((/* implicit */_Bool) arr_13 [i_1] [i_1]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_31 += ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_1])), ((+(min((arr_9 [i_7] [i_7] [(signed char)8]), (((/* implicit */int) arr_14 [i_1] [i_7]))))))));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 11; i_8 += 4) 
            {
                for (int i_9 = 1; i_9 < 12; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) ((arr_19 [i_1] [i_10]) ? (((/* implicit */int) ((short) arr_18 [i_7]))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_9] [i_9])) && (((/* implicit */_Bool) arr_12 [12ULL]))))), (arr_5 [i_1 + 1] [i_1]))))));
                            arr_29 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1 + 1])) ? (((/* implicit */int) arr_23 [i_1 - 1])) : (((/* implicit */int) arr_23 [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_7]))) : ((+(3999641996U)))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */_Bool) arr_1 [i_1]);
            arr_30 [i_7] [i_1] [i_1] = ((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)60992)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [(short)4] [i_7])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_5 [1] [1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_1]), (((/* implicit */unsigned char) (signed char)16)))))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_7])) ? (arr_27 [i_1] [i_1] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [(_Bool)1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [4U] [i_7])))));
        }
    }
    var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) var_14)))))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_10))));
    var_35 -= ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((int) var_9))));
}
