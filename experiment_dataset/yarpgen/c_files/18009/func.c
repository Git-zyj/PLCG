/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18009
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3 + 4] = ((/* implicit */short) var_2);
                        var_17 = ((/* implicit */long long int) var_12);
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) == (((/* implicit */int) (unsigned char)127))));
                        arr_11 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)147)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((unsigned long long int) arr_1 [10LL])))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned short i_7 = 4; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((unsigned int) (+(arr_22 [i_7 - 2] [i_6] [i_0] [i_6] [i_7]))));
                            var_20 = ((signed char) (~(((/* implicit */int) ((short) (unsigned char)128)))));
                            var_21 ^= ((/* implicit */signed char) min((((/* implicit */int) arr_17 [i_0 + 1] [i_7] [i_5] [i_7])), (((((/* implicit */_Bool) (short)9528)) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_7 - 4] [i_7 - 3] [i_7 + 1])) : (((/* implicit */int) var_8))))));
                            var_22 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (short)21581)), (3757135767298054144ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) var_0))))))))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (6018845804517898397LL)));
            }
        }
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (short i_10 = 1; i_10 < 16; i_10 += 2) 
                {
                    {
                        arr_32 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-22672))))) << (((((((/* implicit */_Bool) 3757135767298054144ULL)) ? (((/* implicit */int) (short)-26974)) : (((/* implicit */int) arr_28 [i_0 + 1])))) + (26980)))));
                        arr_33 [i_0] [i_0] [i_8] [i_0] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_20 [i_10 + 1] [i_8])))));
                        arr_34 [i_0] [i_9] [i_0] = ((/* implicit */short) max((min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) min((var_16), (((/* implicit */unsigned char) var_8))))))), (((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (unsigned short)63))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) var_10))))) ? (arr_21 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_10)))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)4167))))))))));
    }
    for (long long int i_11 = 2; i_11 < 21; i_11 += 1) 
    {
        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)15209))))) ? (arr_36 [i_11 - 1]) : (((/* implicit */int) ((((/* implicit */_Bool) -133814535)) && (((/* implicit */_Bool) arr_35 [i_11 + 1] [i_11])))))));
        /* LoopSeq 3 */
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            arr_41 [i_12] = ((/* implicit */long long int) min((((/* implicit */int) (short)-18770)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_7)))) : (((/* implicit */int) arr_38 [i_11 - 1] [i_11 - 1]))))));
            arr_42 [i_11] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) ((unsigned char) var_2)))))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= ((~(((/* implicit */int) var_7)))))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((short) arr_35 [i_11] [i_12])))))) ? (((((/* implicit */_Bool) arr_35 [i_11 + 1] [i_11])) ? (arr_35 [i_11 - 1] [i_11]) : (arr_35 [i_11 + 1] [i_11 - 2]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
            var_26 = ((/* implicit */signed char) var_6);
        }
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            arr_47 [i_11 + 1] [i_11] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) min(((unsigned char)128), ((unsigned char)0)))) ? (((/* implicit */int) min((arr_43 [i_11]), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) arr_45 [i_11])))), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_40 [i_11])) | (((/* implicit */int) var_7))))))));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)50)), (arr_36 [i_13])))) ? (((((/* implicit */int) arr_40 [i_13])) | (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)65473)))))) : (((/* implicit */int) min(((short)32767), (((/* implicit */short) (signed char)6))))))))));
        }
        for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
            {
                var_28 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) arr_38 [i_14 - 1] [i_14 + 1])) ? (((/* implicit */int) arr_38 [i_14 + 1] [i_14 - 1])) : (((/* implicit */int) var_5))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)26973)) && (((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)2806))))))))));
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_8))));
                    arr_55 [i_11] [i_11] [i_11 - 1] [i_11 - 1] = ((/* implicit */int) arr_38 [i_11 - 2] [i_11]);
                }
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_39 [i_11 - 1] [i_11 - 1] [i_11 + 1]))), (((((/* implicit */_Bool) arr_39 [i_11 - 1] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_39 [i_11 - 2] [i_11 - 2] [i_11 - 2]))))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_52 [i_11 - 1] [i_14] [i_14] [i_11 - 1]))))))));
                    arr_58 [i_11 + 1] [i_17] [i_11 - 2] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 2; i_18 < 21; i_18 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((unsigned char) ((min((var_6), (((/* implicit */long long int) (unsigned short)65535)))) & (((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_35 *= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((arr_36 [i_15]) ^ (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) arr_48 [i_18] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_11 + 1] [i_11 + 1] [i_11] [i_11]))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                        var_36 *= ((/* implicit */unsigned int) ((unsigned long long int) (-2147483647 - 1)));
                        var_37 = ((/* implicit */unsigned short) ((long long int) var_16));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 1) /* same iter space */
                    {
                        arr_63 [i_11] [i_11] [i_11] [i_11] [i_15] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_11])) ? (((((/* implicit */_Bool) arr_49 [i_11 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (3757135767298054144ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_11 - 2])))));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_45 [i_11 - 1])), (((((/* implicit */_Bool) 0ULL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))))))) ? (max(((-(var_13))), (min((arr_37 [i_11] [i_11 - 2] [i_11 - 2]), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (3345828760U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)2806))))))))));
                    }
                }
                for (signed char i_20 = 0; i_20 < 22; i_20 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_5))))) / (min((((arr_60 [i_11 - 2] [i_11] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) (short)7931))))), (((/* implicit */long long int) (unsigned char)79))))));
                    arr_68 [i_20] [i_15] [i_14] [i_14 - 1] [i_14] [i_11] = ((/* implicit */unsigned int) arr_36 [i_15]);
                }
            }
            for (short i_21 = 0; i_21 < 22; i_21 += 2) /* same iter space */
            {
                arr_73 [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (max((min((((/* implicit */unsigned long long int) arr_72 [i_11 - 1] [i_14] [i_21])), (0ULL))), (((/* implicit */unsigned long long int) arr_62 [i_14 + 1] [i_14 + 1] [i_21] [i_11] [i_11 - 1]))))));
                arr_74 [i_14] [i_14] &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)7931), (((/* implicit */short) (signed char)95)))))) ^ (11159121863845673977ULL))))));
            }
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) arr_70 [i_11] [i_14] [i_14]))));
            arr_75 [i_11] = ((/* implicit */signed char) min((var_6), (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned short)240), (((/* implicit */unsigned short) (short)8679))))))))));
            arr_76 [i_11 + 1] [i_11] [i_11] = ((/* implicit */signed char) 4504969137359923839LL);
            arr_77 [i_11 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_51 [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 1])))) : (((/* implicit */int) max((((/* implicit */unsigned short) min((arr_59 [i_11] [i_11] [i_11] [i_11] [i_11]), ((short)7926)))), (min((var_7), (((/* implicit */unsigned short) var_12)))))))));
        }
        arr_78 [i_11] = ((/* implicit */unsigned char) min((((/* implicit */int) max(((unsigned short)42612), (((/* implicit */unsigned short) (short)7931))))), (max((((/* implicit */int) min(((short)8176), (((/* implicit */short) (unsigned char)64))))), ((-(((/* implicit */int) (short)-26974))))))));
        arr_79 [i_11] [i_11] = ((/* implicit */unsigned short) ((1811425457253131703ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) min((((/* implicit */short) arr_45 [i_11])), ((short)26974))))))))));
        arr_80 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), ((signed char)6))))) : (((((/* implicit */_Bool) arr_62 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_11 - 1] [i_11 - 2]))) : (9382299021513335715ULL)))));
    }
    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 2) 
    {
        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) (~(((((/* implicit */_Bool) (short)25061)) ? (-1473419091268356739LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))))))))));
        arr_84 [i_22] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (unsigned char)10)), (1859450395U))), (arr_66 [i_22] [i_22] [i_22] [i_22])));
    }
    var_43 = ((/* implicit */unsigned short) var_14);
    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) max((2096896U), (((/* implicit */unsigned int) var_5)))))));
    var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)11426)), (4294967295U)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) ((unsigned char) var_6))))))));
    var_46 = ((/* implicit */signed char) ((min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (short)32767)), (var_2))), (var_5)))))));
}
