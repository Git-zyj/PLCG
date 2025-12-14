/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15305
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_7), (var_10))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13682893881701704943ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (3943299305U))))))) * (((/* implicit */int) ((short) var_5))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [(unsigned short)2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                    var_17 = var_9;
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_14))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_11))))))))) : (((((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_9 [i_0] [i_1])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) : (arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)114))))))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_2]), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1525)) ? (((/* implicit */int) arr_8 [i_2] [i_0] [i_0])) : (((/* implicit */int) var_7))))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_3])))))));
                    /* LoopSeq 4 */
                    for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_3] [i_3] [i_1] [i_4] = arr_1 [i_0] [(unsigned short)1];
                        arr_18 [i_0] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1520)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)7] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_1]))));
                        arr_19 [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_3] [i_1] [i_0])))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), (var_3)))) : (((/* implicit */int) (signed char)40))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) 18446744073709551589ULL);
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned int) (((-(((/* implicit */int) var_13)))) >> (((/* implicit */int) ((_Bool) 18446744073709551576ULL)))))))));
                        arr_23 [(unsigned short)0] [i_1] [2ULL] [i_5] [i_5] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (max((17311506103098804029ULL), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [3ULL])))) : (((/* implicit */unsigned long long int) var_6))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_27 [i_1] [(signed char)1] [i_3] [i_6] = ((unsigned long long int) (unsigned short)64013);
                        arr_28 [i_1] [10ULL] [i_1] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [(short)6])) % (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (arr_15 [8ULL] [8ULL] [i_1] [i_6] [(unsigned char)5])))) : (((((/* implicit */_Bool) 1081827435U)) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_32 [i_1] = arr_1 [i_7] [i_1];
                        arr_33 [i_0] [(_Bool)0] [0U] [0U] [i_0] [i_0] &= ((/* implicit */long long int) var_3);
                        arr_34 [i_1] = ((/* implicit */short) 5812120958807902555ULL);
                    }
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [i_1] [(signed char)8])) ? (arr_15 [i_3] [0U] [4U] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_16 [i_0] [i_0])))) : ((+(((/* implicit */int) (unsigned short)9152)))))))))));
                    var_21 -= ((/* implicit */signed char) var_4);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_8 = 3; i_8 < 8; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_9 [i_1] [(signed char)4]))));
                        var_23 += ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_8 - 2])) & (((/* implicit */int) var_10)))));
                        var_24 = ((/* implicit */unsigned long long int) (unsigned short)0);
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))))));
                    }
                    for (unsigned char i_9 = 3; i_9 < 8; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_26 -= ((unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_13);
                            var_27 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_24 [(short)4] [i_3] [i_1 - 2] [(short)4])) : (((/* implicit */int) arr_37 [i_0] [i_1 + 1] [i_3] [i_9] [0U])))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
                        {
                            arr_44 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) >= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) (unsigned short)36752)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)64011)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_9]))))))))));
                            arr_45 [i_0] [(short)6] [i_1] [i_3] [i_9] [i_11 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12670169675351753576ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [(signed char)0] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)128)) : (((/* implicit */int) (unsigned short)64020))))) : (max((((((/* implicit */_Bool) arr_37 [5U] [i_1 - 3] [i_3] [i_9] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (432345564227567616ULL))), (((((/* implicit */_Bool) 12583709376451372733ULL)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))))));
                        }
                        for (unsigned int i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((arr_6 [(signed char)10] [(signed char)10] [i_3] [i_9]), (arr_6 [i_1] [i_3] [i_3] [i_9 + 3])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)64006)))) : ((+(((/* implicit */int) var_8)))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((unsigned long long int) var_8)) - (1135237970610747579ULL)))))))));
                        }
                        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 3) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [(unsigned short)9] [i_3] [i_1] [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(18446744073709551606ULL))))));
                            arr_54 [i_1] [i_1] [4U] = ((/* implicit */_Bool) var_3);
                        }
                        arr_55 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */unsigned int) 6338966815257170823ULL);
                    }
                    for (unsigned char i_14 = 3; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        arr_59 [i_0] [i_1] = ((/* implicit */short) ((18446744073709551592ULL) & (18079019995259364671ULL)));
                        arr_60 [i_0] [i_0] [i_0] [i_1] [10U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))), (((unsigned int) (unsigned char)32)))))));
                        arr_61 [i_0] [i_0] [i_0] [10U] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [4U] [i_1] [i_1] [8U]))));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        arr_66 [i_1] = ((/* implicit */short) ((signed char) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17311506103098804041ULL)))));
                        arr_67 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 10ULL)) ? (10818564630999108616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))));
                        var_31 += ((/* implicit */short) ((unsigned int) 1231658401U));
                    }
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
                    {
                        arr_70 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))), (max((3819065001U), (((/* implicit */unsigned int) var_3))))))) ? ((+(arr_65 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0] [i_0]))) : (((unsigned long long int) ((((/* implicit */int) (short)7168)) >> (((((/* implicit */int) arr_7 [i_0] [i_0])) - (52137))))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [5ULL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) min((arr_51 [i_17] [i_15] [i_0] [i_0] [i_0] [i_0]), (var_2))))))) ? (((((arr_40 [i_0] [i_1] [i_1] [i_15] [i_17]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_1] [i_15] [i_17] [i_0] [i_1] [i_15]))) <= (arr_0 [(_Bool)1]))))) : (((((/* implicit */_Bool) (short)-21398)) ? (var_6) : (arr_0 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))))));
                        var_33 = ((/* implicit */short) (~((((_Bool)1) ? (9985310095354338034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9072)))))));
                    }
                    var_34 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-21398)), ((unsigned short)28974))))) | (2381838386644549801ULL))));
                    var_35 = ((((((/* implicit */_Bool) ((signed char) (unsigned short)43745))) ? (((((/* implicit */int) var_12)) & (((/* implicit */int) var_12)))) : (((/* implicit */int) ((signed char) arr_29 [i_1] [i_1] [i_1] [i_1]))))) > (((/* implicit */int) (((~(var_4))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    var_36 -= ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) var_8)) ? (8461433978355213581ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                }
                arr_71 [(unsigned char)8] &= ((/* implicit */unsigned char) ((var_5) ? (((unsigned int) ((((/* implicit */long long int) arr_3 [i_0] [(signed char)6])) / (arr_26 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) ((arr_13 [i_0]) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_1 - 1] [(unsigned short)10])))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2477035328U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_0])))))));
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) & (min((6454023316739236644ULL), (((/* implicit */unsigned long long int) (short)-8611)))))) << (((11979483158785994102ULL) - (11979483158785994051ULL)))));
}
