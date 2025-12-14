/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159056
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_0)))) == (((/* implicit */int) ((((/* implicit */int) (short)6)) > (((/* implicit */int) var_7)))))))) >= (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6))) % (17818840677273922075ULL)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) ((12621347000157071635ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2])))))) ? (((((/* implicit */_Bool) (short)-8171)) ? (((arr_2 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (short)-8171)) ? (((/* implicit */unsigned long long int) var_8)) : (5825397073552479981ULL))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((627903396435629541ULL) % (12621347000157071633ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6)))));
                    arr_9 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (132120576U)))) ? (((/* implicit */int) ((17818840677273922075ULL) == (((/* implicit */unsigned long long int) 4294967295U))))) : (((/* implicit */int) (signed char)-1))))) == (((((/* implicit */_Bool) -1027305396)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6)) ? (4162846699U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))) : (((627903396435629541ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((1743417815) | (((/* implicit */int) var_9))))) * (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) <= (((((-1743417815) + (2147483647))) << (((((/* implicit */int) var_3)) - (27097)))))))))));
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)254)) ^ (((/* implicit */int) (unsigned char)177)))) << (((/* implicit */int) ((18029653403089611990ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [(_Bool)0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_3] [(unsigned short)6] [i_3])));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_4] [i_5])) && (((/* implicit */_Bool) arr_15 [i_4] [i_5])))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_4] [i_5])))) : ((((_Bool)1) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (var_8)))));
            arr_21 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61033))) : (arr_5 [i_5]))) <= (((arr_5 [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4])))))));
        }
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
        {
            arr_24 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) arr_14 [i_4] [i_4])))) < (((((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned char)173)))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61021))) == (2713244087U))))))));
            var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_6]))) < (arr_12 [i_4]))) ? (((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))));
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_6]))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (798273231U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)797)) : (((/* implicit */int) (unsigned short)34793)))) : (((((/* implicit */_Bool) 2308906936U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [(short)10] [i_6]))))))));
            /* LoopNest 3 */
            for (signed char i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                for (signed char i_8 = 1; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_32 [i_4] [i_6] [i_8] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_30 [i_7 - 2]) <= (arr_30 [i_7 - 1]))))) > (((((/* implicit */_Bool) 1743417815)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34783))) : (arr_30 [i_7 + 2])))));
                            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) var_9)))) / (((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))));
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)30754)) : (((/* implicit */int) (unsigned short)61017))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32763)) <= (-1520747075)))) : (((/* implicit */int) ((arr_22 [i_8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ^ (((/* implicit */int) ((2147483647) >= (((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_8 - 1] [i_8 + 1])))) >> (((((((/* implicit */int) var_7)) - (((/* implicit */int) arr_15 [i_8 - 1] [i_8 - 1])))) - (26631)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (((((/* implicit */int) arr_14 [i_4] [i_10])) & (((/* implicit */int) (short)-12721)))) : (((((/* implicit */int) arr_19 [i_4] [i_4] [i_4])) / (((/* implicit */int) arr_14 [i_4] [i_10])))))))));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_4])) ? (arr_30 [(short)0]) : (arr_30 [i_11])))) ? (((arr_30 [i_10]) / (arr_30 [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1351178401)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))));
                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (4294967281U)))) >= (((((/* implicit */int) arr_38 [i_4] [i_4] [i_4])) << (((((/* implicit */int) var_6)) - (21826)))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_12] [i_4] [i_4]))) : (3585167513U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_11])) ? (((/* implicit */int) (unsigned short)31643)) : (((/* implicit */int) var_4)))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_10] [i_13] [(unsigned short)2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)57858))))) * (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) (short)31708))))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_4] [i_10] [i_13] [i_13])) - (((/* implicit */int) (_Bool)0)))))));
                            arr_46 [i_4] [i_10] [8] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_12] [i_4]))))) ? (((((/* implicit */_Bool) arr_42 [i_11] [i_13])) ? (((((/* implicit */_Bool) (short)-21092)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2123905108U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10]))) : (arr_2 [i_13])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_10] [(short)12])))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 2; i_15 < 16; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        {
                            arr_55 [i_4] [i_4] [8U] [i_15] [(_Bool)1] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_30 [i_16])))) ? (((/* implicit */int) ((arr_44 [i_16] [i_16] [i_16] [i_15 - 2] [i_16] [8U] [i_15]) > (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (unsigned short)4518)) : (((/* implicit */int) arr_39 [i_4] [i_16] [i_4] [i_15 - 1] [i_16] [i_4]))))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)103)) ? (136902082560ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10848))))) == (((/* implicit */unsigned long long int) ((2744445685U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57844))))))));
                            var_26 &= ((/* implicit */short) ((((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_42 [i_10] [i_4]) <= (((/* implicit */unsigned int) var_8)))))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)58699)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_56 [i_14] [i_4] [i_4] = ((((/* implicit */int) ((arr_30 [i_14]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) <= (((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_0)))));
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
            {
                var_27 -= ((/* implicit */short) ((arr_47 [i_4] [i_10] [i_10]) ? (((/* implicit */int) ((arr_33 [i_4] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_4] [i_10] [i_17])))))) : (((/* implicit */int) var_9))));
                arr_60 [i_17] [i_10] [i_10] [(unsigned short)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_10] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (signed char i_18 = 2; i_18 < 15; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            arr_68 [i_4] [i_10] [i_10] [(short)2] [i_18] [i_18] [i_19] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)19086)) << (((((/* implicit */int) arr_36 [i_18 + 3] [i_18] [i_18 - 2] [i_10])) - (62656)))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2084)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_59 [i_4] [i_17] [i_18 - 1] [i_19])) : (((/* implicit */int) (short)2084))));
                            arr_69 [i_4] [i_10] [i_17] [i_18] [17] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) == (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_10] [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_61 [i_4] [i_4] [i_4] [i_4]))))) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) 8796059467776ULL)) ? (arr_5 [i_10]) : (arr_5 [i_10]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_10]))) ^ (4294967295U)))));
        }
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)56)) != (((/* implicit */int) (unsigned short)37881)))) ? (((/* implicit */int) arr_7 [i_4] [i_4] [(unsigned short)14] [i_4])) : (((arr_51 [i_4] [(short)5]) ^ (((/* implicit */int) arr_31 [i_4] [6ULL] [i_4] [i_4] [i_4] [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((2246132533U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) == (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (unsigned short)57858))))))))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) 2495460780U)) : (arr_12 [i_4])))));
        var_32 = ((/* implicit */unsigned long long int) ((((var_0) ? (2246132533U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((9013184737584915452ULL) > (((/* implicit */unsigned long long int) 1550521610U))))))));
    }
    var_33 = ((/* implicit */unsigned int) var_5);
    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) | (((((/* implicit */int) var_0)) & (((/* implicit */int) var_4)))))) << (((/* implicit */int) var_0)))))));
}
