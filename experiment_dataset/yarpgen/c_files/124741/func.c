/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124741
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_13)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (4294967295U))))))) && (max((((8U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (4294967284U)))))));
        arr_4 [i_0] = max((min((((long long int) var_5)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_15))))))), (((/* implicit */long long int) var_10)));
        var_21 = arr_2 [i_0] [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [8LL])) - (((/* implicit */int) arr_5 [(short)10])))))))));
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_5 [i_1])))))) % (((((/* implicit */_Bool) ((signed char) var_11))) ? (min((((/* implicit */unsigned long long int) var_8)), (3400493271781443344ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)1536), (((/* implicit */unsigned short) (signed char)-101))))))))));
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_8 [i_1] [i_2 - 1] [i_2])))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_24 -= ((/* implicit */unsigned long long int) 1U);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 639004243U)))) : (((((/* implicit */_Bool) 3400493271781443351ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(unsigned short)13] [8U])))))))) : (((((/* implicit */unsigned long long int) (~(2047)))) & (max((var_9), (((/* implicit */unsigned long long int) (signed char)-89))))))));
            }
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) var_7))), (min((((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [(unsigned short)13])), (var_1)))))) ? (((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2 - 1]))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_11))))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_9 [(signed char)8]))));
        }
        for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_28 = ((/* implicit */short) arr_9 [i_1]);
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (unsigned char)180)), (4294967295U))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            arr_18 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-45)) && (((/* implicit */_Bool) arr_9 [i_1])))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_5 - 1]))))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_1))));
            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */int) var_14)) ^ (arr_9 [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) (unsigned char)25))))))) < (((/* implicit */int) var_18))));
            arr_19 [i_1] = ((/* implicit */short) var_15);
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_31 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162))))) | ((~(((/* implicit */int) (signed char)101))))))));
            var_32 &= ((/* implicit */short) arr_5 [i_6]);
        }
        var_33 = ((/* implicit */unsigned char) (short)32767);
    }
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) ((int) (unsigned short)55156));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            arr_30 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_2 [(signed char)2] [8LL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) var_18))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) var_19)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_23 [(signed char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (arr_22 [i_8] [i_8] [(unsigned short)4]))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)16)) != (((/* implicit */int) arr_8 [i_8] [i_8] [i_8])))))));
            arr_31 [(unsigned short)3] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((-2296139148576482863LL), (((/* implicit */long long int) arr_23 [i_8]))))) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_0 [i_8]))))));
            var_34 -= ((/* implicit */unsigned long long int) arr_21 [i_7]);
        }
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_35 *= ((/* implicit */unsigned short) 6667266807041101478LL);
            var_36 = ((/* implicit */unsigned int) min((var_36), ((-((-(max((((/* implicit */unsigned int) (short)-1)), (639004216U)))))))));
            var_37 = ((/* implicit */short) 4294967286U);
            arr_35 [1U] [i_9] = ((/* implicit */unsigned char) ((signed char) (unsigned short)65535));
        }
        /* LoopSeq 1 */
        for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) 
        {
            var_38 = ((/* implicit */unsigned char) ((unsigned int) var_8));
            arr_40 [i_7] = ((/* implicit */signed char) min((15046250801928108264ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((6U) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
            arr_41 [i_7] [i_10 - 3] [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) arr_9 [8ULL])) == (9223372036854775807LL))))))) ? (max(((((_Bool)0) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((6667266807041101478LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */int) max((arr_24 [i_7] [i_10 - 3]), (arr_24 [i_7] [i_10 + 2]))))));
        }
        var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24246))) + (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (arr_2 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255))))))));
    }
    for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
    {
        var_40 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_25 [i_11 - 1])) ? (((/* implicit */int) arr_25 [i_11 + 2])) : (((/* implicit */int) arr_25 [i_11 + 2]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                arr_48 [i_11 - 1] [i_12] [i_11 - 1] [(unsigned char)4] = ((/* implicit */unsigned int) (short)-21);
                var_41 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_11] [i_12])) || (((/* implicit */_Bool) var_1))))) << (((((/* implicit */int) (signed char)-69)) + (93)))));
                /* LoopSeq 4 */
                for (short i_14 = 2; i_14 < 9; i_14 += 4) 
                {
                    var_42 ^= ((/* implicit */signed char) arr_42 [i_14 - 2] [i_14 - 2]);
                    var_43 ^= ((/* implicit */signed char) (_Bool)1);
                    var_44 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_23 [(short)10])) + (916310449))));
                    var_45 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_47 [i_11] [i_12] [i_11] [i_14 - 1]))));
                }
                for (short i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        arr_57 [(short)2] [i_12] [i_12] [i_13] [i_13] [(unsigned char)2] [i_13] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)4259)) ? (((/* implicit */unsigned long long int) 4294967294U)) : (8876438544234255702ULL))) + (((/* implicit */unsigned long long int) 13U))));
                        var_46 = ((/* implicit */short) arr_23 [i_13]);
                        var_47 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)34012)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-1LL))));
                        arr_58 [i_11] [i_12] [i_13] [i_12] [i_16] = ((/* implicit */long long int) ((unsigned short) 3287639091U));
                    }
                    for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        arr_61 [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_12]))));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1007328219U)) && (((/* implicit */_Bool) arr_55 [i_11] [i_11] [i_11] [i_11] [i_12] [i_11 - 1] [(short)3]))));
                        var_49 = ((/* implicit */_Bool) ((signed char) var_7));
                    }
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11] [i_11 - 1] [i_11 - 1] [i_15]))) + (((((/* implicit */_Bool) 219097764U)) ? (14056899548919537641ULL) : (((/* implicit */unsigned long long int) var_13))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 1; i_18 < 9; i_18 += 3) 
                    {
                        arr_65 [i_11] [i_11] [(unsigned short)8] [i_11 + 1] [i_12] [i_11] = ((/* implicit */signed char) (short)-11206);
                        arr_66 [i_11] [i_12] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)8))));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 3) 
                    {
                        arr_69 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_11] [i_11])) ? (3951118574959311269ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11] [i_15] [i_19])))));
                        arr_70 [i_12] [i_12] [i_13] [3U] [i_19] [i_13] [(signed char)0] = ((/* implicit */_Bool) ((int) arr_59 [9] [(short)2] [4ULL] [i_15] [4LL] [i_19] [i_15]));
                        var_51 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_11] [i_19 + 2] [i_19 + 2] [i_15] [i_19] [i_15])) ? (((((/* implicit */_Bool) 0LL)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7622))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24246)))));
                    }
                    var_52 = ((/* implicit */int) min((var_52), ((((-(var_19))) << (((((((/* implicit */_Bool) arr_12 [i_11 + 1] [i_13])) ? (((/* implicit */int) arr_27 [(unsigned short)10])) : (((/* implicit */int) (unsigned short)41292)))) - (22906)))))));
                }
                for (short i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
                {
                    var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) arr_27 [(unsigned char)7]))));
                    var_54 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_11] [i_11])))));
                }
                for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    var_55 = ((/* implicit */long long int) ((signed char) arr_16 [i_11 + 1]));
                    arr_77 [(_Bool)1] [i_13] [i_12] = ((/* implicit */unsigned short) (-(arr_53 [i_11 + 2])));
                }
            }
            var_56 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)68))));
            arr_78 [i_12] = ((/* implicit */short) 2147483647);
            var_57 *= ((/* implicit */signed char) arr_2 [i_11 - 1] [i_11 + 2]);
        }
        for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            var_58 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_11))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41312)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3968))))))))));
            var_59 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 6622114593759500019ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (signed char)-115)) ? (3872366013U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_11]))))))))));
        }
    }
    var_60 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) var_0)), (var_4))))) << (min((((/* implicit */unsigned int) var_0)), (((var_13) ^ (var_13)))))));
    var_61 = ((/* implicit */_Bool) var_13);
    var_62 = ((/* implicit */short) var_16);
}
