/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154232
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) arr_3 [i_2] [i_1 + 1] [13ULL]))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) ((short) var_4))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_1 - 2] [i_2])), (arr_2 [i_1]))))))) : (var_8)));
                        arr_12 [i_1] = (+(((/* implicit */int) ((((int) arr_7 [(unsigned char)3] [i_1] [i_2 - 1] [i_3])) <= ((+(((/* implicit */int) arr_7 [i_0] [(unsigned char)13] [i_2 - 3] [i_3]))))))));
                        arr_13 [i_0] [i_2 - 3] [i_2 - 3] [i_1 - 2] [i_1] [i_0] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1 - 2])))) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_10 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_3 [12ULL] [i_2] [i_2])))))))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (short)-19222))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_1] [i_1] [i_2 - 2] [i_5 - 1])) ? (arr_18 [i_2 + 1] [i_2 + 1] [i_1] [(unsigned short)4] [i_2]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-19226)) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_1] [i_4] [i_2 + 1] [i_1] [i_1])) - (17841))))))));
                            arr_20 [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((var_1) / (var_8)));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (((((/* implicit */int) arr_7 [i_1 - 1] [i_2] [i_4] [i_5 + 2])) * (((/* implicit */int) arr_9 [i_1] [(signed char)12])))) : (((int) var_2))));
                        }
                        var_17 = ((/* implicit */_Bool) ((int) arr_9 [i_1 + 1] [i_1 - 1]));
                    }
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)8568)) && (((/* implicit */_Bool) (short)-19222))))))));
        arr_22 [i_0] &= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_18 = ((/* implicit */short) arr_23 [i_6]);
        arr_25 [16ULL] [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_6]);
        /* LoopNest 3 */
        for (signed char i_7 = 3; i_7 < 18; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    {
                        arr_34 [i_9] [i_7] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3961220730590790579LL)) ? (((/* implicit */int) (short)-19222)) : (((/* implicit */int) (short)8568))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_9 + 2]))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_29 [i_6] [i_7] [i_6] [i_9])), ((short)-8549))))) | (((((/* implicit */_Bool) (unsigned short)11512)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19223))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_9] [i_6] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_35 [i_6] [i_7 - 3] [i_7 - 3] [i_8] [i_8] [0LL] [i_10])) >> (((((/* implicit */int) (unsigned char)255)) - (249))))));
                            var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_9] [i_10] [i_9] [i_9])) > (((/* implicit */int) arr_29 [i_9] [i_9] [i_9 + 1] [i_9]))));
                            arr_39 [i_9] = ((/* implicit */unsigned long long int) arr_29 [i_7 - 2] [i_7 + 1] [i_7 - 2] [i_7]);
                            arr_40 [i_6] [i_9] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_6])) ? (((/* implicit */int) arr_31 [i_7 + 1] [i_8] [i_8] [i_9] [i_9 + 3])) : (((int) arr_32 [i_6] [i_9] [i_8] [i_9 + 2] [i_10]))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_9) + (((/* implicit */int) arr_26 [i_6] [i_11]))))) != (((((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_30 [(signed char)2]))))) ? (min((arr_32 [i_11] [i_9] [i_8] [i_9] [3ULL]), (arr_23 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_11] [i_9] [i_9] [i_9])))))));
                            arr_44 [i_6] [i_7 - 3] [i_8] [i_8] [i_9 + 1] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((arr_37 [i_6] [i_7] [i_8] [i_9] [i_11]), (((/* implicit */unsigned long long int) arr_36 [(unsigned short)0] [i_9] [i_9 + 3] [i_11]))))))) ? ((~(18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19225)) ? (-1351802723) : (((/* implicit */int) (short)-19240)))))));
                        }
                        arr_45 [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_6]))) != (max(((-(arr_23 [i_7]))), (((unsigned long long int) var_3))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_46 [i_12])) + (2147483647))) >> (((((/* implicit */_Bool) (unsigned short)508)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)508))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_46 [i_12]))));
    }
}
