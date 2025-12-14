/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129196
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [19LL] [i_1] [i_2] [i_3] [i_3] &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3])) % (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 3]))))), ((+(var_14)))));
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))), (arr_5 [i_2] [3]))))));
                            var_17 = ((/* implicit */int) min((max((var_14), (arr_10 [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 3]))), (((((/* implicit */_Bool) arr_7 [i_3 + 3] [i_3] [i_3 - 1] [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 3] [i_3] [i_3 - 1] [i_3 + 2]))) : (arr_10 [i_3 + 3] [i_3] [i_3 - 1] [i_3 + 2] [20] [i_3 + 3])))));
                            arr_14 [i_0] [i_1] [14LL] [i_3] [i_3 + 3] = ((/* implicit */signed char) max((((((/* implicit */int) arr_7 [i_0] [i_0] [5U] [i_0])) << (((((/* implicit */int) min((arr_1 [i_1]), (var_12)))) - (56))))), (((/* implicit */int) ((max((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]), (((/* implicit */long long int) (_Bool)1)))) <= (((/* implicit */long long int) max((((/* implicit */int) (signed char)-43)), (arr_12 [i_0] [i_1] [7LL])))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                /* LoopNest 2 */
                for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 3])) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) (short)-32751)))))))))))));
                            arr_20 [i_4] [(short)10] [(unsigned char)2] [i_5] = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) 7461699726391163884LL)) ? (402463753) : (((/* implicit */int) (short)17030))))))));
                            var_20 = var_3;
                            arr_21 [i_5] [i_5] [i_4] [10ULL] [i_1] [i_5] |= ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)-32723))) ? ((+(((/* implicit */int) arr_24 [i_6])))) : (((/* implicit */int) var_3)))))));
        var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_6 [i_6])) && (((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6]))))));
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) 2080374784U)) ? (5884601079773041452ULL) : (((/* implicit */unsigned long long int) 3045270393U))));
        arr_25 [i_6] = ((/* implicit */unsigned int) arr_3 [i_6] [14LL] [i_6]);
    }
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_24 |= ((/* implicit */signed char) ((((((/* implicit */int) var_9)) * (((/* implicit */int) (short)32750)))) / (((((((/* implicit */_Bool) (short)9883)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) var_2)))) * (((/* implicit */int) max((var_5), (arr_5 [(unsigned short)18] [i_7]))))))));
        var_25 = ((/* implicit */signed char) arr_1 [i_7]);
        var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) min((arr_17 [i_7] [i_7] [i_7]), (arr_17 [i_7] [i_7] [i_7])))) ? (max((((((/* implicit */_Bool) (unsigned short)28349)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_27 [i_7]))), (((/* implicit */long long int) ((int) arr_0 [i_7]))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_24 [i_7])), (arr_23 [(signed char)10])))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) | (12U))))))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)31))) <= (var_14)))), (((9223372036854775777LL) | (((/* implicit */long long int) -1296646788)))))), (((/* implicit */long long int) max((((/* implicit */short) arr_28 [i_11] [i_9] [i_7])), (var_0))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_6) : (var_13)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_1)))) ? (((((/* implicit */long long int) var_13)) & (arr_27 [i_7]))) : (((/* implicit */long long int) ((((arr_37 [i_7] [i_8] [i_8] [i_8] [i_9] [i_10] [i_11]) + (2147483647))) << (((arr_32 [i_7] [(signed char)9] [(signed char)10]) - (16657739362484879902ULL)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((703993357304710074LL) != (((/* implicit */long long int) -1191978805)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */int) max(((~(arr_41 [i_13] [i_12]))), (min((var_13), (((/* implicit */unsigned int) arr_44 [i_13] [2LL] [(unsigned short)6] [(unsigned short)6] [i_8] [i_7]))))));
                                arr_46 [i_7] [(_Bool)0] [i_13] [i_9] [i_13] [i_8] [i_13] = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) (unsigned char)16)))));
                            }
                        } 
                    } 
                    arr_47 [(unsigned char)11] [(_Bool)1] [i_9] [i_8] = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    }
    var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 1296646769)) && (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (var_6)))) != (((/* implicit */int) var_10))))) : (min((((294134393) >> (((((/* implicit */int) var_4)) - (38))))), (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (short i_14 = 1; i_14 < 16; i_14 += 3) 
    {
        for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    var_31 |= ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_54 [i_14 + 3] [i_14 + 1] [i_15])), (4744136982257829797ULL))));
                    var_32 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((arr_50 [(short)7]) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) arr_54 [(_Bool)1] [15LL] [(signed char)7]))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (-1190540076) : (-268435456)))) ? ((~(arr_10 [i_14] [i_14 - 1] [i_14] [i_15] [19U] [i_16]))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 2; i_17 < 16; i_17 += 3) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            {
                                var_33 = arr_10 [(short)1] [i_18] [i_17] [i_16] [i_15] [i_14];
                                var_34 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_14] [(unsigned short)0] [i_14])) ? (((/* implicit */int) arr_15 [i_14 + 3])) : (((((/* implicit */_Bool) arr_0 [i_14])) ? (((/* implicit */int) arr_58 [i_14] [i_14 + 2] [i_14 + 1] [i_14])) : (((/* implicit */int) arr_52 [16ULL] [i_15]))))))), (((((/* implicit */long long int) arr_0 [i_14 + 1])) | (((long long int) arr_54 [i_16] [i_15] [13ULL]))))));
                                var_35 |= ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_62 [i_14] [i_15] [i_15] [9U] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_48 [i_17 - 1]))))))) > (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) | (arr_51 [i_14 + 1])))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        {
                            var_36 = ((long long int) min((arr_17 [i_14 + 1] [i_14 + 1] [i_14 - 1]), (arr_17 [i_14 + 1] [i_14 + 1] [i_14 - 1])));
                            var_37 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_53 [i_14 + 2] [i_14 + 3] [i_14 - 1] [i_14 + 2])), (arr_12 [i_14 + 3] [i_14 + 3] [i_14 + 2]))))));
                            arr_68 [8] [i_15] [i_19] [i_19] [i_20] = ((/* implicit */signed char) (!((_Bool)0)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_21 = 0; i_21 < 19; i_21 += 1) 
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (short)21359)) ? (((((/* implicit */_Bool) 7461699726391163884LL)) ? (4486007441326080ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 16; i_22 += 4) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (unsigned char)32)) : (-1501524891)))) ? (((((/* implicit */_Bool) (short)-32758)) ? (1501524904) : (((/* implicit */int) (unsigned char)69)))) : ((~(((/* implicit */int) arr_3 [i_14] [(unsigned short)19] [i_23]))))))));
                                arr_76 [(unsigned char)16] [i_15] [i_15] [i_15] [i_15] [i_15] |= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_6 [i_15]))))), (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5884601079773041454ULL))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */short) max((((/* implicit */int) ((_Bool) max((131056U), (((/* implicit */unsigned int) arr_7 [i_14 - 1] [i_15] [i_15] [i_21])))))), (((arr_12 [i_14] [i_14] [i_14 - 1]) - (arr_12 [i_14 + 3] [i_15] [i_21])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 3) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_41 ^= ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_16 [i_21] [4ULL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_14 - 1] [(signed char)2])) && (((/* implicit */_Bool) arr_16 [i_15] [14U]))))) : (((/* implicit */int) min((arr_16 [i_14 + 2] [(signed char)12]), (arr_16 [i_14 + 2] [8])))));
                                var_42 &= ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned short) arr_63 [i_14 + 1] [i_24 - 1] [i_25]))));
                                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 1536747601)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6631))) : (var_6))))) ? (((((/* implicit */_Bool) (short)-17025)) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_21])), ((short)-32747)))) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_59 [i_24] [i_24 - 1] [i_24 + 2] [i_24 - 1] [i_24 - 1])) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (arr_61 [i_25] [i_25] [i_21] [0ULL] [4] [16ULL]))))))))));
                            }
                        } 
                    } 
                    arr_84 [i_15] [i_15] [i_21] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_75 [(_Bool)1] [i_15] [i_15] [i_14] [i_14 + 1])) == (arr_50 [3U])))) : (((/* implicit */int) ((_Bool) (short)-17019)))))));
                }
                for (signed char i_26 = 0; i_26 < 19; i_26 += 1) 
                {
                    var_44 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_88 [i_14] [i_14] [i_15] [i_26])) ? (((arr_77 [i_14] [i_14] [i_15] [i_15] [i_26] [i_26]) ? (((((/* implicit */_Bool) (short)-17009)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (4294967292U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1296646779)))))))) : (max((((unsigned int) arr_83 [i_14] [i_15])), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) arr_87 [i_14 + 3] [i_14] [i_14 + 3] [(_Bool)1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        for (long long int i_28 = 0; i_28 < 19; i_28 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))) && (((var_14) != (((/* implicit */long long int) var_13))))));
                                var_46 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_71 [i_14 + 2] [i_14 + 2] [i_28] [i_14 + 3] [i_14 + 1])), (arr_53 [i_14 + 2] [i_14 - 1] [i_14 + 2] [i_14 + 1])))) & (((/* implicit */int) max((((/* implicit */signed char) arr_71 [i_14 + 1] [i_14 + 3] [i_27] [i_14 - 1] [i_14 + 3])), (var_4))))));
                                var_47 ^= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_59 [i_27] [i_27] [i_27] [7LL] [i_27])) + (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) arr_48 [i_14 - 1])) > (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_48 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) < (9223372036854775807LL))))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1296646773)), (var_13)))) ? (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned long long int) 1296646801)) : (5884601079773041466ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
}
