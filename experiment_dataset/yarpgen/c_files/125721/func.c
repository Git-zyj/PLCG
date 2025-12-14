/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125721
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_17)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39422)) ? (1666587143) : (-1666587143)))) ? (min((var_14), (var_15))) : (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) var_18)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_18)))) : (var_14)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(short)8] [i_1] [i_2] [i_3] [(short)8] [i_4] [i_4] |= ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
                                arr_13 [i_0] [i_0] [(signed char)8] [(signed char)8] [i_0] [8] [8] |= ((/* implicit */short) arr_0 [i_0]);
                                arr_14 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (signed char)-105)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_0 - 2] [8] [i_4 - 1]))))) : (((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_2 - 1] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [5ULL] [5ULL] [i_0] [i_0] [5ULL] [i_2]))) : (arr_9 [i_2] [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 2]))) : (((unsigned int) arr_3 [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) ((arr_21 [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])) : (arr_17 [2ULL]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_5] [i_6] [i_5] [i_6]), (((/* implicit */unsigned char) arr_21 [4])))))))))) : (min((((/* implicit */long long int) arr_16 [(unsigned char)7] [i_6])), (((((/* implicit */_Bool) arr_20 [(unsigned short)0] [(unsigned short)0])) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [(unsigned short)1] [(unsigned char)2] [(_Bool)0])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_29 [i_5] [i_8] [(unsigned char)9] [i_8] [i_9] [(unsigned short)11] [(unsigned char)9] = ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_6 + 1])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (arr_19 [i_5 - 1] [i_6 + 1]))));
                                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) arr_27 [i_5 + 2] [i_6] [i_6 - 1] [i_7] [i_6 - 1] [i_8 - 1])) : (((/* implicit */int) arr_27 [i_5 + 2] [(unsigned char)6] [i_6 - 1] [i_7] [i_5] [i_8 - 1]))))) ? (((((/* implicit */_Bool) arr_27 [i_5 + 2] [i_9] [i_6 - 1] [i_7] [(unsigned char)4] [i_8 - 1])) ? (arr_19 [i_5 + 2] [5U]) : (((/* implicit */int) arr_27 [i_5 + 2] [i_5 + 2] [i_6 - 1] [i_7] [i_9] [i_8 - 1])))) : (arr_19 [i_5 + 2] [i_6])))));
                                var_25 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_25 [(unsigned short)7] [i_6])) > (((/* implicit */int) arr_21 [i_6])))))));
                                arr_30 [i_9] [i_7] [i_7] |= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [i_7] [i_8] [i_9])))) ? (((/* implicit */long long int) ((var_19) ? (((/* implicit */int) arr_15 [i_8])) : (((/* implicit */int) arr_21 [i_6]))))) : (((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_6] [i_6] [i_7] [i_9] [i_8])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_25 [i_5] [i_6]))))), (var_11))))) : (((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_9])) ? (arr_28 [i_5 + 2] [(unsigned short)1] [i_8 + 3] [i_8 + 1] [i_5 - 1] [i_8 + 1] [i_8]) : (arr_28 [0ULL] [i_6 - 1] [i_6 - 1] [i_6 - 1] [(short)8] [i_7] [i_9]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) arr_34 [i_11] [i_10] [i_7] [i_5] [2ULL] [i_6] [i_5]);
                                arr_37 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_16 [i_7] [i_7])), (arr_26 [i_5] [i_5])))) ? (((/* implicit */int) arr_36 [i_5 + 1] [i_5 - 1] [i_6 - 1] [i_6] [i_11 - 3])) : (((((/* implicit */_Bool) arr_23 [(short)5] [i_7] [i_10])) ? (((/* implicit */int) var_11)) : (var_2))))) >> (((((/* implicit */int) arr_23 [i_10] [i_7] [i_6])) - (156)))));
                            }
                        } 
                    } 
                    arr_38 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_16 [i_6 + 1] [i_6]) ? (((/* implicit */unsigned long long int) var_18)) : (arr_17 [i_6 + 1])))) ? ((+(((/* implicit */int) arr_16 [i_6 - 1] [i_5])))) : (((/* implicit */int) ((short) arr_26 [i_5] [i_5 + 2])))));
                }
            } 
        } 
    } 
}
