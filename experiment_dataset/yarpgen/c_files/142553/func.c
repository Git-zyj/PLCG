/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142553
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 |= ((/* implicit */short) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_15 = ((/* implicit */short) ((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)7))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((min((var_8), (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) (short)-16384)))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)34747)) - (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (min((((/* implicit */int) arr_3 [i_1])), (arr_4 [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (short)-20890)) : (386770019)))) ? (((270215977642229760ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30824))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) var_7))))))))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 13240545089896848476ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8388607) << (((((/* implicit */int) (short)-20892)) + (20892)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)30824), (((/* implicit */unsigned short) arr_3 [i_1])))))) : (min((1609406599U), (((/* implicit */unsigned int) arr_5 [2ULL] [2ULL]))))))) : ((((+(5206198983812703131ULL))) + ((+(var_10))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)-37)), (1241978381330473167ULL)));
                                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_8 [i_4])) : (var_10))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30814))))) ? (((/* implicit */long long int) (~(arr_9 [i_5])))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (var_0))))))));
                                var_21 = min((min((min((5206198983812703140ULL), (((/* implicit */unsigned long long int) arr_7 [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [(signed char)6] [i_3 - 3])) - (arr_14 [i_1] [i_2 + 4] [i_3] [i_4 - 1] [i_5])))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 3] [i_3] [i_4 - 1] [i_5]))) & (13240545089896848476ULL))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((short) arr_6 [i_2]));
                    var_23 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (signed char)79)))), (((/* implicit */int) arr_10 [i_1] [i_2 + 3] [i_2 + 4] [i_3 + 1]))));
                    var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_15 [i_1] [i_1] [i_2] [i_2] [i_1])), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) -931224308)) && (((/* implicit */_Bool) 388658561U)))))))), (((((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [(short)15])) % (arr_11 [i_1] [(unsigned short)4]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)16]))) != (var_4)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        var_25 = ((/* implicit */int) ((arr_11 [(_Bool)1] [(_Bool)1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (11LL) : (((/* implicit */long long int) 1401763435))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_6 + 2] [i_6] [i_6] [i_6 + 1] [i_6])), ((unsigned char)80)))) : ((~(((/* implicit */int) arr_6 [i_6])))))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    var_26 = ((((((/* implicit */int) arr_10 [i_6 + 2] [i_7 - 1] [i_7 - 1] [10U])) | (arr_5 [i_6 - 1] [i_6]))) ^ (((((/* implicit */_Bool) arr_5 [i_6 + 3] [i_6 + 3])) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_7] [i_7 - 1] [i_7])) : (arr_5 [i_6 + 3] [(signed char)8]))));
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 266206028322781648ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)29))))))));
                    var_28 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10] [i_10] [i_9] [i_6 - 1]))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-10735)) <= (((/* implicit */int) (unsigned short)34747))))) <= (((((/* implicit */_Bool) 0U)) ? (arr_8 [i_6]) : (var_6)))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_9] [i_11] [i_10] [i_9] [i_6 + 1])) && (((/* implicit */_Bool) 13240545089896848485ULL))))), (arr_3 [i_6 - 1]))))));
                    var_30 ^= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_26 [i_11])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_4 [i_6])))), (((/* implicit */unsigned long long int) ((signed char) 1722646221392236141LL))))), ((~(737406447267902763ULL)))));
                    var_31 = ((/* implicit */int) 5LL);
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */int) ((33292288U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [(unsigned short)7] [i_9] [i_11] [i_12] [i_6])))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_12) : (((((/* implicit */_Bool) arr_5 [i_12 + 3] [i_6 - 1])) ? (-1823676114) : (((/* implicit */int) arr_6 [i_6 - 1]))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-32)), ((unsigned short)65521)))) : (((/* implicit */int) (short)10752))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 737406447267902763ULL)) || (((/* implicit */_Bool) -1401763455))))) : (arr_34 [i_6] [5] [i_10] [i_9] [i_10])));
                        var_35 = ((/* implicit */signed char) max((((1401763439) | (((/* implicit */int) min(((short)-28795), (((/* implicit */short) arr_17 [i_10] [i_9]))))))), (((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_13])) && (((/* implicit */_Bool) var_0))))) - (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)38))))))));
                        var_36 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_21 [i_10]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-5535)))))) / (((/* implicit */int) (short)-10709))))), (arr_24 [i_10]));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_6 - 1])) ? (arr_24 [i_6 + 1]) : (((/* implicit */unsigned long long int) min((var_8), (arr_20 [i_14])))))), (((/* implicit */unsigned long long int) min((min((arr_9 [(signed char)12]), (((/* implicit */int) arr_37 [i_6] [i_9] [i_10] [i_10] [i_14])))), (((arr_23 [i_6 + 3]) + (((/* implicit */int) arr_3 [i_6])))))))));
                        var_38 = ((/* implicit */unsigned short) (-(((int) ((((/* implicit */_Bool) arr_17 [i_9] [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) arr_21 [i_10])))))));
                    }
                    for (short i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */long long int) arr_24 [i_15]);
                        var_40 ^= ((/* implicit */int) arr_19 [i_9]);
                    }
                }
                for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    var_41 = ((/* implicit */int) arr_37 [i_16] [10] [i_9] [i_6] [i_6]);
                    /* LoopSeq 1 */
                    for (short i_17 = 3; i_17 < 13; i_17 += 4) 
                    {
                        var_42 ^= min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_45 [i_9] [i_10] [i_16] [i_17])) : (((/* implicit */int) arr_45 [i_6 + 2] [i_9] [i_10] [i_16])))), (((/* implicit */int) (signed char)0)));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((-996294754), (((/* implicit */int) arr_18 [i_17] [i_17])))) >= (((/* implicit */int) ((short) arr_12 [i_10] [i_16] [i_10] [i_9] [i_6 + 3])))))) ^ (((((/* implicit */int) ((short) var_8))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 - 1] [0U]))) <= (arr_24 [i_16]))))))));
                        var_44 -= ((/* implicit */signed char) ((var_9) / (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-30)) + (2147483647))) >> ((((~(562949953421311LL))) + (562949953421317LL))))))));
                        var_45 = ((/* implicit */int) min((var_45), (arr_5 [i_17 + 1] [i_6 + 1])));
                    }
                    var_46 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_6] [i_9] [i_10] [i_10] [i_16]))), (((var_4) + (((/* implicit */unsigned long long int) arr_26 [i_10])))))) * (min((13859180361273343019ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                    var_47 = ((/* implicit */short) min(((~(((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [(short)13] [(signed char)9]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                    var_48 = ((/* implicit */long long int) var_4);
                }
                var_49 = arr_4 [(signed char)16];
                var_50 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_6 - 1] [i_6] [i_9] [i_10])))) ? (17709337626441648873ULL) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_44 [i_10] [i_9] [(short)0] [i_9] [i_9] [(signed char)3])) ? (arr_14 [i_6] [i_9] [i_9] [(_Bool)1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_10] [i_9] [i_10] [i_6] [i_9] [i_6])))))))));
            }
            var_51 = ((/* implicit */int) 33292288U);
            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14120770194194809148ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30693))) : (144115188075855871ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) max((arr_18 [i_9] [i_9]), (arr_43 [i_6] [(signed char)7] [(signed char)7] [i_9])))) - (((/* implicit */int) ((short) (unsigned short)18082)))))))))));
        }
        for (long long int i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            var_53 = (+(15183308409998557541ULL));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 15; i_20 += 2) 
                {
                    {
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-1)) ? (6240770393706247195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7742))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_19 [i_20])), (arr_5 [i_6 + 3] [i_18]))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_6 - 1] [i_6 + 2] [i_6 - 1])))))));
                        var_55 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_18]))))), ((~(((((/* implicit */_Bool) arr_13 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (arr_16 [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_6] [i_19] [i_19] [i_18] [i_6] [i_6] [i_6])))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_21 = 2; i_21 < 14; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_22 = 0; i_22 < 15; i_22 += 4) 
            {
                var_56 = (~(((/* implicit */int) ((((/* implicit */long long int) var_12)) < (7729601485447074551LL)))));
                var_57 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_6] [i_6 + 1] [i_6 + 1] [i_22])) ? (2147483647) : (((/* implicit */int) arr_19 [i_21])))));
            }
            var_58 = ((/* implicit */short) arr_9 [i_21]);
            /* LoopNest 3 */
            for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                for (short i_24 = 0; i_24 < 15; i_24 += 4) 
                {
                    for (unsigned char i_25 = 2; i_25 < 14; i_25 += 2) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned int) var_8);
                            var_60 = ((/* implicit */int) arr_7 [i_6 + 3]);
                        }
                    } 
                } 
            } 
        }
        for (short i_26 = 0; i_26 < 15; i_26 += 4) 
        {
            var_61 *= ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) arr_27 [i_26] [i_26] [i_26] [i_26] [i_6 + 2] [i_6])))) ? (4194303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25524))))), (((/* implicit */unsigned long long int) (signed char)39))));
            var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)25501)) ? (arr_24 [i_6 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (min((((/* implicit */unsigned int) arr_30 [i_26] [i_26] [3ULL])), (arr_67 [(signed char)12] [i_6] [10] [i_26]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1))))))));
            var_63 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-98)) != (((/* implicit */int) arr_36 [i_26] [i_26] [(short)10] [i_26] [i_6] [i_6] [i_6]))))))));
        }
    }
    var_64 = ((/* implicit */unsigned int) max((var_64), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-6091)) & ((-(((/* implicit */int) (unsigned short)43923)))))) + (((/* implicit */int) min((var_3), (var_3)))))))));
    var_65 = ((/* implicit */int) (unsigned char)192);
    var_66 &= ((/* implicit */unsigned long long int) var_2);
}
