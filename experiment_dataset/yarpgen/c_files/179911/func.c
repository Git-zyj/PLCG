/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179911
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 |= ((/* implicit */long long int) arr_1 [3]);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (1561116840842597967LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))));
        var_19 = ((/* implicit */unsigned char) var_0);
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((var_15) | (((/* implicit */long long int) arr_4 [i_1])))) & (((/* implicit */long long int) max((arr_3 [11LL]), (var_9)))))) & (((/* implicit */long long int) max((1560208197), (-1560208199))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_20 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) ((-1560208213) >= (1560208193)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 1560208188)) : (var_0)))))));
                arr_12 [i_3] [i_2] [(unsigned char)9] [2ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_10)) ? (min((-1560208166), (-1560208172))) : (((/* implicit */int) min((arr_0 [i_3]), (((/* implicit */unsigned short) arr_1 [7]))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_3])) || (((/* implicit */_Bool) arr_3 [i_1]))))), (arr_0 [i_1]))))));
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) -1560208184)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -70157857)) && (((/* implicit */_Bool) var_3)))))) / (var_16)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_1] [i_2] [i_4] [i_5] |= arr_3 [i_4];
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_22 = var_14;
                        var_23 = ((/* implicit */unsigned int) 1604804120);
                        arr_24 [i_1] [i_1] [i_1] [7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_16 [9LL]) : (((/* implicit */long long int) arr_18 [i_1] [i_6] [i_4] [i_1]))));
                    }
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
                    {
                        arr_29 [i_1] [i_1] [i_2] [i_1] [i_5] [i_5] [1LL] = var_4;
                        arr_30 [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (var_16) : (((var_12) / (((/* implicit */long long int) -1560208184))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-1560208173) + (2147483647))) << (((((/* implicit */int) arr_5 [i_4] [i_5])) - (76)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [9U] [i_7] [i_7 - 3]))) : (((var_0) / (((/* implicit */long long int) var_10))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_18 [(unsigned char)7] [i_2] [i_2] [i_2]))));
                        var_26 += ((arr_4 [i_1]) / (-1560208210));
                        arr_33 [i_1] [i_2] [i_4] [i_4] [i_5] [i_8] [5] = ((/* implicit */unsigned char) (unsigned short)65518);
                    }
                }
                for (short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_27 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_4] [6U] [6U] [i_9] [i_2])) ? (2147483646) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) var_4)) / (var_5))) < (max((((/* implicit */long long int) arr_35 [1LL] [i_2] [i_2] [i_4] [i_9] [i_9])), (8111400922796124840LL))))))) : (min((((/* implicit */long long int) -1560208188)), (var_16)))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-127)) % (((/* implicit */int) arr_7 [i_2]))))) & (max((var_15), (((/* implicit */long long int) arr_5 [i_1] [i_2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_9] [i_4] [i_4] [i_2] [i_1]))) : (-8210703042699270276LL)));
                }
                for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_42 [i_1] [i_2] [10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_1] [i_1] [i_1] [i_1]), (arr_13 [i_11] [7LL] [i_2] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? (var_3) : (var_0))))));
                        arr_43 [i_10] [i_11] = (unsigned char)249;
                        var_29 -= ((/* implicit */long long int) min((arr_39 [i_1] [i_2]), (((/* implicit */short) max((min((var_13), (var_13))), (((/* implicit */unsigned char) ((var_7) != (var_4)))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        arr_46 [i_12] [5] [i_4] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) -1560208200)) / (var_10)));
                        var_30 = ((/* implicit */unsigned short) arr_41 [i_4] [i_12 - 1] [i_12 + 3] [i_12] [i_12] [i_12] [i_12]);
                        arr_47 [3LL] [i_2] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_12 + 3] [i_12 + 3] [i_12 + 3] [i_12 + 2] [i_12 + 2])) >> (((((/* implicit */int) arr_31 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 - 1] [i_12 + 3])) - (26466)))));
                        arr_48 [i_4] [i_1] = ((/* implicit */unsigned int) 6961037258403409891LL);
                    }
                    for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        arr_53 [i_1] [i_1] [i_1] [10LL] [(unsigned char)8] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_7 [i_1]))))), (3349745382U)));
                        var_31 ^= ((/* implicit */long long int) ((945221897U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(unsigned short)5] [i_2] [i_4] [i_2] [i_13] [i_2])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (unsigned char)19)) : (357351643))) % (((1560208156) / (1073741824)))));
                        var_33 = ((/* implicit */unsigned long long int) ((var_15) | (((/* implicit */long long int) arr_45 [i_1] [i_2] [i_14] [i_10] [i_14]))));
                        var_34 = ((/* implicit */unsigned char) 1267519711U);
                    }
                    arr_56 [i_1] [i_1] [i_1] [(signed char)3] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)6)), (-1560208188)));
                }
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (var_16)))) ? (min((8111400922796124852LL), (((/* implicit */long long int) arr_40 [i_1] [i_2] [i_1] [i_1] [i_4])))) : (min((((/* implicit */long long int) arr_40 [i_1] [i_1] [i_2] [(unsigned char)0] [i_4])), (var_8)))));
            }
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
        {
            var_36 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned char)186))));
            arr_59 [i_1] = ((/* implicit */unsigned char) arr_0 [i_15]);
        }
        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (var_3)));
            arr_63 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)136);
            arr_64 [i_1] [i_16] = ((/* implicit */signed char) (unsigned char)167);
            var_38 = ((/* implicit */int) var_12);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_39 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_57 [i_17] [i_18])) : (((/* implicit */int) arr_57 [i_1] [i_16])));
                    arr_71 [i_1] [i_16] [i_16] [i_17] [i_17] = ((/* implicit */short) arr_17 [i_1] [i_16] [i_17] [i_18]);
                    var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [(unsigned char)7] [i_16] [i_16] [i_16] [i_17] [i_18] [i_18])) && (((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1] [i_1] [i_18] [i_18] [i_1])))))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) -7011533671274321099LL))));
                        var_42 = ((/* implicit */unsigned int) (unsigned short)65506);
                        var_43 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)71)) >= (arr_4 [i_17]))) ? (((/* implicit */long long int) var_9)) : (arr_67 [i_16] [i_16])));
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) 1073217536U)) ? (var_11) : (((/* implicit */unsigned long long int) arr_45 [i_1] [i_1] [i_17] [i_18] [i_17])))))));
                        arr_74 [i_19] [i_19] [i_18] [8] [i_16] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_1] [i_16] [i_17] [i_18] [i_18])) ? (arr_11 [(unsigned short)2] [i_16] [i_16]) : (((/* implicit */int) arr_31 [i_19] [i_18] [i_17] [i_16] [2LL]))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        var_45 = ((/* implicit */short) var_0);
                        arr_79 [i_1] [(unsigned short)3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_60 [i_16] [i_20])) / (-1560208197)));
                        var_46 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -348232306)) ? (((/* implicit */long long int) -26)) : (-6128261930937508698LL))) >= (((/* implicit */long long int) -348232308))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    arr_82 [i_21] [1ULL] [i_17] [3] = ((/* implicit */short) ((var_14) > (var_15)));
                    arr_83 [i_1] [(signed char)1] [i_1] [i_1] = ((/* implicit */long long int) var_4);
                    var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((-2147483636) ^ (((/* implicit */int) (unsigned char)59)))))));
                }
                arr_84 [i_1] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4174))) : (var_8)));
            }
            /* vectorizable */
            for (unsigned char i_22 = 1; i_22 < 11; i_22 += 3) 
            {
                var_48 = ((/* implicit */unsigned int) var_4);
                arr_88 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_87 [i_16] [i_22 - 1] [8LL] [i_22])) || (((/* implicit */_Bool) ((var_16) | (-8210703042699270283LL))))));
            }
        }
        arr_89 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_72 [i_1] [i_1] [i_1] [(short)6] [7]) != (arr_72 [i_1] [i_1] [i_1] [i_1] [i_1])))), (((arr_72 [i_1] [i_1] [0] [i_1] [i_1]) * (1092928417U)))));
        var_49 = ((/* implicit */unsigned short) var_16);
    }
    var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) 1558060998U))));
}
