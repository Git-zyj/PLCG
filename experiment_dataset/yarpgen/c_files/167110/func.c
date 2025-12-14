/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167110
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-32764), ((short)-7493)))))))) ? (min(((-(((/* implicit */int) (short)7492)))), (((/* implicit */int) (short)7487)))) : (min((((/* implicit */int) ((signed char) arr_1 [i_0]))), (var_0)))));
        arr_3 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (~(arr_4 [i_0] [(unsigned char)5] [i_1])));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
            arr_8 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_1]));
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_20 [(unsigned short)2] [i_2] = ((/* implicit */long long int) (short)7492);
                            arr_21 [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_0] [i_5])) ? (arr_4 [i_0] [(signed char)13] [i_5]) : (((/* implicit */int) ((unsigned char) (short)7493)))));
                        }
                        for (short i_6 = 4; i_6 < 11; i_6 += 4) 
                        {
                            arr_25 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) != (var_3)));
                            arr_26 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_12 [i_3] [i_3 + 4] [i_3]);
                            arr_27 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_17))) ? (((((/* implicit */_Bool) arr_4 [i_6 - 4] [i_6 + 3] [i_6 + 3])) ? (((/* implicit */int) arr_12 [i_0] [i_3 - 1] [i_4])) : (((/* implicit */int) arr_12 [i_3] [i_3 + 4] [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (~(var_9)))))))));
                            arr_28 [i_0] [i_2] [(unsigned char)10] [i_0] [i_6 - 3] = ((/* implicit */short) (+(arr_4 [i_0] [(short)6] [i_3])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_31 [i_3] [i_7] = (short)19137;
                            arr_32 [i_0] [i_2] [i_3] [i_4] [i_3] [i_7] = ((/* implicit */short) (~(558305852)));
                            arr_33 [i_0] [i_2] [i_2] [i_2] [(signed char)8] = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0]);
                            arr_34 [i_0] [i_0] [i_3 - 1] [(_Bool)1] [i_3 - 1] [i_0] = ((/* implicit */_Bool) min(((short)7478), ((short)-7493)));
                            arr_35 [i_0] = ((/* implicit */short) (-(((((/* implicit */int) arr_10 [i_3 + 2] [i_3 + 3] [i_3 + 1])) * (((/* implicit */int) (short)9069))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_38 [i_0] [i_2] [9] [i_4] [(unsigned short)12] = ((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) arr_16 [i_0] [i_2] [i_3 + 3] [i_4])), (var_13))));
                            arr_39 [i_8] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((arr_0 [i_8]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (short)7492)))))));
                            arr_40 [i_0] [i_2] [i_2] [i_4] [i_3] = ((/* implicit */signed char) arr_9 [(short)9] [i_2] [i_2]);
                        }
                        /* LoopSeq 1 */
                        for (short i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            arr_43 [i_9] [i_2] [i_0] [i_9 + 2] = ((/* implicit */unsigned short) arr_15 [i_3 + 2] [i_3 + 2] [i_9] [i_9 + 3]);
                            arr_44 [i_9] = ((/* implicit */short) arr_19 [i_0] [i_0] [i_0] [i_3] [i_4] [(short)1] [i_9 + 1]);
                            arr_45 [i_0] [i_0] [i_0] [i_4] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_2])) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) - (arr_36 [i_0] [(unsigned short)8] [i_4] [i_9]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_9] [i_4] [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (var_9)))))) - (13867509166953707759ULL)))));
                            arr_46 [i_9] [(_Bool)1] = ((/* implicit */signed char) (((-((~(((/* implicit */int) (unsigned char)11)))))) >> (((((long long int) (-(((/* implicit */int) var_11))))) - (12465LL)))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_49 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) var_12);
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            arr_55 [i_0] [i_0] [i_0] [(short)8] [i_12] [i_10] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_13 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12] [i_11] [i_10])) ? (arr_11 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7477)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)17))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)7484)))));
                            arr_56 [i_10] [i_2] = ((/* implicit */short) ((signed char) ((((((/* implicit */_Bool) (short)-7477)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_19)))) == (((/* implicit */int) arr_14 [i_0])))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 3; i_13 < 13; i_13 += 1) 
            {
                arr_59 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_2] [i_13 + 1] [i_13 + 1] [i_0])), (((((/* implicit */_Bool) (signed char)77)) ? (4164051346380767249ULL) : (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_2] [i_13 - 2]))))))) ? (max((var_13), (arr_29 [i_0] [i_13 + 1] [i_13 + 1] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_13 - 3] [i_13 + 1] [i_13 - 3])) || (((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_0] [i_13] [i_13]))))))));
                arr_60 [i_0] [i_0] [i_2] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) max((((unsigned int) arr_18 [(unsigned char)13] [i_13 - 3] [i_13 + 1] [i_2] [i_2] [i_2] [10LL])), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (arr_11 [i_0] [i_2] [i_13]))))))) - (9223372036854775802LL)));
            }
        }
        arr_61 [i_0] [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))) <= (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_62 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((short) var_6)));
    }
    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
    {
        arr_65 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */int) arr_63 [i_14])), ((-(((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)5905))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [16LL]))))))))));
        arr_66 [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)147)) << (((/* implicit */int) var_19))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_63 [i_14])), (var_6))))));
        arr_67 [(short)8] [i_14] = ((/* implicit */short) arr_63 [0]);
    }
    var_20 = ((/* implicit */unsigned char) var_11);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_1)) << (((/* implicit */int) ((signed char) var_6))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-7492)))))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned char) (signed char)71)), (var_1))))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((var_9) * (((/* implicit */int) var_19))))))));
}
