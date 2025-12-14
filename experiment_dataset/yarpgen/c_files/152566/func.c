/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152566
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((1), (-4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)121)))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (8355992495600979461ULL))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) 8355992495600979468ULL))));
        var_15 = ((/* implicit */int) (signed char)-116);
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */int) ((18446744073709551608ULL) != (((((/* implicit */_Bool) -648476098)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))))), (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20253))))) : (((/* implicit */int) arr_1 [2]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) var_4);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
            {
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)28349))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_3] [i_3])) ? (((/* implicit */int) arr_0 [10ULL] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_1 - 1]))))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) arr_12 [i_3 - 2])) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_3] [(unsigned short)4] [i_5])) ? (1315018331496329495ULL) : (((/* implicit */unsigned long long int) 3901536232533176900LL)))) : (14293259073380184599ULL)))));
                        arr_18 [i_1] [i_1] [i_1] [i_1] [(signed char)9] = ((/* implicit */unsigned char) arr_1 [i_1]);
                        arr_19 [i_3] [i_3 + 3] [i_3 + 2] [i_3] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) 14ULL));
                    }
                    arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3 + 3] [i_4])) ? (arr_17 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) : (arr_14 [i_1] [i_1] [i_1] [i_1]))))));
                    var_18 += ((/* implicit */unsigned short) arr_9 [6LL] [i_2 - 1] [i_2 + 2] [i_2]);
                }
                arr_21 [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [1] [i_2] [i_2] [i_2] [i_3] [i_3])) / (((/* implicit */int) arr_12 [i_1 + 1]))));
                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_2] [i_2] [i_3])))))));
            }
            for (unsigned int i_6 = 3; i_6 < 9; i_6 += 2) /* same iter space */
            {
                var_20 ^= ((/* implicit */unsigned long long int) var_3);
                var_21 += ((/* implicit */unsigned short) (short)245);
            }
            arr_24 [i_1] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28373))) % (arr_3 [i_1] [(unsigned short)9])))));
            arr_25 [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) arr_15 [i_2] [i_1] [i_2 - 2] [i_2 + 1] [i_2 + 2]));
            arr_26 [i_1] [i_1] [2] = (unsigned char)77;
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) * (arr_14 [i_1 - 1] [(short)4] [i_2 - 3] [i_2 + 2])))));
        }
        for (unsigned int i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) (-(((-1) - (((/* implicit */int) (unsigned short)20236))))));
            arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((10528337631883934761ULL) != (((/* implicit */unsigned long long int) -9223372036854775785LL)))))));
            var_24 *= ((/* implicit */unsigned int) (signed char)121);
            var_25 = ((/* implicit */int) var_4);
        }
        for (unsigned int i_8 = 3; i_8 < 10; i_8 += 1) /* same iter space */
        {
            arr_33 [i_1] = ((/* implicit */short) (unsigned char)67);
            arr_34 [i_1 - 1] [i_8] [i_1] = ((/* implicit */unsigned int) arr_23 [i_1] [i_1] [i_8]);
        }
    }
    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_9])) || (((/* implicit */_Bool) min((((/* implicit */short) ((signed char) arr_37 [(unsigned char)8] [(unsigned char)8]))), (min((arr_7 [(signed char)2] [(signed char)2]), (((/* implicit */short) arr_27 [i_9]))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 2; i_10 < 11; i_10 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) var_11)))) & (0))))));
            arr_41 [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) 9223372036854775792LL)));
            /* LoopSeq 3 */
            for (signed char i_11 = 3; i_11 < 8; i_11 += 3) /* same iter space */
            {
                arr_46 [3ULL] [i_9] = ((/* implicit */unsigned char) (!(((arr_23 [i_10] [i_10] [i_11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3948)))))));
                arr_47 [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13736088792697858225ULL)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_17 [i_9] [i_9] [i_9 + 1] [i_9] [i_9]))) ^ (((/* implicit */unsigned long long int) ((1885646122) >> (((((/* implicit */int) arr_0 [i_10] [i_11])) + (29062))))))));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_0 [i_10 + 1] [i_10 - 1])))))) ^ (((((/* implicit */_Bool) -3901536232533176902LL)) ? (3993575391U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28875)))))));
                /* LoopSeq 3 */
                for (unsigned int i_12 = 2; i_12 < 9; i_12 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */short) (unsigned char)221);
                    arr_52 [i_11] = ((/* implicit */long long int) ((unsigned short) ((unsigned char) arr_30 [i_11] [1])));
                }
                for (unsigned int i_13 = 2; i_13 < 9; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((signed char) ((unsigned int) arr_17 [i_9] [(unsigned char)6] [i_11] [i_13 - 1] [(short)4]))))));
                        arr_57 [i_9] [i_14] [i_10 - 2] [i_11] [i_13] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-6011)))))));
                        var_31 = ((/* implicit */signed char) ((int) arr_51 [i_9] [i_10] [i_13 + 2] [(unsigned char)1]));
                        var_32 &= ((/* implicit */unsigned long long int) arr_6 [i_11]);
                    }
                    for (unsigned short i_15 = 1; i_15 < 9; i_15 += 3) /* same iter space */
                    {
                        arr_62 [i_15] [1] [i_11] [i_10] [i_9] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_1 [i_9])))));
                        var_33 ^= ((/* implicit */unsigned int) arr_15 [i_9] [i_10] [i_11 + 1] [i_13 + 3] [i_11 + 1]);
                        var_34 = ((/* implicit */int) max((var_34), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_9])) || (((/* implicit */_Bool) arr_58 [i_9 + 1] [i_10] [i_11] [i_13] [i_15 - 1])))))))));
                        arr_63 [(signed char)2] [i_10] [2] [i_11 - 2] [(signed char)2] [6LL] = ((/* implicit */unsigned short) 3901536232533176910LL);
                    }
                    var_35 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_10 - 2])) || (((/* implicit */_Bool) -3901536232533176900LL))));
                    var_36 &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_36 [i_9 - 1])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) var_9)))));
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) -4012608766320759429LL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -3901536232533176919LL)) : (arr_44 [i_9 - 1] [10ULL] [10ULL]))) : (((((/* implicit */_Bool) (unsigned char)242)) ? (1315018331496329495ULL) : (((/* implicit */unsigned long long int) 969911274))))));
                    arr_64 [i_13] [i_11] [5ULL] [5ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3901536232533176910LL)) ? (((((/* implicit */_Bool) arr_38 [i_9 - 1])) ? (arr_22 [(short)0] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3))))));
                }
                for (unsigned int i_16 = 2; i_16 < 9; i_16 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_0 [i_10] [i_9]))))))));
                    var_39 = ((/* implicit */unsigned int) -6);
                }
                arr_68 [9ULL] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_0);
            }
            for (signed char i_17 = 3; i_17 < 8; i_17 += 3) /* same iter space */
            {
                arr_71 [i_17] [i_17] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_9 - 1] [i_17 + 1] [i_17 + 1])) || (((/* implicit */_Bool) arr_40 [i_9 - 1] [i_17 + 4] [i_17]))));
                arr_72 [i_10 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)-26841))) ? (3188944002U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))));
                arr_73 [i_9 + 1] [i_9 + 1] [i_10] [i_9 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 17131725742213222121ULL)) ? (arr_56 [i_10 - 2] [i_10] [i_10 - 2] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            }
            for (signed char i_18 = 3; i_18 < 8; i_18 += 3) /* same iter space */
            {
                var_40 = ((((/* implicit */_Bool) arr_53 [i_9 - 1] [i_10] [i_10 - 2] [i_10 + 1])) ? (var_10) : (arr_53 [i_9 + 1] [i_9] [(signed char)0] [i_10 - 2]));
                var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) 3779902435U)) ? (arr_31 [i_9]) : (((/* implicit */unsigned int) var_7))))));
                var_42 = ((/* implicit */signed char) ((unsigned char) ((int) (unsigned char)24)));
            }
            var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-123)) ? (arr_50 [i_9] [i_9] [6ULL] [11ULL] [2LL] [i_9]) : (((/* implicit */int) arr_0 [i_9 - 1] [i_10 - 2]))));
        }
    }
    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) (!(((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
}
