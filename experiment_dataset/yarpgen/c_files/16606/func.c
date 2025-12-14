/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16606
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)30104)))), (min((-2035138038), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_18 = min((((((/* implicit */long long int) 1901379110U)) + (0LL))), (((/* implicit */long long int) (_Bool)1)));
            var_19 ^= ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_1])), (max((((long long int) -2035138038)), (arr_3 [i_0 + 1] [(short)16])))));
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_2] [i_0 + 1])) ? (3953883492U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_9 [i_2] [i_0] [i_1 + 1] [i_0 + 1]))));
                    var_22 = ((/* implicit */_Bool) ((short) ((arr_5 [i_1 + 1]) & (var_10))));
                }
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_17 [i_5] [i_5] [(signed char)7] [i_1] [i_5] [i_5] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((arr_3 [i_4 + 3] [i_1]) - (3126829860764083911LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((arr_3 [i_4 + 3] [i_1]) - (3126829860764083911LL))) - (1398228548390639834LL))))));
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_24 -= ((/* implicit */short) arr_13 [i_0] [i_4]);
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_20 [i_6] [i_1] [i_2] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 4294967295U);
                        var_25 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                        var_26 *= ((/* implicit */_Bool) -8664005023132119647LL);
                        var_27 = ((/* implicit */signed char) arr_5 [i_4]);
                    }
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) ((max((arr_14 [i_4 + 3] [i_4 - 1] [i_1] [i_4 + 3]), (arr_14 [i_4 + 2] [i_4] [i_1] [i_4 + 2]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) -2035138038))))) ? (((/* implicit */int) arr_12 [i_7 - 1])) : (((/* implicit */int) arr_23 [i_1 + 1] [i_1])))))));
                        var_29 += ((/* implicit */signed char) max((min((((((((/* implicit */int) var_0)) + (2147483647))) << (((/* implicit */int) arr_18 [i_0] [i_0] [0LL] [0] [i_0 - 1])))), ((-2147483647 - 1)))), (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_0]))) : (8664005023132119647LL)))) || (((((/* implicit */_Bool) arr_12 [i_7])) && (((/* implicit */_Bool) (short)27859)))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_30 *= ((/* implicit */short) min((max((max((((/* implicit */long long int) 2393588185U)), (arr_19 [i_2] [i_2] [i_2]))), (((/* implicit */long long int) 1901379110U)))), (9223372036854775807LL)));
                        arr_27 [i_1] = ((/* implicit */_Bool) 9223372036854775807LL);
                        arr_28 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_3 [i_0 + 2] [i_1])));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_19 [i_0] [i_0] [i_8]))));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8] [i_8] = ((/* implicit */unsigned int) arr_22 [i_1] [i_8] [12U] [i_4] [12U]);
                    }
                    for (short i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        arr_32 [i_9] [i_1] [i_4 + 3] [i_2] [(unsigned char)6] [i_1] [i_0] = max((min((max((((/* implicit */unsigned long long int) var_13)), (2510164106488932770ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) * (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (-964708815373824373LL)))))));
                        arr_33 [7U] [i_1 + 1] [i_2] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */signed char) 4294966272U);
                    }
                    arr_34 [i_1] [i_1] [i_2] [i_4] [i_4 + 3] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) - (max((((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_25 [i_2] [i_2] [i_1] [i_1] [i_2]))))));
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) 15936579967220618846ULL))));
                    /* LoopSeq 4 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_33 &= ((/* implicit */unsigned long long int) (unsigned short)54597);
                        var_34 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (arr_13 [i_11] [i_0 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (short)32767)))))));
                        var_35 = ((/* implicit */int) var_4);
                        arr_40 [i_0] [i_1] [0U] [i_10] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((unsigned long long int) -8664005023132119647LL)) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        var_36 = ((/* implicit */int) arr_12 [i_0 + 1]);
                    }
                    for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        var_37 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 341083805U)) ? (((/* implicit */unsigned long long int) 2393588185U)) : (arr_25 [i_0 - 1] [i_1 + 1] [i_10] [i_10] [i_12]))) != (((/* implicit */unsigned long long int) (-(arr_37 [i_0] [i_1] [i_2] [i_10])))))))) != (max((var_10), (((/* implicit */long long int) (_Bool)1))))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_24 [i_2] [i_1 + 1] [i_2] [i_2] [i_12]))));
                    }
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_39 &= ((/* implicit */long long int) min((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (341083803U))), (((/* implicit */unsigned int) min((arr_41 [i_10] [i_10] [i_10] [i_10] [8LL] [i_2]), (arr_16 [i_2])))))), (max((arr_45 [i_0] [i_1 + 1] [i_2] [i_10] [i_13] [i_13] [i_0 + 2]), (((/* implicit */unsigned int) ((((/* implicit */long long int) 2393588185U)) != (var_9))))))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [11U] [i_1] [11U] [i_2] [i_1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (max((arr_7 [i_2] [i_2] [i_1] [i_0 - 1]), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_7))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 1] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) | (((/* implicit */int) arr_8 [3] [i_1] [i_0 + 1])))))))));
                        var_41 ^= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) (signed char)22))))), (((((var_6) + (9223372036854775807LL))) << (((1901379110U) - (1901379110U))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (arr_45 [i_0 + 1] [(short)2] [i_2] [i_10] [i_0 + 1] [i_1] [i_10])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_10] [i_1 + 1])))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned char) arr_39 [(short)6] [i_1] [i_1] [i_10] [i_10] [(short)6]);
                        var_43 += ((/* implicit */unsigned short) min((((int) arr_45 [i_0] [i_10] [i_2] [i_10] [i_2] [i_2] [(short)18])), (((/* implicit */int) (short)-3145))));
                        var_44 = ((/* implicit */long long int) min((((/* implicit */unsigned char) max((arr_35 [i_0] [i_0] [i_0 + 1] [i_2] [i_1 - 1] [i_0 + 1]), (arr_35 [i_0 + 2] [(signed char)18] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_0])))), (arr_1 [i_0 - 1])));
                    }
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)60)) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((arr_3 [i_1 - 1] [i_1]) != (arr_3 [i_1 + 1] [i_1])))) : (((/* implicit */int) arr_16 [i_1]))));
                    arr_49 [i_10] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_31 [i_2]))) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (max((((/* implicit */long long int) (unsigned char)57)), (8664005023132119647LL))) : (((/* implicit */long long int) ((1462667447U) << (((arr_38 [i_10] [i_2] [i_10]) - (2032452302U))))))));
                }
                var_46 = ((/* implicit */_Bool) var_11);
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_1] [i_1 - 1] [i_0 + 2] [i_1 + 1] [i_1 + 1]))))) != (((/* implicit */int) ((_Bool) arr_44 [19U] [(signed char)14] [i_0 + 2] [i_1 - 1] [i_2])))));
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    var_48 = ((/* implicit */short) (-(min((((/* implicit */long long int) arr_51 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(unsigned short)0])), (min((549755813887LL), (((/* implicit */long long int) 0U))))))));
                    var_49 = ((((((/* implicit */_Bool) 2191083354U)) ? (((/* implicit */unsigned long long int) -8664005023132119647LL)) : (arr_25 [2] [i_0] [i_1] [i_0] [i_1 - 1]))) % (((arr_25 [i_0] [i_0] [i_1] [i_0] [i_1 + 1]) - (((/* implicit */unsigned long long int) var_9)))));
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    var_50 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_16] [i_16]))) | (-1036094701914520861LL)));
                    arr_54 [i_0] [i_0] [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) max((min((((arr_5 [i_0]) << (((((/* implicit */int) var_5)) - (65505))))), (max((1036094701914520860LL), (((/* implicit */long long int) arr_50 [i_0] [i_1] [i_2] [i_16] [i_1])))))), (((/* implicit */long long int) var_2))));
                    var_51 = ((/* implicit */unsigned int) arr_39 [i_1] [i_2] [i_1] [i_1] [(short)8] [i_0 - 1]);
                    var_52 = ((/* implicit */short) (((~(min((-2051980481), (-1381607739))))) * (((/* implicit */int) (_Bool)1))));
                }
                arr_55 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)53670)) ? (arr_19 [i_0] [i_1] [i_1]) : (5209839550191625366LL))) - (max((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_2])), (arr_19 [i_1] [i_1] [i_1]))))) & (-7622585343124608268LL)));
            }
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                arr_58 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((-2051980481) > (arr_52 [i_0] [i_1] [i_0 + 2]))))) == (((min((((/* implicit */unsigned int) arr_30 [i_1] [i_1] [i_17] [i_1 - 1] [i_1 - 1])), (arr_45 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10956)))))));
                arr_59 [i_17] [i_17] [i_1] = ((/* implicit */unsigned short) var_11);
            }
            for (short i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
            {
                var_53 = ((/* implicit */int) (short)0);
                var_54 = ((/* implicit */short) -549755813887LL);
                var_55 |= ((/* implicit */int) (((-(arr_13 [i_0] [(unsigned short)17]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            }
            for (short i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
            {
                var_56 |= ((((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_1 + 1] [i_1] [i_0 + 1] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))))) + (min((((/* implicit */long long int) (unsigned char)246)), (arr_21 [i_19]))));
                var_57 &= ((/* implicit */unsigned long long int) (signed char)-17);
                var_58 &= ((/* implicit */signed char) ((((_Bool) min((arr_45 [i_0] [i_0 - 1] [i_19] [i_0] [8ULL] [i_1 - 1] [i_19]), (((/* implicit */unsigned int) arr_41 [i_0] [i_19] [i_19] [i_1] [i_1 + 1] [i_0]))))) || (((/* implicit */_Bool) var_14))));
            }
        }
        for (int i_20 = 1; i_20 < 19; i_20 += 2) /* same iter space */
        {
            var_59 *= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -8664005023132119647LL)))))))) - (549755813887LL)));
            arr_66 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_44 [i_0] [(signed char)14] [i_20 - 1] [i_20] [i_20])) + (10736)))));
            /* LoopSeq 2 */
            for (short i_21 = 0; i_21 < 20; i_21 += 1) /* same iter space */
            {
                var_60 = ((/* implicit */short) var_14);
                /* LoopSeq 3 */
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 2) 
                {
                    var_61 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_48 [i_22] [i_22] [i_20] [i_22] [i_0])), ((-(((((/* implicit */_Bool) -549755813887LL)) ? (arr_57 [i_0] [i_22] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(short)6] [i_22] [i_20] [i_20] [i_21] [i_22])))))))));
                    var_62 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_22] [i_21] [(unsigned char)14]))) & (var_6))), (((/* implicit */long long int) arr_13 [i_0] [i_22]))));
                }
                for (int i_23 = 1; i_23 < 18; i_23 += 3) 
                {
                    var_63 = ((/* implicit */long long int) min((var_63), (((/* implicit */long long int) var_2))));
                    var_64 = ((/* implicit */int) min((var_64), (((/* implicit */int) arr_43 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [10U] [i_23]))));
                }
                for (signed char i_24 = 0; i_24 < 20; i_24 += 2) 
                {
                    var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32757)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_79 [i_0 + 2] [i_21] [i_24] [i_24])) <= (arr_25 [i_20] [i_0 + 2] [i_24] [i_0 - 1] [i_0 + 2]))))));
                    var_66 += ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_11)), (arr_74 [i_24] [i_20] [i_20 + 1] [i_24]))), (((((/* implicit */_Bool) arr_74 [i_24] [i_0 - 1] [i_20 + 1] [i_24])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_74 [i_24] [i_20] [i_20 + 1] [i_24])))));
                }
            }
            for (short i_25 = 0; i_25 < 20; i_25 += 1) /* same iter space */
            {
                var_67 = ((/* implicit */int) var_6);
                var_68 ^= ((/* implicit */unsigned int) arr_72 [(short)2]);
                /* LoopSeq 1 */
                for (long long int i_26 = 2; i_26 < 18; i_26 += 2) 
                {
                    var_69 = ((/* implicit */unsigned short) arr_43 [i_0] [i_0] [i_0 + 1] [i_0] [i_25] [i_0]);
                    var_70 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) max((arr_81 [14ULL] [14ULL] [i_26] [i_26]), (1540524430U)))), (min((((/* implicit */unsigned long long int) (unsigned short)10956)), (arr_14 [i_0] [i_20 + 1] [i_26] [18U]))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_56 [i_25] [i_25] [i_25] [i_25])), (arr_21 [i_26]))) & (((/* implicit */long long int) ((/* implicit */int) (short)21100))))))));
                }
            }
            var_71 = ((/* implicit */short) min((var_11), (((/* implicit */signed char) arr_11 [i_20 + 1] [i_20 - 1] [(short)8] [16] [i_20]))));
            var_72 = max((((((/* implicit */int) arr_63 [i_0 + 2])) % (2051980468))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_63 [i_20 + 1])) : (((/* implicit */int) arr_63 [i_0 - 1])))));
        }
        arr_87 [i_0] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_5 [i_0 - 1]), (((/* implicit */long long int) ((_Bool) arr_14 [i_0] [i_0] [12LL] [12LL])))))), (((var_8) << (((arr_70 [i_0] [i_0 + 1] [i_0]) + (8478698740922214610LL)))))));
        var_73 = ((/* implicit */signed char) (_Bool)0);
        arr_88 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) min(((short)29489), (arr_0 [(short)19]))))));
    }
}
