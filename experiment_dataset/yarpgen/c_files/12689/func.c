/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12689
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))));
    var_16 = ((unsigned long long int) -8418370598379815085LL);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_6);
                    var_17 *= ((/* implicit */short) min(((unsigned short)23734), (((/* implicit */unsigned short) (unsigned char)79))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2]))));
                    var_18 = ((/* implicit */unsigned long long int) ((min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) >= (((/* implicit */unsigned long long int) max((((long long int) var_12)), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)65)) != (((/* implicit */int) arr_0 [i_1] [i_0]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (unsigned short)12))) + (((((/* implicit */_Bool) arr_6 [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_3] [i_3 - 1])) : (((/* implicit */int) var_14)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) (unsigned char)176);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_3 - 2]) : (var_1)));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [i_5] [i_3 + 2]))) : (arr_18 [8ULL] [i_4] [i_4] [i_5] [(signed char)8] [i_7])));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_0))));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) var_6));
                            arr_27 [i_8] [i_4] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)119)) ? (arr_18 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3]) : (arr_18 [i_8] [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3])));
                            var_24 = ((/* implicit */long long int) arr_18 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]);
                            var_25 &= ((/* implicit */signed char) ((short) arr_9 [i_3 - 2]));
                            var_26 = ((/* implicit */unsigned char) ((unsigned short) (short)127));
                        }
                        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            arr_32 [i_9] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */signed char) arr_25 [i_3] [i_3] [(unsigned char)1] [i_3] [i_3] [i_3] [i_3]);
                            arr_33 [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */signed char) arr_29 [(short)7] [i_4]);
                            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_3 - 1]))));
                            arr_34 [i_3] [i_4] [i_5] [i_6] [i_6] [i_9] = arr_1 [i_3] [i_5];
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_10 + 1])) ? (var_13) : (arr_6 [i_3 - 2] [i_10 + 1])));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_10 - 1])) ? (arr_19 [i_3] [i_3 + 1] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (((((/* implicit */_Bool) -3313946151147486732LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_6]))))));
                            var_31 = ((/* implicit */unsigned char) var_5);
                        }
                    }
                    for (signed char i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_11] [i_11] [i_11 - 1] [i_11 + 2] [i_11])) ? (((/* implicit */int) arr_14 [i_3 + 2] [i_3] [i_3 + 2] [3ULL])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 1] [i_3]))));
                        var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)68)))) ? (((/* implicit */unsigned long long int) arr_15 [i_3 + 2] [i_11 + 3] [i_3 + 2])) : (((unsigned long long int) var_0))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_34 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_3] [i_4] [i_4] [i_5] [i_5] [i_12])) % (((/* implicit */int) (unsigned char)107))));
                        var_35 = ((/* implicit */signed char) arr_42 [i_3 + 2] [i_4]);
                        var_36 = ((/* implicit */unsigned long long int) var_10);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        arr_46 [i_3] [i_5] [i_5] [i_13] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3] [i_3 + 2]))) : (arr_38 [i_3] [i_3] [(unsigned char)1] [i_3 + 2]));
                        var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)79))));
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-44))));
                            arr_51 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) arr_10 [i_3 + 1] [i_3]);
                            arr_52 [i_3] [i_3] [i_5] [i_13] [i_14] = ((/* implicit */unsigned long long int) (short)-29554);
                            arr_53 [i_14] [i_13] [i_5] [i_4] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)17] [i_5] [i_4])) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_3 + 1] [i_3 - 1] [i_3 - 2] [i_3 + 1])))));
                        }
                        for (short i_15 = 3; i_15 < 9; i_15 += 4) 
                        {
                            arr_57 [i_3 + 1] [i_15] = var_1;
                            arr_58 [i_15] [i_4] [i_13] [i_13] = ((/* implicit */unsigned long long int) arr_2 [i_13]);
                            arr_59 [i_15 - 1] [i_3] [i_15] [i_5] [i_15] [i_4] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_15 + 2] [i_15 + 2] [i_15 + 1]))) - (var_1));
                            arr_60 [i_3] [i_3] [i_3] [(unsigned short)2] [i_15] [i_3] [3ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_4]))));
                        }
                        for (short i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            arr_63 [i_16] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_16] [i_13] [i_5] [i_4] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_4] [i_3] [i_3] [i_16] [i_16] [i_3]))) : (arr_61 [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 1])));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_39 [i_3] [i_3 + 2] [i_16])) >= (arr_62 [i_3] [i_3 - 1] [i_13] [i_13] [i_16] [i_16] [i_16])));
                        }
                        for (long long int i_17 = 3; i_17 < 10; i_17 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 + 1]))));
                            arr_67 [i_13] [i_17] [i_17] [i_17 - 1] [i_5] [i_3 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                            arr_68 [i_17] [i_13] [i_5] = ((/* implicit */signed char) arr_37 [9LL] [i_4] [i_4] [10ULL] [i_13] [i_17]);
                        }
                        var_41 = ((unsigned long long int) (unsigned char)253);
                        arr_69 [i_3 + 1] [i_3] [i_3] [i_3] [(unsigned short)0] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_3 + 1] [i_5])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_48 [i_3] [i_3] [i_4] [i_4] [i_5] [i_5] [i_13])))))));
                    }
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            var_42 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)79))));
                            var_43 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_65 [i_4] [i_18] [i_5] [i_4] [i_3]) : (arr_65 [i_19] [i_18] [i_5] [i_4] [i_3])));
                            var_44 = var_5;
                            var_45 *= ((/* implicit */unsigned char) ((unsigned long long int) var_12));
                        }
                        for (unsigned long long int i_20 = 2; i_20 < 7; i_20 += 4) 
                        {
                            arr_77 [i_3] [i_4] [i_4] [i_4] [i_5] [i_18] [i_20] = ((/* implicit */short) ((unsigned char) 3943248348509437514ULL));
                            var_46 = ((/* implicit */unsigned short) var_13);
                        }
                        for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 4) 
                        {
                            var_47 = ((/* implicit */short) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_20 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_21 - 2] [i_21]))));
                            arr_81 [i_3 + 1] [i_4] [i_3 + 1] [i_18] [i_18] = ((/* implicit */unsigned long long int) (signed char)15);
                            var_48 ^= ((/* implicit */short) ((arr_36 [i_3 + 2] [i_21] [i_21 + 1] [i_21 + 1]) / (arr_36 [i_3 + 2] [i_18] [i_21 + 1] [i_21 + 1])));
                            var_49 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_21] [i_21 - 2] [i_21 + 1] [i_21 + 1] [i_21 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_72 [i_3 + 2] [i_21 - 1])));
                        }
                        arr_82 [i_3] [i_5] [i_5] = ((/* implicit */signed char) var_1);
                    }
                }
            }
        } 
    } 
}
