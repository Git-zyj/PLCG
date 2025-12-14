/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118137
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
    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) -442746311)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16463))) : (8477014071813691737ULL)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_4);
        arr_4 [i_0] |= ((/* implicit */long long int) arr_1 [1ULL] [6ULL]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [20ULL] [20ULL] [i_1] [i_5])) ? (((/* implicit */int) arr_12 [i_2] [i_4] [i_2])) : (((/* implicit */int) arr_21 [i_5] [i_2] [i_1] [i_2] [i_1]))))), (((var_11) ^ (((/* implicit */unsigned long long int) arr_13 [i_2] [i_4] [i_2] [i_2])))))) == (((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_20 [i_2]))))));
                                arr_23 [i_2] = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (arr_9 [i_1] [i_1] [2LL])));
                    arr_24 [i_2] [(signed char)14] [i_1] [i_2] = ((/* implicit */signed char) (+(arr_18 [i_1] [i_2] [i_3] [i_3] [i_1] [i_3])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    arr_31 [i_7] [i_6] [(signed char)1] [i_7] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1]);
                    arr_32 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_6] [i_7])) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_7] [i_7] [i_7] [i_7] [11LL])) != (var_9))))) : (min((arr_19 [(short)2] [(short)2] [i_1] [(short)2] [i_1]), (arr_19 [i_1] [i_7] [i_7] [i_7] [i_1])))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                arr_38 [i_1] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_14 [4] [i_8] [i_6] [i_6]);
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_8 [i_6] [i_9]) + (9223372036854775807LL))) << (((var_7) - (1453993497)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_6] [i_1])) ? (var_7) : (((/* implicit */int) arr_15 [i_9] [i_9] [i_9]))))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [(short)20] [i_7] [i_8] [i_9])) ? ((+(((/* implicit */int) arr_22 [i_9])))) : (((/* implicit */int) arr_10 [19ULL] [19ULL] [i_9]))))) : (((unsigned long long int) arr_15 [i_7] [i_8] [i_9]))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_29 [i_6] [i_6]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) 6ULL);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (long long int i_11 = 3; i_11 < 24; i_11 += 3) 
                        {
                            {
                                arr_44 [i_10] [i_10] [i_7] [i_10] = var_11;
                                arr_45 [i_7] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(min((arr_27 [i_1] [i_6]), (((/* implicit */long long int) arr_15 [i_1] [i_6] [11ULL]))))))) == (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 9223372036854775805LL)) : (arr_40 [i_11 - 3] [i_7] [i_7] [i_11 - 2])))));
                                var_18 = ((/* implicit */long long int) max((var_18), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_8 [i_1] [i_1]), (((/* implicit */long long int) (unsigned short)56619)))))))), (((((/* implicit */long long int) (~(var_2)))) / (arr_19 [i_1] [i_6] [i_7] [i_10] [i_11])))))));
                                arr_46 [i_1] [i_7] [i_7] [i_10] [i_11] = ((/* implicit */unsigned char) arr_14 [i_11] [i_7] [i_6] [6LL]);
                                arr_47 [i_1] [i_6] [i_7] [i_7] [i_11] = ((((/* implicit */_Bool) min((((var_1) << (((8477014071813691751ULL) - (8477014071813691723ULL))))), (((/* implicit */unsigned long long int) ((((arr_8 [i_1] [i_10]) + (9223372036854775807LL))) >> (((arr_8 [i_1] [i_1]) + (6936118172102578994LL))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (arr_8 [i_7] [i_7])))) : (min((((/* implicit */unsigned long long int) arr_26 [i_11 + 1])), (((((/* implicit */_Bool) arr_29 [i_7] [(signed char)2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [3LL] [i_6] [i_7] [i_10] [3ULL] [3LL] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)59974)) ? (((/* implicit */int) (signed char)127)) : (1584314968)))));
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            for (unsigned short i_14 = 2; i_14 < 17; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                        {
                            arr_62 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_6 [i_12]), (((/* implicit */unsigned long long int) var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_1))) / (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_39 [(unsigned short)13]) : (var_2))))))));
                            arr_63 [i_12] [i_14] [i_12] [i_12] [(unsigned char)14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_58 [i_12] [i_12] [i_14] [i_12])) ? (arr_35 [i_12] [7LL] [(unsigned short)13] [i_14] [(signed char)24] [(unsigned short)13]) : (var_1))) - (((/* implicit */unsigned long long int) ((arr_27 [i_12] [i_14]) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_12] [i_13] [i_14 + 2]))))))))) ? (((((/* implicit */int) arr_21 [0LL] [i_14] [0LL] [i_15] [i_16])) + ((-(((/* implicit */int) arr_17 [i_13] [i_14])))))) : (((((int) arr_53 [i_13] [i_12])) - ((+(((/* implicit */int) arr_56 [i_16] [i_15] [i_13] [i_12]))))))));
                            var_20 = ((((/* implicit */_Bool) var_6)) ? (max((max((18446744073709551615ULL), (var_11))), (arr_36 [i_12] [16LL] [i_14] [(signed char)0] [i_16]))) : (arr_28 [i_13]));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) var_10))) - (((((/* implicit */_Bool) arr_13 [i_12] [i_13] [(unsigned short)18] [i_12])) ? (arr_66 [i_17] [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))));
                            arr_67 [1ULL] [14ULL] [i_14] [i_15] [i_14] = var_9;
                            arr_68 [(signed char)0] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_64 [15] [i_14] [(unsigned short)10] [i_14] [i_15] [(unsigned short)10])) : (((/* implicit */int) arr_7 [i_14 + 2]))))) < (((((/* implicit */_Bool) 18083534493171435099ULL)) ? (((/* implicit */unsigned long long int) 850517366)) : (18355824328144766015ULL)))));
                        }
                        var_22 += ((arr_27 [i_13] [i_13]) >= (((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_12]))))));
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((-(var_6))), (((/* implicit */unsigned long long int) (unsigned short)5561)))))));
                        arr_69 [i_12] [i_12] [i_14] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_65 [i_15] [i_13] [i_14 - 2] [i_15] [i_13]), (((/* implicit */long long int) arr_34 [i_14] [i_14] [i_12]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_55 [8ULL] [i_14] [i_15])) || (((/* implicit */_Bool) var_9))))))))));
                    }
                } 
            } 
        } 
        arr_70 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_7 [i_12]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_12] [i_12] [i_12])) ? (arr_39 [i_12]) : (((/* implicit */int) arr_51 [i_12] [i_12]))))) : (((((/* implicit */_Bool) (short)-16463)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31255))))))) : (((((/* implicit */_Bool) var_10)) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12] [i_12] [i_12] [i_12])))))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16463))) : (14309875629006851681ULL)))) ? (min((((((/* implicit */_Bool) (short)16463)) ? (((/* implicit */unsigned long long int) var_7)) : (13ULL))), ((+(var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_11))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    var_25 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 7220577374461680797LL)) : (15415038371524089667ULL)))) ? (min((((/* implicit */int) var_4)), (var_2))) : (((/* implicit */int) ((unsigned short) var_0))))));
}
