/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144090
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_6 [(unsigned char)4] [(unsigned char)4] [(unsigned short)8]), (arr_6 [(short)2] [(short)2] [i_2]))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0]), (arr_3 [i_0]))))))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24420)) * (((/* implicit */int) (unsigned short)41091))))) ^ (((arr_7 [13U] [13U]) >> (((((/* implicit */int) arr_4 [i_0])) + (137)))))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((arr_8 [i_0] [i_2]), (((/* implicit */long long int) arr_0 [i_2])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [7ULL])) ? (arr_9 [i_2] [i_2] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [3]))))))))) ? (((arr_9 [(_Bool)1] [i_3 - 1] [i_2] [(short)8]) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)24444)) > (((/* implicit */int) (unsigned short)41091))))))) : (min((arr_6 [i_3 - 1] [1ULL] [7ULL]), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_9 [i_3] [i_2] [i_2] [9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [10] [i_0] [(_Bool)1] [i_0] [i_0])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            var_14 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_11 [(unsigned char)5] [4LL] [13ULL] [i_0] [i_4 - 2] [i_4 - 2])), (((max((((/* implicit */unsigned long long int) (signed char)-104)), (562949953421296ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)41115), ((unsigned short)41091)))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (long long int i_7 = 3; i_7 < 13; i_7 += 3) 
                    {
                        {
                            arr_26 [i_4] [i_4] = ((((/* implicit */unsigned long long int) ((-5588980809828378435LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))))) - (max((arr_14 [i_4 + 2] [i_4]), (arr_14 [i_4 + 2] [i_4]))));
                            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((arr_20 [(_Bool)1] [(unsigned char)3] [i_5] [i_6]) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_7 - 1] [(unsigned char)13] [2LL] [i_4 + 2] [8ULL])) - (((/* implicit */int) arr_19 [4LL] [4LL] [8U]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_4] [i_4 + 1] [i_4 - 3] [i_4 - 2] [i_4])) * (((/* implicit */int) arr_25 [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 1] [11LL])))))));
                        }
                    } 
                } 
            } 
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((_Bool) arr_16 [i_0] [i_0] [i_0] [(_Bool)1]))))) << (((((((/* implicit */int) (unsigned short)41091)) >> (((3584817696U) - (3584817687U))))) - (62)))));
            arr_27 [i_4] [6U] = ((/* implicit */unsigned char) max((1687302210U), (((/* implicit */unsigned int) (unsigned char)45))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            arr_30 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)41091))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41116)) >> (((/* implicit */int) (unsigned short)0)))))));
            arr_31 [i_0] = ((unsigned int) arr_21 [i_0] [i_8]);
            /* LoopSeq 2 */
            for (long long int i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_9 - 1] [i_9 - 1] [i_9])) ? (arr_22 [i_9 - 1] [1U] [(unsigned short)8] [(_Bool)1] [i_9] [i_9 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9 + 3] [(unsigned char)12] [(_Bool)1])))));
                var_18 = ((/* implicit */unsigned int) ((((arr_20 [i_0] [13U] [i_9] [i_9 + 3]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_35 [0ULL] [i_9 + 3] [i_9 + 1] [2U]))));
                arr_37 [11ULL] [(unsigned char)12] [i_0] = ((/* implicit */long long int) ((13980197626310665611ULL) >> (0U)));
                arr_38 [6LL] [(signed char)12] [11U] [5U] = ((/* implicit */_Bool) ((short) arr_34 [3U] [i_9 + 3]));
            }
            for (long long int i_10 = 2; i_10 < 11; i_10 += 1) /* same iter space */
            {
                arr_41 [(short)6] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41091)) > (-1524196055)));
                var_19 = ((16352U) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10]))) * (2111045039U))));
                arr_42 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24439))) : (4294967293U)));
                arr_43 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_10 + 1] [(unsigned char)2] [(unsigned short)11])) ? (((/* implicit */int) arr_39 [i_10 + 1] [i_10 + 1] [i_10])) : (((/* implicit */int) arr_39 [i_10 - 2] [i_10] [i_10 + 1]))));
            }
        }
        arr_44 [1LL] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [2ULL]))))), (min((((4294967295U) + (4294967295U))), (arr_24 [i_0] [i_0] [(short)11] [i_0] [i_0] [(short)5])))));
    }
    var_20 = ((/* implicit */signed char) var_9);
}
