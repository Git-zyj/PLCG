/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134012
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
    var_14 = (-(((((/* implicit */_Bool) var_6)) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [18])) : (((/* implicit */int) arr_2 [1LL]))));
        arr_4 [i_0] [11U] = ((/* implicit */unsigned long long int) var_11);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) ((45073589U) ^ (1696846988U))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            {
                arr_9 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) (+(((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_2 [i_1])))) >> ((((-(arr_7 [11LL] [(unsigned char)17] [i_1]))) - (1837920932U)))))))) : (((/* implicit */signed char) (+(((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_2 [i_1])))) >> ((((((-(arr_7 [11LL] [(unsigned char)17] [i_1]))) - (1837920932U))) - (4032190151U))))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_15 [i_1] [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_7))))) ? (-490392710) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)-12)))))))) ? (((((/* implicit */_Bool) arr_14 [10U] [10U] [10U])) ? ((-(((/* implicit */int) arr_2 [(unsigned char)5])))) : (((((/* implicit */_Bool) 2236035538U)) ? (arr_14 [i_1] [i_1] [i_4]) : (((/* implicit */int) (signed char)-36)))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [14] [14] [i_3])), (var_0)))) || (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (arr_7 [i_1] [i_1] [i_3]))))))));
                            arr_16 [i_1] [i_2] [(unsigned short)0] [i_1] [i_4] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((765076375U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [1U] [1U]))))))) == (((unsigned int) arr_14 [i_1] [i_1] [10U]))))));
                            arr_17 [i_4] [i_1] [i_3] [9] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_12 [i_3] [i_3])), (arr_13 [17LL] [(signed char)16] [15] [(unsigned char)9]))) % (arr_1 [i_3] [i_4])))) ? (min((arr_11 [i_1] [(unsigned char)6] [i_3] [i_4]), (((/* implicit */long long int) ((arr_2 [i_4]) ? (arr_6 [(unsigned char)19]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (4001087464U)))) % (((long long int) -558363182))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_22 [(_Bool)1] [i_2] [i_1] [(unsigned short)9] = ((/* implicit */long long int) (signed char)66);
                            var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) -1750665856)) ? (904264805U) : (2489741431U))) & (((66846720U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57002)))))))) & (((((6378907239831005064LL) & (((/* implicit */long long int) -2111294451)))) ^ (((arr_11 [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1]) & (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */signed char) (!((!(((((/* implicit */_Bool) arr_7 [i_5] [5] [i_1])) && (((/* implicit */_Bool) var_3))))))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_7]), (arr_0 [i_7]))))));
                                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))))), (min((((/* implicit */unsigned long long int) max(((signed char)-95), ((signed char)66)))), (((((/* implicit */_Bool) arr_20 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (9861025083660461205ULL)))))));
                                arr_25 [i_1] [i_7] [i_5] [i_5] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 65011712ULL)) || (((/* implicit */_Bool) 1019708486U)))))) == (((((/* implicit */unsigned int) ((/* implicit */int) ((1276814500U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) + (max((((/* implicit */unsigned int) arr_23 [i_2] [i_7])), (arr_13 [i_1] [i_2] [i_2] [14LL])))))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                            {
                                arr_28 [11] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) (((((_Bool)1) && (((/* implicit */_Bool) 2147483629)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_1] [(unsigned char)7] [(unsigned char)7] [i_6])) < (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_2 [i_2])))))))));
                                var_20 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) (+(arr_14 [i_8] [5ULL] [i_5])))) + (((4214747485U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_6])))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_27 [i_1] [i_1] [i_1] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [13U] [i_1]))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17642109091911880229ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))))) ? ((+(((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [(unsigned char)15])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [(signed char)3])), (var_13)))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                            {
                                arr_31 [i_1] [i_2] [11U] [i_2] [i_1] = ((/* implicit */unsigned int) ((arr_20 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (80219811U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [10U] [10U] [10U] [i_9]))))))));
                                arr_32 [i_5] [(signed char)12] [(signed char)4] [i_5] [8U] [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [2U] [i_5] [2U] [2U])) - (((/* implicit */int) ((unsigned char) arr_10 [16LL] [i_6] [i_6] [i_2])))));
                                var_23 ^= arr_5 [i_1] [i_9];
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (unsigned char)190)))) ? (var_12) : (max((((/* implicit */unsigned long long int) var_10)), (var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_9)) - (49)))))) ? (((((/* implicit */_Bool) 479738291)) ? (((/* implicit */int) (unsigned short)31000)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (signed char)78)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_8)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 524288U)) ? (var_6) : (8717120384275952549ULL)))))));
    /* LoopSeq 2 */
    for (signed char i_10 = 4; i_10 < 9; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_24 [i_10 + 1] [i_11] [i_10] [7U] [i_11] [i_11] [(_Bool)1]), (arr_24 [i_10 + 1] [i_10 + 1] [i_11] [(signed char)2] [i_11] [i_10 + 1] [i_10 + 1]))))));
            var_26 = ((/* implicit */short) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19)))));
            var_27 = ((/* implicit */int) ((max((((((/* implicit */_Bool) -961672390909982773LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [17LL] [i_10] [i_10] [i_10]))) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 29U)) ? (((/* implicit */int) (signed char)-96)) : (623621039)))))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_10] [i_10]))))), (max((((/* implicit */long long int) arr_24 [(_Bool)1] [(signed char)5] [9U] [16U] [(unsigned char)3] [(signed char)5] [9U])), (arr_20 [i_10]))))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (int i_14 = 1; i_14 < 10; i_14 += 3) 
                {
                    {
                        arr_46 [i_10] [i_10] [2ULL] = ((/* implicit */unsigned int) arr_45 [i_10] [i_13] [i_13] [i_10] [i_10]);
                        arr_47 [i_10] [(unsigned char)10] [(unsigned char)10] [i_10] [10U] [(unsigned char)10] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */int) (unsigned short)63811)) ^ (var_8))) | ((~(((/* implicit */int) arr_45 [i_10] [(unsigned char)2] [i_12] [i_10] [i_10])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)-20), ((signed char)-122)))) ? ((~(1006632960U))) : ((~((~(3288334339U)))))));
                        arr_54 [i_12] [4] [i_12] [12LL] [i_10] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_10] [i_10] [i_12] [i_10]) ? (((/* implicit */unsigned long long int) arr_7 [i_12] [i_12] [i_12])) : (arr_38 [1U] [8ULL] [8ULL])))) ? (((((/* implicit */_Bool) arr_11 [i_10] [2U] [i_10] [i_10])) ? (((/* implicit */int) arr_34 [5] [i_12])) : (((/* implicit */int) arr_8 [i_12] [i_12])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-112)), (arr_45 [i_10] [i_12] [0ULL] [i_12] [i_16]))))))) ? (((/* implicit */int) max((arr_48 [i_10 + 4] [i_10 + 4] [i_15 + 2] [(unsigned char)1]), (arr_48 [i_10 + 4] [5U] [i_15 + 2] [5U])))) : (((((/* implicit */int) (unsigned short)63837)) / (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_44 [i_10 - 2] [i_10 - 1] [i_10 + 1] [5U]) * (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32001)) / (479738287)))) : (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) / (arr_18 [i_10] [i_10] [i_10]))), (((/* implicit */long long int) ((arr_51 [i_10] [(_Bool)1] [i_10] [(unsigned short)0]) / (arr_6 [i_10]))))))));
        arr_55 [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)-104))))))) != ((-((-(arr_18 [i_10] [i_10] [i_10])))))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            for (unsigned int i_18 = 1; i_18 < 10; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 10; i_19 += 3) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            {
                                arr_65 [10ULL] [7] [i_10] [i_10] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30651))) + (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1006632973U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)69))))) % (((((/* implicit */_Bool) 11U)) ? (arr_1 [(signed char)3] [i_10]) : (4294967288U)))))));
                                arr_66 [i_20] [i_10] [i_18] [i_10] [i_10] = ((/* implicit */int) ((arr_10 [i_20] [i_10] [i_10] [9ULL]) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [6U] [6U]))) - (7LL)))) ? (((-7681298102742085761LL) / (((/* implicit */long long int) 1870094344U)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) * (1650644094U)))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_52 [i_10 - 4])))))));
                                var_30 = (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-90)) || (((/* implicit */_Bool) (+(arr_42 [i_10] [i_18] [i_18] [i_10]))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)-106)))) ^ ((~(arr_56 [(signed char)0] [(signed char)0]))))));
                    arr_67 [i_10] [i_10] [i_10] [12ULL] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))))))) <= (arr_7 [i_18 + 1] [i_18 + 1] [(unsigned char)12]))))) >= (arr_6 [17])));
                }
            } 
        } 
        arr_68 [7LL] [i_10] = ((/* implicit */unsigned int) (+(10459585071759419562ULL)));
    }
    for (signed char i_21 = 4; i_21 < 9; i_21 += 3) /* same iter space */
    {
        arr_72 [i_21] [i_21] = max((((((((/* implicit */_Bool) 568989138)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (7681298102742085760LL))) % (((/* implicit */long long int) ((/* implicit */int) max(((signed char)70), ((signed char)104))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_24 [13U] [i_21] [i_21] [i_21] [(unsigned char)9] [i_21] [(unsigned char)19])) < (-1132230100))))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) : (15243090691721267293ULL)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_59 [(signed char)12] [i_21]))))) / (((((/* implicit */_Bool) arr_40 [i_21] [i_21 + 3] [i_21 + 2] [i_21 + 2])) ? (arr_40 [i_21] [i_21 + 3] [i_21 + 2] [i_21 + 2]) : (arr_40 [(unsigned char)2] [i_21 + 3] [i_21 + 2] [i_21 + 2])))));
        arr_73 [i_21] = ((/* implicit */signed char) min((((arr_13 [(signed char)0] [i_21] [i_21 + 3] [i_21]) & (arr_13 [i_21] [i_21] [i_21 + 3] [i_21]))), (((4294967287U) ^ (3719182042U)))));
    }
}
