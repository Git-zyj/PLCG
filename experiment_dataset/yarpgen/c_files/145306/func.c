/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145306
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
    var_12 -= ((/* implicit */unsigned int) min(((+(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((min((arr_1 [i_0 - 1] [i_0 - 2]), (arr_1 [i_0 - 1] [i_0 - 1]))) + (2147483647))) >> ((((~(arr_0 [i_0 + 1] [i_0 + 2]))) - (7945973627465879208ULL)))))) | ((~(arr_0 [i_0 + 1] [i_0 - 2])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1320124220U)) - (max((arr_0 [i_3 + 1] [i_0 - 2]), (arr_0 [i_2] [i_0 + 2])))));
                        var_13 += ((/* implicit */unsigned int) min(((-((~(arr_7 [i_1] [i_0 + 2]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) >= (arr_8 [(unsigned char)4] [i_1] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 += ((((/* implicit */_Bool) ((((/* implicit */int) (short)24726)) % (((/* implicit */int) (short)-2838))))) ? (((/* implicit */long long int) ((((arr_1 [i_2] [i_0 + 1]) + (2147483647))) << (((arr_8 [10ULL] [i_2] [i_1] [10ULL]) - (12460319252712718300ULL)))))) : ((+(-4202781215317612521LL))));
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            arr_17 [i_5] [i_1] [i_2] [i_4] [i_5 - 1] &= ((/* implicit */signed char) (!(((((/* implicit */_Bool) (signed char)-90)) && (((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_5 - 1] [i_4] [i_5 - 2] [i_0 - 1] [i_5]))))));
                            arr_18 [i_5 + 1] [i_4] [i_5] [i_5] [i_0 + 1] [i_0 - 2] |= ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_5] [i_5])) - (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_5] [i_4])))) * (((/* implicit */int) arr_15 [i_5] [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_0 + 2] [i_0 - 1] [i_5]))));
                            arr_19 [i_5 - 2] [i_4] [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) (-((+(arr_13 [i_0 - 2])))));
                            var_15 = ((/* implicit */long long int) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_5]);
                        }
                        for (int i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            var_16 = ((((/* implicit */int) arr_12 [i_0 + 2] [i_1])) | (((((/* implicit */int) arr_15 [i_0 + 2] [i_1] [i_1] [i_2] [i_4] [i_4] [i_1])) >> (((-201759842) + (201759863))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_6 + 1] [i_6 - 1] [i_1] [i_6 - 1])) - (arr_16 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 1])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((+(arr_13 [i_0 - 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)4] [i_0 - 1] [(short)4]))))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) arr_15 [14LL] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [14LL])) * (((((/* implicit */int) (unsigned short)1020)) >> (((((/* implicit */int) arr_6 [(short)0] [i_1] [(short)0])) - (59))))))))));
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 + 1])) & ((-(arr_13 [i_0 + 2])))));
                            var_21 -= ((/* implicit */unsigned short) (~(arr_8 [(signed char)14] [i_4] [i_0 - 1] [i_4])));
                        }
                        var_22 = ((/* implicit */signed char) arr_13 [i_0 - 2]);
                    }
                    for (int i_8 = 4; i_8 < 13; i_8 += 3) 
                    {
                        var_23 += ((/* implicit */unsigned int) (-(min((2841655011610008276ULL), (((/* implicit */unsigned long long int) (short)2831))))));
                        arr_26 [i_0 - 2] [i_1] [i_1] = ((/* implicit */short) (((-((~(arr_0 [i_0 + 2] [i_0 - 2]))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_1] [i_8 - 1] [i_8 + 3] [i_8 + 2] [i_8 - 4] [i_0 - 1] [i_1])))))));
                        var_24 -= ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_13 [i_0 - 2]) / (((/* implicit */unsigned long long int) 4294967232U))))) ? (((/* implicit */int) arr_11 [i_0 - 1] [(unsigned short)10] [i_0 - 1])) : (((/* implicit */int) max((arr_21 [i_0 - 1] [(unsigned short)12] [i_2] [i_8 - 2]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    }
                    var_25 = ((/* implicit */unsigned int) (~((~(((((((/* implicit */int) (signed char)-103)) + (2147483647))) << (((((/* implicit */int) (unsigned char)168)) - (168)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [(unsigned short)14])) + (2147483647))) << (((((/* implicit */int) arr_4 [8] [i_9] [i_9])) - (8314))))))));
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            var_27 *= ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_10] [i_10] [i_9] [i_9] [i_9] [i_9] [i_10])) >> (((((/* implicit */int) arr_30 [i_9])) - (87)))));
            /* LoopSeq 3 */
            for (signed char i_11 = 2; i_11 < 8; i_11 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_11 + 2] [i_11 - 2] [i_11])) ? (((((/* implicit */unsigned long long int) arr_1 [i_10] [i_9])) * (arr_13 [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 - 2] [i_9])))));
                var_29 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_22 [i_9] [i_10] [i_11 - 2] [i_10] [i_11])) % (((/* implicit */int) arr_30 [i_9])))));
                arr_36 [i_11] [i_10] [i_11] = (((~(arr_13 [i_10]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((469144066) > (((/* implicit */int) arr_30 [i_9])))))));
            }
            for (signed char i_12 = 2; i_12 < 8; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 2; i_14 < 8; i_14 += 4) 
                    {
                        {
                            arr_46 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_21 [i_12 + 2] [i_14] [i_12 - 1] [i_13])) - (((/* implicit */int) arr_20 [i_9] [i_10] [i_10])))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((2287828610704211968ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62))))))))));
                            var_31 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9227))))) ^ ((+(((/* implicit */int) (signed char)90))))));
                            var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_9] [i_12 - 2])) * (((/* implicit */int) ((arr_41 [i_10] [i_12 + 2] [i_13] [i_14 - 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9] [i_9] [i_9] [i_9]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), ((+(arr_49 [i_10] [i_12 - 1] [i_12 + 1] [i_12 + 1])))));
                            var_34 = ((/* implicit */unsigned short) (-(arr_16 [i_12 + 2] [i_12 - 1] [i_12 + 2] [i_15] [i_15] [i_16])));
                            var_35 ^= ((/* implicit */unsigned short) ((_Bool) ((arr_41 [i_10] [i_10] [i_10] [i_10]) << (((((((/* implicit */int) arr_3 [i_10] [i_10])) + (158))) - (46))))));
                            var_36 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12 + 2]))) / (((arr_44 [i_9] [i_10] [i_12 - 1] [i_15] [i_16]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_37 = ((/* implicit */int) (~((+(2974843078U)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_17 = 1; i_17 < 8; i_17 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_18 = 2; i_18 < 8; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_38 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_18] [i_10] [i_18 - 2]))));
                        var_39 = ((/* implicit */short) (-((~(((/* implicit */int) (signed char)-120))))));
                        arr_61 [i_17] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)65388)) * (((/* implicit */int) arr_11 [i_18 - 2] [i_17] [i_9]))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_20 = 4; i_20 < 7; i_20 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_17 + 2] [i_18 - 1] [i_17]))));
                        var_41 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_18] [i_20 - 1] [i_20 - 2] [i_20 + 3] [i_18]))));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(arr_28 [i_20 + 1]))))));
                    }
                    for (signed char i_21 = 4; i_21 < 7; i_21 += 1) /* same iter space */
                    {
                        arr_66 [i_10] [i_18 + 2] [i_21 + 3] &= ((/* implicit */unsigned int) ((16158915463005339656ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9211)))));
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_39 [i_18 + 1] [i_18 + 2] [i_17 - 1])))))));
                    }
                    var_44 ^= ((/* implicit */_Bool) arr_56 [i_18 + 2] [i_17 + 1] [i_17 + 1] [i_10] [i_9]);
                    var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_65 [i_9] [i_9] [i_17] [i_9] [i_9] [i_9])) & (((arr_35 [i_9] [i_10] [i_17 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)11724)))))));
                    arr_67 [i_18] [i_10] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15754)) ^ (((/* implicit */int) arr_39 [i_9] [i_18 - 1] [i_17 + 2]))))) ? (((int) arr_13 [i_9])) : (((/* implicit */int) arr_31 [i_18 + 2] [i_17 + 1]))));
                }
                for (unsigned char i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    var_46 = 867331447;
                    arr_70 [i_17 + 2] [i_17] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)97)) * (((/* implicit */int) arr_34 [i_9])))) & (((/* implicit */int) arr_34 [i_17 - 1]))));
                    arr_71 [i_17] [i_17 + 2] [i_22] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (signed char)57)))));
                    arr_72 [i_17 + 1] [i_17 + 2] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64081))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16262991880933048827ULL))))) : ((+(((/* implicit */int) (unsigned short)22769))))));
                    var_47 = ((/* implicit */unsigned short) (+(arr_28 [i_10])));
                }
                for (int i_23 = 2; i_23 < 9; i_23 += 2) 
                {
                    var_48 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_17 + 1] [i_10]))));
                    /* LoopSeq 4 */
                    for (short i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((/* implicit */int) arr_69 [i_9] [i_23 + 1] [i_17 + 1] [i_23])) <= (((/* implicit */int) arr_69 [i_9] [i_23 - 1] [i_17 - 1] [i_23])))))));
                        var_50 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_76 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_54 [i_23 - 1] [i_23 + 1] [i_23] [i_23 - 1]))))));
                        arr_79 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_23] [i_17 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_9] [i_10] [i_23] [i_23 - 2] [i_24] [i_10])) ? (((/* implicit */int) arr_55 [i_9] [i_23 - 2] [i_17 + 1])) : (((/* implicit */int) arr_4 [i_23] [i_10] [i_10]))))) ? (((arr_49 [i_24] [i_17 - 1] [i_10] [i_9]) >> (((((/* implicit */int) arr_63 [i_24] [i_23 + 1] [i_17 + 1] [i_10] [i_10] [i_9])) + (3487))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_9] [i_10] [i_17 + 2] [i_23 - 2] [i_24] [i_24])))));
                    }
                    for (short i_25 = 0; i_25 < 10; i_25 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((((((/* implicit */int) arr_21 [i_9] [i_23] [i_17 - 1] [i_23 - 1])) | (((/* implicit */int) arr_50 [i_25])))) + (2147483647))) << (((((((/* implicit */_Bool) (short)0)) ? (arr_29 [i_9] [i_10]) : (((/* implicit */unsigned long long int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) - (18446744073271003188ULL))))))));
                        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) (+(arr_53 [i_17 - 1] [i_10] [i_17 + 2] [i_25]))))));
                        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_47 [i_23 - 1] [i_17 - 1] [i_17 + 2] [i_25] [i_25])))))));
                        arr_82 [i_9] [i_10] [i_17] [i_23 + 1] [i_25] [i_23 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_23 - 2] [i_17] [i_17] [i_9]))));
                        arr_83 [i_9] [i_9] [i_9] [i_9] [i_17] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) ((-1189932828) / (((/* implicit */int) (unsigned short)35138)))));
                    }
                    for (int i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        var_54 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)2648))));
                        arr_87 [i_26] [i_10] [i_17 - 1] [i_17 + 1] [i_26] [i_17 + 2] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_23 + 1])) | ((+(((/* implicit */int) arr_80 [i_9]))))));
                    }
                    for (short i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        arr_90 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_17 + 1]))) > (((unsigned long long int) arr_47 [i_9] [i_9] [i_9] [i_9] [i_9]))));
                        var_55 -= ((/* implicit */short) ((arr_85 [i_23 - 2] [i_23 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 2]) / (arr_85 [i_23 + 1] [i_23 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1])));
                        var_56 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_9] [i_9] [i_9] [i_9])))))));
                    }
                }
                var_57 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_17 + 2] [i_17 + 1] [i_17 - 1] [i_17 + 2] [i_17 + 1])) ? (((/* implicit */unsigned long long int) arr_42 [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 2] [i_17 - 1])) : (arr_7 [i_17 + 1] [i_9])));
                arr_91 [i_10] [i_10] [i_17 - 1] [i_17 + 2] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_60 [i_9] [i_17 + 2] [i_10]))));
            }
            var_58 = ((/* implicit */unsigned long long int) arr_54 [i_10] [i_10] [i_10] [i_9]);
            var_59 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_96 [i_28] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)1008)) - (((/* implicit */int) (unsigned short)1023))));
            var_60 -= (-(((/* implicit */int) arr_38 [i_9] [i_9] [i_28])));
            var_61 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_28] [i_28] [i_9] [i_9])) * (((/* implicit */int) arr_38 [i_28] [i_28] [i_9]))));
            var_62 += ((/* implicit */signed char) ((arr_85 [i_9] [i_9] [i_9] [i_28] [i_28]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9])))));
        }
        var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [(signed char)4] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [(unsigned short)10]))) : (((arr_41 [i_9] [i_9] [i_9] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9] [i_9] [i_9] [i_9])))))));
        var_64 += (+(((((/* implicit */_Bool) arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2635))))));
    }
}
