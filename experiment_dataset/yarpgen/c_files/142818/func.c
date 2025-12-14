/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142818
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned char)57);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) arr_11 [i_1] [i_0 - 2] [i_1] [i_1] [i_1 + 1])) != (((/* implicit */int) arr_14 [17LL] [i_0 - 1] [i_1] [i_1 + 1] [i_1])))))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((signed char) (unsigned char)60)))));
                            arr_15 [i_3] [19U] [19U] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_7);
                            arr_16 [(signed char)9] [1LL] [2U] [i_3] [i_4] |= ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)194)) & (((/* implicit */int) var_6))))));
                            var_22 += ((/* implicit */unsigned char) arr_5 [i_0] [i_1 - 1]);
                        }
                    } 
                } 
            } 
            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) ((_Bool) var_11)))));
        }
    }
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_22 [i_5] |= ((/* implicit */unsigned short) arr_13 [i_5] [i_5] [15LL] [i_5] [i_6] [i_6] [i_6 - 1]);
            var_24 = ((/* implicit */int) ((arr_2 [i_5] [(_Bool)0]) >= (max((arr_6 [i_5] [i_5]), (((/* implicit */long long int) ((signed char) arr_17 [11ULL] [i_6])))))));
            arr_23 [i_5 + 1] [16ULL] = ((/* implicit */signed char) -1011799520);
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                arr_29 [i_8] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) min((((arr_2 [(unsigned short)13] [i_8]) ^ (arr_2 [i_5 - 1] [i_8]))), (((/* implicit */long long int) var_5))));
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 20; i_10 += 4) 
                    {
                        arr_37 [(signed char)5] [i_9] [(signed char)4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_5])) || (((/* implicit */_Bool) arr_3 [i_8] [i_10 - 2]))))) | (((/* implicit */int) arr_25 [i_5 - 1])))))));
                        arr_38 [i_9] [i_9] [i_7] [i_9] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) 4294967295U)) ? (arr_2 [i_8] [i_10]) : (((/* implicit */long long int) var_17)))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_7])))))))));
                    }
                    arr_39 [i_5] [i_5] [i_9] [(short)10] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_21 [i_9] [i_7 - 1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)65), ((signed char)-100))))) : (min((((/* implicit */long long int) var_0)), (268435455LL))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-29840)) - (((/* implicit */int) (_Bool)0)))))));
                    arr_40 [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-31305), (((/* implicit */short) var_3))))) ? (max((((/* implicit */unsigned int) (unsigned short)64370)), (0U))) : (((/* implicit */unsigned int) (+(var_15))))))) : ((~((~(arr_7 [i_7 - 1] [i_5 - 1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_25 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) 4290772992U)))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (((~(((/* implicit */int) arr_11 [i_5] [i_7] [i_8] [i_5] [0U])))) != (((/* implicit */int) arr_35 [i_5] [i_7] [i_5] [i_8] [i_11])))))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(arr_28 [i_5 - 1] [i_5 - 2] [i_7 - 1] [(unsigned short)9]))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_5] [i_9] [i_8] [i_9] [i_12] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_5] [i_5 + 1] [i_7 - 1])) != (((/* implicit */int) arr_21 [i_5] [i_5 - 1] [i_7 - 1])))) ? (((((/* implicit */int) arr_21 [3] [i_5 - 1] [i_7 - 1])) | (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) arr_21 [i_5] [i_5 - 1] [i_7 - 1]))))));
                        arr_47 [i_9] = ((/* implicit */_Bool) max((var_13), ((signed char)0)));
                        var_28 = ((/* implicit */short) max((min((arr_9 [i_5] [i_5 + 1] [i_7 - 1]), (((/* implicit */long long int) (unsigned short)42287)))), (arr_9 [i_5] [i_5 - 2] [i_7 - 1])));
                    }
                }
                for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        arr_54 [i_13] [i_13] [i_8] [i_7] [i_13] = (i_13 % 2 == 0) ? (((/* implicit */unsigned int) ((max((var_17), (((((/* implicit */int) (signed char)-30)) ^ (((/* implicit */int) (unsigned char)199)))))) << (((((/* implicit */int) arr_35 [i_5] [i_7] [i_8] [i_13] [i_14])) - (30)))))) : (((/* implicit */unsigned int) ((max((var_17), (((((/* implicit */int) (signed char)-30)) ^ (((/* implicit */int) (unsigned char)199)))))) << (((((((/* implicit */int) arr_35 [i_5] [i_7] [i_8] [i_13] [i_14])) - (30))) - (126))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((_Bool) (+(max((arr_7 [i_5 - 1] [(short)4]), (((/* implicit */long long int) (_Bool)1))))))))));
                        arr_55 [i_5] [i_7] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) min((max((var_2), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) ((arr_18 [i_8] [i_13]) == (((/* implicit */long long int) 2813740728U)))))))) + (((/* implicit */int) arr_20 [i_5] [(_Bool)1] [i_13]))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_30 *= ((/* implicit */unsigned short) var_14);
                        var_31 += ((/* implicit */short) ((unsigned short) (_Bool)1));
                        var_32 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_58 [20LL] [i_7] [i_5] [i_13] [i_7]), (var_16)))))))));
                        arr_59 [i_5] [i_7 - 1] [i_13] [i_13] [i_15] [(_Bool)1] [i_13] = ((((((/* implicit */_Bool) max((arr_17 [i_5] [i_15]), (((/* implicit */unsigned long long int) arr_3 [i_5 - 1] [i_5 - 1]))))) ? (arr_10 [i_7 - 1] [i_7] [i_8] [(unsigned short)19] [8LL]) : (((/* implicit */long long int) ((/* implicit */int) var_19))))) << (((((long long int) max((var_0), ((signed char)-3)))) + (3LL))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        arr_62 [i_13] [i_7 - 1] [i_7 - 1] [i_13] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_5] [i_7 - 1] [(_Bool)1] [i_13] [i_13] [i_16])) && (((/* implicit */_Bool) arr_12 [i_7 - 1] [i_7 - 1]))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [7U]))) >= (arr_12 [i_13] [i_7]))))));
                    }
                    var_34 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) -98081018076529674LL)) ? (arr_18 [i_5 - 2] [i_7 - 1]) : (arr_18 [(_Bool)1] [i_8])))));
                }
            }
            /* LoopSeq 4 */
            for (unsigned short i_17 = 1; i_17 < 18; i_17 += 3) /* same iter space */
            {
                var_35 ^= ((/* implicit */unsigned short) arr_28 [i_5] [i_7] [(signed char)2] [(signed char)2]);
                arr_65 [i_17] = ((/* implicit */_Bool) max((arr_6 [i_7] [i_17]), (arr_2 [(unsigned short)8] [i_17])));
                arr_66 [i_5] [i_7 - 1] [i_17] = ((/* implicit */signed char) (+((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            }
            for (unsigned short i_18 = 1; i_18 < 18; i_18 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_12))));
                arr_70 [i_5] |= ((/* implicit */short) (((((-(arr_7 [i_5] [i_7 - 1]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_69 [i_18 + 4] [i_7 - 1] [i_5 - 1])) - (17499)))));
            }
            for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                var_37 -= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) (signed char)30)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) (unsigned short)1146))));
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_24 [i_7]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_32 [i_19] [i_7 - 1] [i_7] [i_5] [i_5]))))))) ? (var_9) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))))));
            }
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 3; i_21 < 18; i_21 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                    {
                        arr_81 [i_5 + 1] [i_7 - 1] [i_20] [(signed char)2] [i_20] = ((/* implicit */long long int) ((unsigned int) arr_35 [i_5] [i_7] [i_20] [i_5] [i_22]));
                        arr_82 [i_5] [i_5] [i_20] [i_21] [i_22] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_22] [i_22] [i_21 + 2] [i_5 + 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_44 [i_22] [i_21 + 1] [i_21 - 3] [i_5 - 2] [19U])))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        arr_85 [i_21] = arr_77 [i_5] [i_5] [i_20] [(unsigned short)13] [i_7];
                        arr_86 [18] [(unsigned char)19] [11U] = ((/* implicit */unsigned long long int) arr_35 [i_5] [6LL] [i_20] [i_5] [(_Bool)1]);
                    }
                    for (short i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        arr_90 [i_5] [i_5] [i_5] [i_21] [(short)6] = arr_6 [i_5] [i_7];
                        arr_91 [i_5] [i_7] [i_20] [i_21] [i_21] [i_21] [i_24] = ((/* implicit */signed char) arr_9 [i_24] [i_7] [i_7]);
                        arr_92 [i_24] [i_20] [i_20] [(_Bool)1] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_73 [i_21 - 2] [i_7 - 1])))));
                        var_39 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_89 [10] [10LL] [11LL] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) : (((/* implicit */int) var_8)))))));
                    }
                    for (short i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) / ((-9223372036854775807LL - 1LL)))))) ? (((/* implicit */int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned short)12288)))) < (((/* implicit */int) var_19))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_77 [i_5 + 1] [i_21 - 3] [i_7 - 1] [i_5 + 1] [i_21 - 3])))))));
                        arr_95 [i_21] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)48))) ? (((/* implicit */int) arr_26 [(unsigned short)18])) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (arr_80 [i_25] [i_25] [i_21 + 4] [i_20] [6] [6])))), (max((((/* implicit */short) arr_77 [i_20] [i_5] [i_20] [i_21] [i_21])), (var_8))))))));
                    }
                    arr_96 [i_5] [i_7] [i_5] [i_21] [i_21] = ((/* implicit */unsigned short) var_7);
                }
                for (long long int i_26 = 0; i_26 < 22; i_26 += 3) 
                {
                    arr_101 [i_5] [i_7 - 1] [i_7 - 1] [i_20] [(signed char)15] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) ((unsigned short) arr_7 [i_5] [i_7]))))))));
                    arr_102 [i_5] [(short)11] [i_5] [i_5] = ((/* implicit */long long int) (~(2750130571U)));
                    arr_103 [i_26] [i_7 - 1] [i_26] [i_26] [i_26] = ((/* implicit */long long int) 261082452);
                    arr_104 [i_7] = ((/* implicit */unsigned int) (+((~(arr_60 [i_5] [i_5])))));
                }
                var_41 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_19 [i_7] [i_20])), (arr_0 [i_5 - 1])))) && (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_13 [i_5 - 1] [i_7] [i_20] [i_20] [i_20] [i_20] [i_5]))))))) ? (max((((/* implicit */unsigned int) (signed char)12)), (3152794945U))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_33 [11LL] [13LL] [i_20] [i_20] [i_20]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7])))))) / (((/* implicit */int) arr_35 [i_5 + 1] [i_7] [i_7] [i_5] [(_Bool)1])))))));
            }
            arr_105 [i_5 - 2] [i_5] [i_5] = ((/* implicit */_Bool) (-(max((max((338427826), (((/* implicit */int) arr_67 [i_5] [i_7 - 1] [i_7] [i_7])))), ((~(((/* implicit */int) var_16))))))));
        }
        var_42 = ((/* implicit */_Bool) (unsigned short)35775);
        arr_106 [i_5 - 1] [i_5 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
        arr_107 [i_5] [i_5 + 1] = ((/* implicit */signed char) arr_50 [i_5] [i_5]);
        arr_108 [i_5] = ((/* implicit */int) 1481226578U);
    }
    var_43 = ((/* implicit */short) ((unsigned short) ((unsigned int) ((unsigned char) 4194303U))));
    var_44 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21967)) ? (((unsigned long long int) 18446744073709551615ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_45 = ((/* implicit */unsigned short) ((long long int) (~((~(((/* implicit */int) var_2)))))));
}
