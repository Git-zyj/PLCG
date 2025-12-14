/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180508
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                arr_10 [i_1] [i_2] = ((/* implicit */long long int) (+(arr_9 [i_0] [i_2] [i_2])));
                var_19 = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551602ULL) > (((/* implicit */unsigned long long int) 3939114395U)))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) var_17)) : (var_1))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_3 [i_0]))));
                var_21 = ((/* implicit */_Bool) ((short) arr_0 [i_0] [i_1]));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4831)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) 2146959360U))));
            }
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_3])) - (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))));
                var_24 = ((/* implicit */unsigned long long int) (unsigned char)157);
                arr_15 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])) ? (((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])) > (8388607))))));
                var_25 = ((/* implicit */unsigned int) -8388608);
            }
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : ((+(((/* implicit */int) var_9)))))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_15)), (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (unsigned char)122))))) ^ (7946372234439094671ULL)))));
                arr_19 [i_4] [i_1] [i_0] [i_0] |= ((/* implicit */_Bool) (+(((var_16) ? (arr_5 [i_1] [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118)))))));
            }
            for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                arr_24 [i_0] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)93)), ((-(((var_15) ? (((/* implicit */unsigned long long int) -8388607)) : (5ULL)))))));
                var_27 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) -8388607))));
            }
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
        {
            arr_28 [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_15))))));
            arr_29 [i_6] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_8 [i_0] [i_6] [i_6] [i_0])))), ((~(((/* implicit */int) (_Bool)1))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            arr_34 [i_0] = ((/* implicit */unsigned long long int) arr_2 [5ULL]);
            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_30 *= ((/* implicit */signed char) -8388600);
            var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_8] [i_8] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)134)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)6))))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_7)) - (131))))))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -8388608)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (2251799813160960ULL))) << ((((~(((/* implicit */int) (short)-15692)))) - (15675))))))));
                    var_34 = ((/* implicit */unsigned short) (short)-1);
                }
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned long long int) 8388586)) : (14737186978339745803ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (245760) : (-8388567))))));
                    arr_50 [i_0] = ((/* implicit */unsigned char) ((arr_43 [i_0] [i_8] [i_11] [i_11] [i_0] [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6801)))));
                }
                for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    arr_54 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_15)) + (((/* implicit */int) arr_18 [i_8] [i_9] [i_12])))) < (var_6)));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_9] [i_12])) && (((/* implicit */_Bool) arr_40 [i_0] [i_8])))))));
                    arr_55 [(signed char)2] = ((/* implicit */unsigned char) (+((+(-8388607)))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)30)) & (((/* implicit */int) (unsigned char)140)))) >= (var_6))))));
                }
                arr_56 [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)41))));
            }
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 10; i_15 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_64 [i_8] [i_14] [i_14] [i_15 + 1] [i_15 + 1] [i_15 - 2] [i_15]))));
                            var_39 = ((/* implicit */signed char) (!(var_11)));
                            arr_65 [i_13] [i_8] [i_15] [i_14] [i_15] [i_15] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_15] [i_15 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)152))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (8388594) : (var_6)));
            }
        }
        arr_66 [i_0] = ((/* implicit */unsigned short) (~((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_4)))))));
        /* LoopSeq 2 */
        for (signed char i_16 = 2; i_16 < 10; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 2; i_17 < 8; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((8388607), (((/* implicit */int) var_13))))))) != (((((/* implicit */_Bool) arr_58 [i_0] [i_16 - 2] [i_17 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_43 [i_16 - 2] [i_16] [i_16 + 1] [i_16 - 1] [i_17] [i_17 - 1])))));
                        var_42 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_64 [i_18] [i_17 - 2] [i_17 + 1] [i_17] [i_16 + 1] [i_16] [i_0])), (arr_48 [i_16 - 1] [i_0] [i_0])))), (7ULL)));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) (unsigned char)145)) : (-8388608)));
                    }
                } 
            } 
            arr_76 [i_0] [10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -8388616)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (-1721146442321106295LL)));
            /* LoopSeq 3 */
            for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_20 = 3; i_20 < 9; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9U))));
                            arr_85 [i_0] [i_20 - 2] [i_21] [i_20] [i_21] &= ((/* implicit */_Bool) max(((-(min((arr_30 [i_0] [i_19] [8]), (var_4))))), (((/* implicit */unsigned int) (unsigned char)151))));
                            var_45 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)43938))));
                            var_46 = ((/* implicit */unsigned int) (+(-1721146442321106309LL)));
                            var_47 = ((/* implicit */int) var_10);
                        }
                    } 
                } 
                var_48 ^= ((((/* implicit */_Bool) ((long long int) (unsigned short)21571))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */int) arr_49 [i_19] [i_0] [i_19] [i_16] [i_16] [i_0])) + (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_42 [i_19] [i_16 - 2] [10U])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-56))))))) : (min((((/* implicit */unsigned long long int) min((arr_83 [i_0] [(short)2]), (((/* implicit */unsigned int) (signed char)-42))))), (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) (signed char)-92)))))));
                var_49 = ((/* implicit */int) max((var_49), ((+((~(((/* implicit */int) arr_4 [i_16 - 1] [i_16 - 1] [i_16 + 1]))))))));
            }
            for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned char) ((min((arr_43 [i_0] [i_24 - 1] [i_24] [i_24] [i_24 - 1] [i_24 - 1]), (((/* implicit */unsigned long long int) 549129781)))) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) - (-2330978325400370127LL))))));
                            arr_94 [i_22] [i_23] [i_16] [i_23] [i_0] [i_16] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_90 [i_0] [i_16] [i_24])), ((unsigned short)21614)));
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_0])) && (((/* implicit */_Bool) arr_59 [i_16 - 1] [i_16 + 1] [i_16 - 2])))));
            }
            for (short i_25 = 0; i_25 < 11; i_25 += 1) 
            {
                arr_97 [i_0] [i_16] [i_25] = ((/* implicit */unsigned int) (unsigned char)250);
                var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) var_13))));
                arr_98 [i_0] [i_16] = ((/* implicit */_Bool) var_12);
                var_53 = ((unsigned long long int) -8388599);
                var_54 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_5))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                var_55 ^= ((/* implicit */short) 12138642060450165113ULL);
                /* LoopSeq 1 */
                for (long long int i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    var_56 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)35))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 3; i_28 < 10; i_28 += 3) 
                    {
                        arr_109 [i_0] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_105 [i_0] [i_0] [i_0] [i_26] [i_27] [i_27] [i_28]))))))) ? (max((((((/* implicit */_Bool) arr_33 [i_27] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14653))) : (arr_42 [i_28] [i_28] [i_28]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1048512)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))) : (((((/* implicit */_Bool) min((644998398), (1534593464)))) ? (((arr_1 [i_26]) ^ (((/* implicit */unsigned long long int) arr_17 [i_28] [i_27] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)21597)))))))));
                        var_57 = ((/* implicit */unsigned char) (((+(arr_102 [i_16 - 2] [i_16 - 1] [i_27] [i_27] [i_16] [i_0]))) + (((/* implicit */long long int) (-(((/* implicit */int) var_16)))))));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_114 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (arr_81 [i_0] [i_16 - 1] [i_26] [i_27]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? ((~(var_6))) : (((((/* implicit */_Bool) -1908589747)) ? ((+(-8388598))) : (((/* implicit */int) (_Bool)1))))));
                        arr_115 [i_16] [i_29] [i_26] [i_16] [i_29] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_16 - 1] [i_16])) ? (1071609524U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_16 + 1] [i_16 - 1])))))) ? (((/* implicit */int) arr_46 [i_16 - 1] [i_29] [i_26])) : (((((/* implicit */int) arr_91 [i_16 - 2] [i_27] [i_26] [i_16] [i_27] [i_0])) - (((/* implicit */int) var_3))))));
                    }
                }
            }
        }
        for (unsigned int i_30 = 2; i_30 < 9; i_30 += 4) 
        {
            arr_118 [i_0] [i_30] [i_30] &= ((/* implicit */unsigned int) ((((min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((signed char) arr_20 [i_0] [i_30] [i_30]))))) + (2147483647))) << (((min((((/* implicit */unsigned int) ((var_12) >> (((((/* implicit */int) arr_80 [i_30 + 2] [i_0] [i_0] [i_0])) + (32505)))))), (((((/* implicit */_Bool) var_4)) ? (arr_27 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) - (386243U)))));
            var_58 *= min((min((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) var_18)) ? (var_1) : (arr_106 [i_30] [i_30] [i_30]))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_116 [i_30]) < (((/* implicit */int) (signed char)117))))) == ((+(((/* implicit */int) var_7))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_31 = 1; i_31 < 10; i_31 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 11; i_32 += 2) 
                {
                    for (signed char i_33 = 0; i_33 < 11; i_33 += 3) 
                    {
                        {
                            var_59 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_84 [i_0] [i_31 - 1] [i_0] [i_32] [i_0]))));
                            var_60 = ((/* implicit */signed char) ((((/* implicit */int) arr_120 [i_0] [i_30 + 2] [i_31 + 1] [i_32])) * (((/* implicit */int) arr_120 [i_0] [i_30] [i_31 - 1] [i_32]))));
                            arr_129 [i_32] [i_32] [i_33] [i_32] [i_32] = ((/* implicit */signed char) arr_11 [i_31 - 1] [i_30 - 1] [i_31] [i_31]);
                            var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) ((signed char) (signed char)58)))));
                        }
                    } 
                } 
                arr_130 [i_0] [i_30] [i_31 + 1] [i_31 + 1] = ((/* implicit */short) (unsigned short)21617);
            }
            /* vectorizable */
            for (short i_34 = 1; i_34 < 10; i_34 += 2) /* same iter space */
            {
                var_62 = ((/* implicit */short) 3257954393U);
                /* LoopNest 2 */
                for (unsigned long long int i_35 = 0; i_35 < 11; i_35 += 1) 
                {
                    for (short i_36 = 0; i_36 < 11; i_36 += 2) 
                    {
                        {
                            arr_139 [i_35] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */unsigned long long int) (unsigned short)20007);
                            var_63 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_61 [i_35] [i_34 + 1] [i_34 - 1] [i_30 - 2] [i_0]))));
                        }
                    } 
                } 
            }
        }
        arr_140 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 3223357773U)) ? (-5550306712543814409LL) : (((/* implicit */long long int) ((/* implicit */int) arr_133 [i_0] [i_0] [i_0]))))));
        var_64 = ((/* implicit */short) max((var_64), (((short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)14475)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) <= (-9223372036854775796LL)))))))));
    }
    var_65 += ((/* implicit */int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)54676)) | (((/* implicit */int) (unsigned char)16))))))) & (max((min((((/* implicit */unsigned int) var_7)), (2822672108U))), (((/* implicit */unsigned int) var_5))))));
}
