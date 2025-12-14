/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129025
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = (signed char)0;
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_1 - 1])) : (((/* implicit */int) (signed char)0)))))));
            /* LoopNest 3 */
            for (signed char i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */short) arr_12 [i_2] [i_1 - 1] [i_1] [i_2] [i_1]);
                            arr_16 [i_2] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (~((~(arr_8 [i_0 - 1] [i_0 - 1] [i_2 - 4])))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_13 [i_0 - 1] [i_0] [10U] [i_1 + 1] [(signed char)11]), ((~(arr_10 [i_0] [i_0] [i_1 + 1] [i_0])))))) ? (max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_0 - 1] [9ULL])) : (arr_10 [(unsigned char)13] [i_1] [(_Bool)1] [i_0]))), (((/* implicit */int) arr_15 [i_0 - 1] [i_0] [(unsigned char)13] [i_0] [(signed char)14] [i_0 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-8)), (max((arr_9 [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned char) (signed char)44)))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_11 [i_1] [i_5]) ? (((((/* implicit */_Bool) (signed char)44)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [(signed char)9] [i_5 + 3] [i_5] [i_5 + 1]) && (((/* implicit */_Bool) arr_7 [8U] [8U] [i_5 + 4]))))))));
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_0 - 1])) ^ (((/* implicit */int) arr_18 [i_0 - 1] [i_1 - 1] [i_5 + 1]))));
                var_25 = ((/* implicit */_Bool) ((((arr_1 [(unsigned short)15] [i_0 - 1]) && (((/* implicit */_Bool) (signed char)-10)))) ? (((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_14 [i_5] [i_5] [i_0] [i_0])))) : (((/* implicit */int) arr_18 [i_5 - 1] [i_1 + 1] [i_0 - 1]))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 1) 
            {
                var_26 = arr_10 [(_Bool)1] [i_1 - 1] [i_1 + 1] [i_0];
                /* LoopNest 2 */
                for (signed char i_7 = 4; i_7 < 14; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8] [i_1 + 2] [i_0])) && (((/* implicit */_Bool) arr_18 [i_0 - 1] [i_1 + 2] [i_6 - 1]))));
                            var_28 = ((/* implicit */long long int) arr_18 [i_6 - 3] [i_1 + 1] [i_0 - 1]);
                            var_29 = ((/* implicit */int) ((unsigned int) ((int) arr_26 [i_0] [i_1] [10LL] [i_1] [i_1])));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((arr_6 [i_1] [i_1] [i_1 - 1]) ? ((-(arr_24 [i_6 - 1] [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)21))))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                var_31 = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)15)) >> (((((/* implicit */int) (signed char)-19)) + (32))))), (max((((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)77)))), (((/* implicit */int) (unsigned char)82))))));
                var_32 = ((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_1] [i_0]);
                arr_29 [i_0] [i_1] [i_9] [i_1 - 1] = ((/* implicit */long long int) (signed char)0);
            }
        }
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_14 = 2; i_14 < 16; i_14 += 2) 
                        {
                            var_33 -= ((/* implicit */_Bool) ((unsigned short) 5150344854276455939LL));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_12])) ? (((((/* implicit */int) (unsigned short)1020)) >> (((2571139951U) - (2571139937U))))) : (arr_44 [i_10] [1U] [i_10] [i_10] [i_10] [i_10] [i_10])));
                            var_35 = ((/* implicit */signed char) (unsigned short)1012);
                            arr_45 [i_11] &= ((/* implicit */unsigned int) arr_40 [i_10] [3U] [i_12] [i_13] [i_13]);
                            var_36 += ((/* implicit */short) var_12);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_37 = ((/* implicit */signed char) arr_33 [i_11]);
                            arr_50 [i_10] [i_11] [17U] [i_12] [i_12] [17U] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) : (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) (unsigned short)49871))))) : (((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_38 = ((/* implicit */short) 26ULL);
                            arr_54 [i_10] [i_16] [i_13] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)21)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3))) : (var_4)))));
                            arr_55 [i_10] [(unsigned short)17] [(signed char)4] [i_10] = ((/* implicit */unsigned short) arr_38 [i_10] [i_10] [i_10] [i_10]);
                            arr_56 [i_10] [i_13] [i_10] = ((/* implicit */unsigned char) (unsigned short)1019);
                            arr_57 [i_10] [i_16] [(short)3] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-12)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_31 [i_16])) : (((/* implicit */int) arr_35 [i_10])))) : (((/* implicit */int) ((signed char) arr_31 [i_10])))));
                        }
                        for (int i_17 = 2; i_17 < 19; i_17 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) arr_53 [i_10] [i_10] [(short)9] [(_Bool)1]);
                            var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)-44)))) ? (((/* implicit */int) (unsigned short)64516)) : (((/* implicit */int) ((_Bool) 0U)))));
                        }
                        for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) arr_43 [i_18] [i_13] [i_10]);
                            var_42 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57382))) / (4970796276714498411LL)))));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((signed char) ((((-1514089916150081032LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)7801)) - (7771)))))))));
                            arr_64 [i_10] = ((/* implicit */signed char) arr_62 [i_10] [i_10] [i_10] [i_12] [(signed char)10] [i_18]);
                        }
                        arr_65 [i_10] [i_10] [i_10] [(short)7] [i_10] [i_10] = ((/* implicit */unsigned short) (short)25089);
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) >> (((((/* implicit */int) (short)-30699)) + (30700)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) : (2578315684487157820LL)));
                    }
                    for (short i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
                    {
                        var_45 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_66 [i_10] [i_11] [i_10] [i_11])) ? (((/* implicit */int) arr_31 [i_12])) : (((/* implicit */int) arr_40 [i_10] [i_11] [i_11] [(short)19] [i_19])))));
                        var_46 *= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_11])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_60 [(signed char)14] [i_11] [i_12] [i_11] [i_10])) ? (((/* implicit */int) (unsigned short)1644)) : (arr_44 [i_19] [i_19] [i_19] [i_19] [(unsigned char)2] [i_11] [i_10]))) - (1632)))));
                    }
                    var_47 *= ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_53 [i_10] [(signed char)17] [i_10] [i_10]))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (2874804538U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10])))));
    }
    var_49 = ((/* implicit */unsigned long long int) var_6);
    var_50 = ((/* implicit */unsigned long long int) var_7);
}
