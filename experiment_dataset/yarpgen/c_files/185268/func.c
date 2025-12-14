/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185268
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [4]))));
        arr_6 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            var_12 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) == (var_5)));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1 + 2])) ? (var_9) : (((/* implicit */unsigned long long int) var_11))));
            var_14 -= ((/* implicit */short) var_2);
            arr_11 [i_1] = ((/* implicit */int) var_4);
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) var_11)))));
        }
        for (short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4202060916863894186ULL)) ? (((int) 14244683156845657434ULL)) : (((/* implicit */int) arr_1 [i_2 - 2]))));
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 7; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 10; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_3 + 2] [i_3 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_3)) ^ (var_5)));
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 3])) && (((((/* implicit */int) arr_18 [i_3 - 1] [i_3 - 1])) > (var_6))))))));
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_22 [i_5] [(signed char)2] [i_2 + 2] [i_0]) + (((/* implicit */long long int) arr_16 [i_4 - 4] [3U] [i_0])))))));
                            arr_24 [i_5] [i_2 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [(short)3] [i_2]))))) ? (arr_13 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-15)) : (var_1)));
            }
        }
        var_20 -= ((/* implicit */int) (~(((var_8) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_38 [i_6] [i_7] [i_8] [i_9] [i_6] [i_6] = ((/* implicit */long long int) arr_12 [i_6] [i_7] [(unsigned char)5]);
                        var_21 -= (!(((/* implicit */_Bool) (unsigned short)65505)));
                        arr_39 [i_7] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_8 + 2] [i_7] [i_8 + 2])) <= (((/* implicit */int) ((unsigned short) (_Bool)1)))))), ((unsigned short)0)));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) arr_2 [i_6]);
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_23 -= ((3943413692U) % (arr_27 [i_10]));
        arr_42 [i_10] = ((/* implicit */_Bool) ((long long int) ((signed char) arr_40 [i_10] [i_10])));
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) 3943413678U))));
    }
    var_25 += ((/* implicit */unsigned char) ((((3453075816U) <= (3567796243U))) || ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_5))))))));
    /* LoopSeq 2 */
    for (int i_11 = 2; i_11 < 8; i_11 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) 1785816470U);
        arr_46 [i_11] = ((/* implicit */unsigned char) max((var_9), (((((/* implicit */unsigned long long int) 524288)) & (((((/* implicit */unsigned long long int) 3943413678U)) / (var_9)))))));
    }
    for (int i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
    {
        var_27 -= ((/* implicit */long long int) var_10);
        /* LoopSeq 4 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                var_28 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_13] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14] [(unsigned short)2] [i_13] [i_13] [3LL]))) : (arr_28 [i_12] [i_13] [i_14])))) ? (((/* implicit */unsigned int) ((2039214053) * (((/* implicit */int) (_Bool)0))))) : (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                arr_57 [i_14] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((_Bool) var_6));
                var_29 = ((/* implicit */_Bool) arr_51 [i_13]);
            }
            for (unsigned int i_15 = 3; i_15 < 8; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 7; i_16 += 1) 
                {
                    for (unsigned int i_17 = 2; i_17 < 9; i_17 += 4) 
                    {
                        {
                            arr_68 [i_12 + 1] [(signed char)1] [i_15 - 1] [i_16] [i_12 + 1] = ((/* implicit */unsigned short) ((arr_12 [i_12 + 1] [i_15] [i_15]) >> (((((/* implicit */_Bool) arr_34 [i_12] [i_12 + 1] [i_16 + 2] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (14244683156845657429ULL)))));
                            arr_69 [i_12] [i_12] [(short)7] [i_16 + 2] [i_17] = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) arr_35 [i_15 + 1] [i_12 + 2])), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_35 [i_12] [i_12])) : (var_1)))))) / (((((/* implicit */_Bool) var_7)) ? (((arr_48 [i_15 + 2] [i_16]) / (((/* implicit */long long int) ((/* implicit */int) (short)21432))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 129024LL))))))))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-((+(((/* implicit */int) ((unsigned short) 2147483392U))))))))));
                            arr_70 [i_12] [4LL] [i_15 - 1] [i_16 + 1] [i_17] = ((/* implicit */signed char) arr_21 [i_17]);
                        }
                    } 
                } 
                arr_71 [i_12] [i_12 - 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)15)) ? (var_1) : (((/* implicit */int) (signed char)-8)))), (((/* implicit */int) (!(arr_8 [i_12] [i_13] [i_15]))))))), (max((((/* implicit */unsigned long long int) var_4)), (var_5)))));
            }
            /* vectorizable */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_74 [i_12] [i_13] [i_12] [(unsigned short)2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-78)) ? ((+(5U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_12] [i_12 - 1] [(short)4] [i_13] [i_12 - 1])) + (var_6))))));
                var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12 - 1])) ? (((/* implicit */int) arr_44 [i_12 - 1])) : (((/* implicit */int) var_4))));
                var_32 = ((/* implicit */unsigned int) arr_29 [i_13]);
            }
            arr_75 [i_12 - 2] = ((/* implicit */short) min((((/* implicit */long long int) 3210264914U)), (-129024LL)));
        }
        for (int i_19 = 1; i_19 < 9; i_19 += 4) 
        {
            arr_79 [(signed char)3] = ((/* implicit */long long int) arr_32 [(unsigned short)4] [(unsigned short)4] [i_12 - 1]);
            var_33 += arr_26 [i_12 + 1] [i_19];
        }
        for (unsigned long long int i_20 = 4; i_20 < 8; i_20 += 4) 
        {
            arr_82 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) (((+(((/* implicit */int) (short)21432)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-87)))))))) : (max((((/* implicit */long long int) 1146092411U)), (6829598163625391668LL)))));
            var_34 += ((/* implicit */unsigned int) arr_21 [i_20]);
        }
        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (_Bool)1))));
            var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-22673)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967291U))))) : (min((((/* implicit */int) (short)8910)), (var_6)))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_11)), (3967322851882110955ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_26 [i_12 + 2] [i_21]), (((/* implicit */signed char) var_4))))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)87)), ((unsigned short)65535))))));
        }
        arr_86 [i_12] = ((/* implicit */unsigned int) ((((var_8) | (((/* implicit */long long int) min((var_3), (3110786592U)))))) > (((/* implicit */long long int) ((arr_40 [i_12 + 1] [i_12]) % (((/* implicit */int) arr_58 [i_12] [(short)6] [5] [i_12 + 1])))))));
        var_37 = ((/* implicit */unsigned short) min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))));
    }
}
