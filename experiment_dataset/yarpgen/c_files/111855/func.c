/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111855
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551615ULL)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
            {
                arr_10 [i_1] [i_1] = (~(((/* implicit */int) arr_1 [i_1 + 1])));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) (+(arr_11 [i_1 - 4] [i_1 - 3] [i_1 - 4] [i_1 - 2] [i_1])));
                    arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                    var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16367))));
                }
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_11 = ((/* implicit */_Bool) 2025709374U);
                    var_12 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))));
                }
                /* LoopSeq 4 */
                for (unsigned char i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    var_13 *= ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_5 - 1]))));
                    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10508))) % (((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_2] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])))))));
                }
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_22 [i_6] [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)16395)) ? (-8641195672879832657LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1]))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7 - 1])))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_7 - 1])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-10508))))) : (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49146))) : (-8641195672879832637LL)))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)504)))))));
                        var_18 = ((/* implicit */signed char) (unsigned short)63459);
                        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
                        arr_29 [i_0] [i_0] = ((((/* implicit */_Bool) var_6)) || (var_8));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_8])) ? (((/* implicit */int) arr_15 [i_8] [i_6] [i_2] [i_1 - 2])) : (((/* implicit */int) var_6))));
                    }
                    arr_30 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) -1LL))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3050819580U))) : (arr_8 [i_1 - 2] [i_0])));
                    var_21 *= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1 - 3]))));
                }
                for (short i_9 = 2; i_9 < 9; i_9 += 3) /* same iter space */
                {
                    arr_34 [i_2] [i_9 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) (short)-14387)) : (((((/* implicit */_Bool) (unsigned short)14569)) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) arr_19 [i_2]))))));
                    var_22 *= arr_12 [i_0] [i_1 - 1] [i_2] [i_9 - 1] [i_2] [i_2];
                    var_23 = ((/* implicit */int) (-((~(arr_7 [i_2] [i_2])))));
                }
                for (short i_10 = 2; i_10 < 9; i_10 += 3) /* same iter space */
                {
                    arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_2])) - (((/* implicit */int) arr_36 [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10 - 1]))));
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_44 [i_0] [i_1 - 2] = ((/* implicit */int) ((unsigned short) var_9));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1 - 4] [i_1 - 2] [i_10 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (arr_4 [i_0] [i_1 - 2])));
                    }
                    for (long long int i_12 = 1; i_12 < 6; i_12 += 3) /* same iter space */
                    {
                        arr_47 [i_0] [i_2] [i_2] [i_0] |= ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1 - 3]))) == (arr_9 [7LL] [i_1] [i_2] [i_10 - 2])))) >= (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)5] [(unsigned char)5] [i_10 - 2] [(short)4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_2])))));
                        var_25 = (short)-17669;
                    }
                    for (long long int i_13 = 1; i_13 < 6; i_13 += 3) /* same iter space */
                    {
                        arr_50 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-22)) + (2147483647))) << (((var_0) - (6201964729925671323LL)))));
                        arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-2))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_2] [i_1 - 1] [i_2] [i_2] [i_2] [i_0])) + (((/* implicit */int) arr_18 [i_13 + 3] [i_0] [i_2] [i_2] [i_0] [i_0]))));
                        arr_52 [i_0] [i_0] [i_2] [i_10] [i_10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_25 [i_0]) || (((/* implicit */_Bool) 2025709349U)))))) : (((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                        arr_53 [i_0] [i_0] [i_0] [i_10 - 1] [4ULL] [i_10 - 1] [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)2046)))) ^ (((arr_45 [i_10] [i_10 - 2] [i_10] [i_10] [i_10 - 1] [i_10]) ? (((/* implicit */int) (unsigned short)14587)) : (((/* implicit */int) arr_23 [i_13 + 3] [i_1 - 2] [i_2] [i_1 - 2] [i_0]))))));
                    }
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14566)))))));
                    var_28 += ((/* implicit */short) arr_46 [i_1] [i_1 - 4] [i_1 - 1] [i_1 + 1] [i_1 - 4]);
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
            {
                var_29 *= arr_3 [i_14];
                arr_56 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_17 [i_0]) ? (((/* implicit */int) (unsigned short)50953)) : (((/* implicit */int) arr_17 [i_0]))));
                arr_57 [i_0] [i_0] [i_14] = ((/* implicit */signed char) var_4);
            }
            arr_58 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                var_30 |= ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                arr_61 [i_0] [(unsigned short)7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14569)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2124970333)) ? (((/* implicit */int) arr_36 [i_0] [i_1 - 4] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_38 [i_0] [i_1] [i_0]))))) : (arr_7 [i_1] [i_1 - 2])));
            }
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                arr_65 [i_0] [i_1 + 1] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_1 - 2] [i_1] [i_16])) && (((/* implicit */_Bool) arr_28 [i_0] [i_1 - 4] [i_1 - 3] [i_1 - 3] [i_1 - 3]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_1 - 4] [i_1] [i_1 - 4] [i_1 - 4] [i_1 - 1])) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)50954)) ? (arr_46 [i_0] [i_1 - 1] [(unsigned short)1] [(_Bool)1] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (2629279592U))))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_69 [i_0] [i_0] [i_16] [i_16] [i_17] [i_18]))))) ? ((~(((/* implicit */int) (short)22556)))) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_16] [i_0]))));
                        var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 + 1]))) : ((+(arr_46 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_34 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8641195672879832657LL))));
                        var_35 *= ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) ? (arr_43 [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 2] [i_1 - 3] [i_18] [i_1 - 2]) : (arr_8 [i_1 + 1] [i_1 + 1]));
                    }
                    arr_71 [i_16] [(signed char)6] [i_16] [(signed char)6] = ((/* implicit */long long int) arr_67 [i_16] [i_1 + 1] [i_0] [i_0]);
                    var_36 = ((/* implicit */_Bool) (+(arr_4 [i_16] [i_17])));
                    arr_72 [i_0] [4LL] [i_0] = ((/* implicit */short) ((long long int) (-(arr_63 [i_1] [i_17]))));
                }
                for (int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    var_37 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_19])) : (((/* implicit */int) arr_25 [i_0]))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        var_38 ^= (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) var_9)))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (unsigned char)255))));
                    }
                    for (int i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
                    {
                        arr_80 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) arr_20 [i_1 - 1]);
                        var_40 -= ((/* implicit */_Bool) ((unsigned int) (unsigned short)14563));
                        arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((2211706204U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                    }
                    for (int i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                    {
                        var_41 = ((/* implicit */long long int) ((295587980U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))));
                        arr_84 [i_16] [i_16] = ((/* implicit */unsigned long long int) (-(((unsigned int) (signed char)-8))));
                    }
                    for (int i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
                    {
                        arr_88 [i_23] [(short)3] [i_16] [i_1 - 2] [i_23] = ((/* implicit */unsigned char) arr_20 [i_0]);
                        var_42 -= ((/* implicit */unsigned int) (-(arr_64 [(short)4] [i_23] [i_23] [i_1 - 1])));
                        var_43 += ((/* implicit */_Bool) (~(543259731U)));
                    }
                    arr_89 [i_16] [i_1 - 3] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9971989082978710651ULL)) ? (arr_5 [i_1] [i_16] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_0] [i_0] [i_19] [i_19] [i_0] [i_16])))))) ? ((+(arr_59 [i_0] [i_0] [i_0] [8LL]))) : (((((/* implicit */_Bool) arr_54 [i_1] [i_1])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (short)-21482))))));
                    arr_90 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27976)) ? (((/* implicit */int) arr_20 [i_16])) : (((/* implicit */int) var_7)))))));
                    var_44 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_0] [i_16] [i_16] [0ULL]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_25 = 0; i_25 < 10; i_25 += 2) 
        {
            arr_98 [i_24] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_24]))))));
            /* LoopSeq 4 */
            for (unsigned short i_26 = 0; i_26 < 10; i_26 += 3) 
            {
                var_45 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)14)) | (((/* implicit */int) (signed char)-28))))));
                arr_101 [i_26] [i_26] [i_26] [i_24] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 295587983U))));
            }
            for (short i_27 = 2; i_27 < 9; i_27 += 1) 
            {
                var_46 += ((/* implicit */short) (~(((/* implicit */int) arr_49 [i_27 - 1] [i_27 - 2] [i_27 - 1] [i_27 - 2] [i_27 - 1] [i_27 - 1]))));
                var_47 ^= ((/* implicit */unsigned char) ((5727836305063313985LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_24] [i_24] [i_27])))));
            }
            for (unsigned long long int i_28 = 3; i_28 < 9; i_28 += 2) 
            {
                var_48 = ((/* implicit */_Bool) max((var_48), ((!(((_Bool) arr_43 [i_24] [i_24] [i_24] [i_24] [i_24] [(signed char)1] [i_24]))))));
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (9118871580021948234ULL)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1611071495)))))));
            }
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    arr_113 [i_24] [i_25] [i_29] [i_30] = ((/* implicit */unsigned int) (+(-1519697139)));
                    var_50 = (~(((/* implicit */int) arr_66 [i_24] [i_25] [i_25] [i_29] [i_30])));
                }
                var_51 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            }
        }
        arr_114 [i_24] = ((((/* implicit */_Bool) arr_54 [i_24] [i_24])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_24]))))) : ((-(11792351568172955247ULL))));
        /* LoopSeq 1 */
        for (short i_31 = 0; i_31 < 10; i_31 += 3) 
        {
            var_52 += ((((_Bool) arr_6 [i_24] [i_31] [i_31] [i_31])) ? (arr_33 [i_31] [1U] [i_31] [i_24]) : (arr_85 [i_24] [i_31] [i_24] [i_24] [i_24]));
            arr_118 [i_31] = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)-25223)) : (((/* implicit */int) arr_18 [i_24] [i_24] [i_24] [i_31] [i_24] [i_24]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1611071494)) ? (arr_46 [i_31] [i_24] [i_24] [i_24] [i_24]) : (var_5)))) : ((~(arr_35 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]))));
        }
    }
    var_53 = ((/* implicit */short) min(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-8185264558299215176LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)20795)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)24167))))))));
    var_54 += ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))));
}
