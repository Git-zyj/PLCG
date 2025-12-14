/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172192
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
    var_18 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_14)))))), (((int) max((((/* implicit */int) var_10)), (var_4))))));
    var_19 |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_9)), (var_7))) | (((var_2) + (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((var_6) << (((min(((+(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (arr_7 [i_1] [i_2] [i_3 + 1] [i_4])))))) - (1ULL))));
                                var_21 = ((/* implicit */int) max((var_21), ((-(((/* implicit */int) (signed char)113))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) 
                    {
                        var_22 -= ((/* implicit */int) min((((/* implicit */signed char) var_16)), (((signed char) arr_8 [i_5] [i_5 + 3] [i_5 + 3] [i_5 - 2] [i_5]))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-17))))))) : (((/* implicit */int) arr_2 [i_5]))));
                            arr_20 [i_0] [i_1] [(short)15] [i_2] [i_5 + 2] [i_1] [(short)15] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) arr_12 [i_5 - 2] [i_5] [i_5 - 2] [i_5 + 2] [i_5 + 4])), (arr_10 [i_5 - 2] [(signed char)10] [i_5 - 2] [i_5 + 2] [i_5 + 4]))));
                        }
                        for (int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            var_24 &= min((min(((~(((/* implicit */int) var_8)))), ((~(((/* implicit */int) arr_14 [7LL] [i_1] [7LL] [i_5] [(unsigned char)13])))))), (((((/* implicit */_Bool) 268435455)) ? (((/* implicit */int) var_3)) : (arr_0 [i_0] [i_5]))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)176)), (((((/* implicit */_Bool) arr_13 [i_5] [i_7 - 1] [15] [10])) ? (((/* implicit */long long int) arr_12 [i_5 + 2] [i_1] [i_7 - 1] [i_5] [i_7])) : (arr_13 [i_7 + 1] [i_7 + 1] [i_7 - 1] [3])))));
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -802816838))))), (min((((/* implicit */unsigned long long int) arr_8 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1])), (var_7)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_17)))));
                            var_28 = ((/* implicit */unsigned long long int) arr_17 [i_0] [9ULL] [i_2] [i_5 + 1] [i_8 + 1] [i_8]);
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 1] [(unsigned char)1] [i_5] [i_8 + 1]))));
                        }
                        for (int i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                        {
                            var_30 += ((/* implicit */int) ((unsigned char) ((int) ((int) arr_22 [(unsigned char)7] [(unsigned char)7] [4] [(unsigned char)17] [4]))));
                            var_31 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_8 [i_9 + 1] [(short)3] [i_9 - 1] [i_5] [i_5])) ? (arr_8 [(short)11] [i_9 + 1] [i_9 + 1] [i_0] [i_0]) : (arr_8 [i_9] [i_9 + 1] [i_9 + 1] [(_Bool)1] [(_Bool)1]))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_4))));
                        }
                        var_33 = min(((+(((int) arr_21 [i_0] [(unsigned char)0] [(unsigned char)8] [i_0] [i_0])))), (((/* implicit */int) ((short) ((int) (unsigned char)6)))));
                        var_34 = ((/* implicit */_Bool) min((14036124256548676900ULL), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_4 [i_0] [i_0])))) >> (((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (short)511)))) + (40))))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        arr_30 [i_0] [i_10] [0] [i_10 - 1] = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)-17)), (max((((/* implicit */short) arr_21 [i_0] [i_10] [i_10] [i_10 - 1] [i_10 + 1])), ((short)32767)))));
                        arr_31 [i_10] [i_1] [(short)8] [i_10 + 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_10 + 1])) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */_Bool) arr_8 [3LL] [3LL] [i_2] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) var_14)))))), (var_6)));
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)102)), (max((((/* implicit */unsigned long long int) (signed char)-58)), (8823967887690911954ULL))))))));
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27483)) ? (arr_9 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10]) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) max((min(((signed char)-115), ((signed char)47))), (((/* implicit */signed char) ((arr_21 [i_2] [i_10] [i_2] [i_1] [i_0]) && (((/* implicit */_Bool) var_4)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_11 - 2] [(unsigned char)15] [i_0] [i_1] [i_0] [i_0])) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0] [10LL] [i_0] [i_0] [2])), (var_0)))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_4 [(signed char)15] [i_1]))))))));
                            var_37 = ((/* implicit */int) (+(min((arr_13 [(signed char)0] [i_10 - 1] [11] [11]), (((/* implicit */long long int) (_Bool)0))))));
                            var_38 = ((((1547619594) + (arr_7 [i_10 + 1] [i_10 - 1] [i_11 - 1] [i_11 - 2]))) * (((((/* implicit */int) (unsigned char)112)) / (-659763073))));
                        }
                        for (int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_39 = max((((int) arr_22 [i_10] [(_Bool)0] [i_10] [i_10 - 1] [(unsigned char)9])), (((/* implicit */int) max((var_10), (((/* implicit */short) arr_17 [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [5]))))));
                            arr_38 [i_0] [i_12] [12] [i_10] [i_10] = ((/* implicit */unsigned char) min((max(((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_10 + 1] [i_10] [i_0])))), (var_6))), (min((var_4), (min((255), (((/* implicit */int) (short)-22723))))))));
                            arr_39 [i_10] [i_10] = ((/* implicit */unsigned char) min((13312610461619729170ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_10 [i_2] [i_2] [i_2] [(_Bool)1] [(unsigned char)15]), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_0] [i_2] [i_0] [i_10 + 1] [i_10 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14105)))))))) ? (((((((((/* implicit */_Bool) 1310073162)) ? (var_13) : (arr_36 [i_0] [i_2] [i_13]))) + (2147483647))) >> (((6841074134169967474LL) - (6841074134169967445LL))))) : (((/* implicit */int) ((signed char) -268435456))))))));
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */int) min(((short)2047), (((/* implicit */short) var_16))))) & (((/* implicit */int) max((arr_16 [i_10 - 1]), (arr_16 [i_10 - 1]))))));
                        }
                    }
                    var_42 = ((/* implicit */_Bool) max((((((int) arr_26 [i_0] [i_0] [(unsigned char)5] [i_1] [i_0])) & (((/* implicit */int) ((short) arr_26 [(unsigned char)12] [(_Bool)1] [i_2] [i_0] [i_2]))))), (((-924371284) + (((int) (short)-26011))))));
                    var_43 -= ((((/* implicit */int) ((signed char) max((arr_34 [14] [i_1]), (((/* implicit */int) (_Bool)0)))))) != (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) max((var_4), (((/* implicit */int) var_16)))))), (max((983363953), (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    var_45 = ((/* implicit */_Bool) ((((unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_14] [i_15] [i_15]))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_37 [i_0] [i_14] [i_15]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        var_46 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                        var_47 ^= (-(min((((/* implicit */int) (signed char)-124)), (arr_43 [i_0]))));
                        arr_52 [i_0] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)118))));
                    }
                }
            } 
        } 
    }
    var_48 ^= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_15)))));
    /* LoopSeq 1 */
    for (int i_17 = 0; i_17 < 11; i_17 += 2) 
    {
        var_49 ^= ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126))))), (min((arr_45 [i_17] [i_17]), (arr_45 [i_17] [i_17])))));
        arr_57 [(short)8] = ((/* implicit */_Bool) arr_34 [(short)6] [(short)6]);
        var_50 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_50 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) max((var_3), (var_9)))) : (((((/* implicit */_Bool) 2147483647)) ? (965058356) : (((/* implicit */int) (signed char)-46)))))));
    }
}
