/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147389
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -3156561616405626255LL)) ? (((/* implicit */int) var_6)) : (19448484)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4294965248U)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)15]))))))))))));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) 2047U);
                    arr_11 [(_Bool)1] [8U] [i_2] [i_1] = (-(((/* implicit */int) var_12)));
                }
                /* LoopSeq 2 */
                for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_8)) % (arr_9 [i_1] [i_4] [i_4] [i_4 - 2] [i_4 - 3] [i_4 - 2]))));
                    var_22 = ((/* implicit */long long int) var_3);
                }
                for (short i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_2] [i_5 + 2] = ((/* implicit */_Bool) (short)-32585);
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */int) (unsigned char)110)), ((+(((/* implicit */int) ((unsigned short) 18446744073709551615ULL))))))))));
                    arr_18 [i_1] [(_Bool)0] = ((/* implicit */signed char) (~(((/* implicit */int) (!((_Bool)1))))));
                }
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) (unsigned short)12425)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) var_2))))))));
                arr_19 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) (-(((arr_2 [i_1 + 1] [i_1 - 1]) ? (var_16) : (var_0)))));
            }
            arr_20 [i_1] = ((/* implicit */signed char) arr_16 [i_0] [i_0] [i_1] [12ULL] [i_1]);
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_25 = ((((/* implicit */_Bool) max(((short)31), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (short)5665))) : (((/* implicit */int) (signed char)57)));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) 4294965242U))), (7701743030043813458LL)));
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 19; i_8 += 3) 
                {
                    for (unsigned int i_9 = 4; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (+(2065U)));
                            var_27 = ((/* implicit */signed char) (unsigned char)87);
                        }
                    } 
                } 
                var_28 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)24)))), (27ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_36 [i_0] [i_6] [i_7] [(signed char)8] [i_11] = (_Bool)1;
                            arr_37 [(signed char)4] [i_6] [i_6] [i_7] [(_Bool)1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_5)))))) ^ (max((833253080U), (((/* implicit */unsigned int) (unsigned char)177)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_35 [i_0] [i_6] [i_7] [(short)0] [i_11])), (max((((/* implicit */unsigned char) (signed char)-94)), ((unsigned char)121))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (short)-6))));
                            var_30 = ((int) ((((/* implicit */_Bool) (-(2656451628927025818ULL)))) ? (18446744073709551601ULL) : (((unsigned long long int) arr_29 [i_0] [i_0] [i_0] [i_7] [i_0] [(unsigned char)6] [1ULL]))));
                        }
                    } 
                } 
            }
        }
        arr_38 [(signed char)7] [(signed char)7] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)37805))));
        var_31 |= ((/* implicit */int) 274877906943ULL);
    }
    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        var_32 = ((_Bool) min(((signed char)-1), (((/* implicit */signed char) arr_40 [i_12]))));
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) max((4294967288U), (((/* implicit */unsigned int) (signed char)-15)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_13 = 2; i_13 < 17; i_13 += 4) 
    {
        arr_44 [i_13] [i_13] = ((/* implicit */signed char) var_1);
        arr_45 [i_13] = ((/* implicit */unsigned short) 2538167775U);
        var_34 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)252)))) >> ((((-(((/* implicit */int) arr_13 [i_13 - 2] [i_13 + 2] [i_13] [(unsigned char)16])))) + (30)))));
        arr_46 [18ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-15556))))) & (((((/* implicit */_Bool) arr_42 [i_13 - 1])) ? (arr_42 [i_13 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))));
    }
    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 4) 
    {
        arr_49 [i_14] = ((/* implicit */unsigned long long int) arr_40 [i_14 + 1]);
        var_35 = ((/* implicit */unsigned short) ((short) ((long long int) var_11)));
        var_36 = min((min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), ((short)-2114)))), (arr_47 [i_14 + 1]))), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_39 [i_14] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16368))) : (arr_47 [i_14]))))));
        arr_50 [i_14] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_14 - 1]))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_15 = 2; i_15 < 11; i_15 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_16 = 1; i_16 < 13; i_16 += 2) 
        {
            for (unsigned char i_17 = 3; i_17 < 11; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_18 = 3; i_18 < 13; i_18 += 3) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 12; i_19 += 4) 
                        {
                            {
                                arr_64 [i_15] [i_16] [i_18] [i_18] [i_19] = ((/* implicit */unsigned long long int) min((arr_56 [i_16] [i_16 - 1]), (arr_56 [i_16] [i_16 - 1])));
                                arr_65 [i_15] [i_16] [i_15 - 2] [i_15 - 2] [i_15 + 2] = ((/* implicit */unsigned char) arr_28 [i_15 - 2] [i_16 + 1] [(_Bool)1] [2ULL] [i_16] [(unsigned char)6] [i_15]);
                            }
                        } 
                    } 
                    arr_66 [i_15] [i_15] [i_15] [i_16] |= ((/* implicit */unsigned short) max(((((_Bool)1) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_14)))))), (min(((_Bool)1), (arr_61 [i_15] [i_15 - 2] [i_16 - 1] [i_17 - 2] [i_17 + 3] [10] [i_17 + 1])))));
                    var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_13 [(_Bool)1] [i_16 + 1] [i_17] [(unsigned short)13]), (arr_23 [i_16] [i_16 + 1] [i_16 + 1])))), (var_7)));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 2; i_20 < 11; i_20 += 4) 
                    {
                        var_38 = ((/* implicit */short) min(((+(((/* implicit */int) arr_28 [i_15] [i_17 + 3] [i_20] [i_20] [i_16] [i_20 + 3] [i_20 + 1])))), (((((/* implicit */int) ((unsigned char) arr_61 [i_15] [i_16] [i_15] [i_20 - 1] [i_20] [i_17 + 2] [i_17 + 2]))) + (((/* implicit */int) var_10))))));
                        arr_69 [i_15] [i_16 + 1] [2LL] [i_16] [(signed char)0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-21))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_15 + 2] [i_17 + 1] [i_20 - 1]))) : (min((arr_53 [i_15] [i_16]), (((/* implicit */unsigned long long int) (short)24084)))))) << (((((/* implicit */int) (unsigned short)27731)) - (27688)))));
                    }
                    arr_70 [i_16] [i_16 - 1] [i_16] = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((unsigned char)138), ((unsigned char)91))))));
                }
            } 
        } 
        arr_71 [i_15] |= (signed char)39;
    }
    for (unsigned char i_21 = 2; i_21 < 11; i_21 += 4) /* same iter space */
    {
        var_39 |= ((/* implicit */_Bool) ((((/* implicit */int) var_13)) | ((~(((/* implicit */int) var_10))))));
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_21 + 3] [(_Bool)1]))))))) ? (max((((((/* implicit */int) (short)24084)) >> (((81271216719939113ULL) - (81271216719939093ULL))))), (((/* implicit */int) (unsigned short)27725)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_21 - 1] [i_21] [i_21 - 1] [i_21 - 2])), (arr_43 [i_21 + 3]))))));
        arr_74 [i_21] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2147481600U)) ? ((~(((/* implicit */int) (short)-340)))) : (((/* implicit */int) arr_51 [i_21] [(unsigned char)3])))), (((/* implicit */int) min((((/* implicit */short) arr_13 [i_21 + 3] [i_21 - 1] [i_21 + 3] [i_21])), (arr_30 [i_21] [i_21 - 1]))))));
        arr_75 [i_21] = ((/* implicit */signed char) max(((~(18446744073709551612ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-22)) + (((/* implicit */int) (_Bool)1)))))));
    }
    var_41 = var_7;
}
