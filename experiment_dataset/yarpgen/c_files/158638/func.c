/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158638
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
    var_11 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3209969106222619516ULL)) && (((/* implicit */_Bool) (short)-22130)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1861121752) < (arr_0 [i_0 - 2]))))) : (arr_1 [i_0 - 2] [i_0])));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (-555720450) : (((/* implicit */int) var_2))))) + (((unsigned int) (short)22130))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            for (unsigned int i_3 = 4; i_3 < 10; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-22130))));
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_2]) << (((((/* implicit */int) (unsigned short)13400)) - (13399)))))) || (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
                        arr_15 [i_2] = ((/* implicit */signed char) var_5);
                        var_14 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned char) var_2);
        var_16 -= ((/* implicit */_Bool) arr_9 [(signed char)6] [i_1 - 1] [(signed char)6]);
        var_17 |= ((/* implicit */long long int) ((int) (signed char)93));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1] [(signed char)6] [i_1 + 1])) && (((/* implicit */_Bool) ((long long int) arr_1 [i_1 + 1] [i_1 - 1])))));
    }
    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_6] [i_6] [i_6] = ((/* implicit */short) max((((((/* implicit */int) arr_18 [i_5 + 1] [i_6 + 3])) % (arr_10 [i_5 + 1] [i_6 + 1] [i_6 + 2]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) (short)22112)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((short)1873), (arr_21 [i_5] [i_6] [i_6])))) : (((/* implicit */int) ((unsigned short) (signed char)(-127 - 1))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_19 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)13400))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_5 + 1] [i_9] [i_7] [i_7] [i_5]))))), (arr_17 [i_8]))));
                            var_20 = ((/* implicit */signed char) 17238881162003118752ULL);
                            arr_29 [i_6] [i_7] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52136))) > (arr_7 [i_7] [i_7] [i_7])))), (((unsigned long long int) arr_9 [i_6] [i_6 - 3] [i_6]))))));
                            var_21 = ((/* implicit */unsigned char) (unsigned short)52135);
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_5 - 1] [i_5] [i_6] [i_6] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_28 [i_5 - 1] [i_5] [i_5 - 1] [i_6 - 3] [i_6 + 2]), (arr_28 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_6 - 3] [i_6 + 1]))))) : (max((arr_1 [i_5] [i_5 - 1]), (arr_1 [i_6 - 1] [i_6])))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            arr_35 [i_10] [i_10] [i_10] [i_10] [i_10] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)213)), ((unsigned short)65535))))) >= (arr_4 [i_5]));
                            var_23 = ((/* implicit */int) 0LL);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) var_10)) : (arr_20 [i_6])))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 - 1]))) : (3849150858877337881ULL))))), (((max((((/* implicit */unsigned long long int) (_Bool)1)), (4406289583441019089ULL))) | (((/* implicit */unsigned long long int) arr_7 [i_5] [i_7] [i_5]))))));
                    var_25 &= ((/* implicit */int) (unsigned char)42);
                }
            }
            for (unsigned char i_13 = 1; i_13 < 8; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (int i_15 = 1; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1970385737U)) ? (((/* implicit */int) (signed char)63)) : (-2147483640)))) && (((/* implicit */_Bool) (signed char)-86)))))));
                            arr_45 [i_6] [i_14] [i_13] [i_5 - 1] [i_5 - 1] [i_6] = ((/* implicit */unsigned int) var_5);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3849150858877337881ULL)))) ? (((/* implicit */unsigned long long int) (-(arr_11 [i_6 + 3] [i_6] [i_6 + 1] [i_6])))) : (((((/* implicit */_Bool) arr_33 [i_6 - 3] [i_6 - 1] [i_6 + 3])) ? (0ULL) : (arr_33 [i_6 - 2] [i_6 - 1] [i_6 + 2])))));
                            var_28 = ((/* implicit */unsigned char) arr_25 [i_15] [i_6] [i_15 + 1] [i_6] [i_15 - 1] [i_15]);
                            arr_46 [i_15] [i_15 - 1] [i_6] [i_13 + 2] [i_6] [i_6 - 3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)-125))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-22139)), (arr_41 [i_5 - 1] [i_6] [i_6]))))) : (arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) arr_19 [i_5] [i_6 - 1]))), (arr_0 [i_5 + 1])))) : (max((((/* implicit */unsigned long long int) ((4920770980820859085LL) | (arr_32 [i_5] [i_15 + 1] [i_5] [i_5] [i_15 + 1])))), (max((arr_37 [i_15]), (((/* implicit */unsigned long long int) (signed char)-123))))))));
                        }
                    } 
                } 
                arr_47 [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) arr_16 [i_5] [i_5])), (arr_36 [i_5 - 1] [i_6] [i_5 + 1] [i_5 + 1])))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_13])) && (((/* implicit */_Bool) 18446744073709551603ULL)))))))) + (max((arr_6 [i_13] [i_6 + 3]), (arr_37 [i_5 - 1])))));
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_16] [i_16] [i_6 - 2] [i_6 + 3] [i_5])) && (((/* implicit */_Bool) (signed char)62))))), (((((/* implicit */_Bool) arr_1 [i_6] [i_16])) ? (arr_9 [i_6] [i_6 - 1] [i_6]) : (((/* implicit */unsigned long long int) arr_42 [i_5] [i_5] [i_5]))))))) ? (((/* implicit */int) (unsigned char)255)) : (max((((((/* implicit */_Bool) arr_21 [i_16] [i_6 - 1] [i_5 - 1])) ? (arr_0 [i_5]) : (((/* implicit */int) arr_50 [i_6] [i_6] [i_6])))), (((/* implicit */int) ((((/* implicit */int) (short)9)) != (((/* implicit */int) (short)-22130)))))))));
                var_30 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))) ^ (max((((/* implicit */unsigned long long int) (signed char)-8)), (5131661156195125124ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216)))));
            }
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                arr_54 [i_5] [i_6] [i_17] [i_6] = ((/* implicit */signed char) var_10);
                arr_55 [i_6] [i_5] [i_5 + 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)42954)), (max((((/* implicit */unsigned long long int) arr_27 [i_6] [i_6 - 2] [i_6 - 2] [i_6 + 3] [i_5] [i_6])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_33 [i_17] [i_17] [i_5 + 1])))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
            {
                var_31 = ((/* implicit */long long int) (signed char)-95);
                arr_58 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_51 [i_6]))) & (((arr_38 [i_18] [i_6 - 2] [i_5 - 1] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13)))))));
                arr_59 [i_5] [i_5 + 1] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_43 [i_5 - 1] [i_6]), (arr_43 [i_5 - 1] [i_6])))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */int) (unsigned short)52144)) : (((/* implicit */int) ((((/* implicit */int) arr_36 [i_5] [i_6] [i_6] [i_6])) >= (-1))))))));
                arr_60 [i_6] = ((((/* implicit */_Bool) max((arr_52 [i_6 + 1] [i_6 - 1]), (arr_52 [i_6 - 3] [i_6 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_5] [i_6 + 3] [i_18]) <= (((/* implicit */int) ((short) var_4))))))) : (max((max((((/* implicit */long long int) (signed char)98)), (var_8))), (((/* implicit */long long int) arr_43 [i_5] [i_6])))));
                arr_61 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_10 [i_5] [i_6] [i_5])) / (var_9)));
            }
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned char) arr_17 [i_5 - 1])))));
                var_33 = ((/* implicit */signed char) ((unsigned char) (short)-24));
                var_34 = ((/* implicit */unsigned long long int) arr_28 [i_19] [i_6] [i_5] [i_5] [i_5]);
            }
            var_35 = ((/* implicit */unsigned int) max((((arr_31 [i_6 - 3] [i_6 + 3] [i_6] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-32765))))), (((/* implicit */long long int) (-(arr_12 [i_6] [i_6 + 2] [i_6 - 2] [i_6]))))));
        }
        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [8] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) arr_33 [i_5 - 1] [i_20] [i_5]))))), (max((0ULL), (((/* implicit */unsigned long long int) 2220066884U)))))))));
            arr_66 [i_5] [i_20] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22572))) + ((-9223372036854775807LL - 1LL))));
        }
        for (unsigned char i_21 = 2; i_21 < 9; i_21 += 3) 
        {
            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) 15333214481358543954ULL))));
            arr_69 [i_5] [i_21 - 1] = ((/* implicit */int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)158))));
        }
        var_38 = ((/* implicit */unsigned int) ((short) (signed char)(-127 - 1)));
        var_39 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [2] [i_5 + 1] [i_5 + 1])) ? (arr_9 [(unsigned char)10] [i_5 - 1] [i_5 - 1]) : (arr_9 [(signed char)0] [i_5 + 1] [i_5 - 1])))));
    }
}
