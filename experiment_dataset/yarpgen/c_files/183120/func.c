/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183120
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
    var_17 &= ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((-(((/* implicit */int) ((signed char) var_11)))))));
    var_18 ^= ((/* implicit */unsigned char) ((var_10) == (((/* implicit */int) min((((/* implicit */short) var_3)), (var_4))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_19 += ((/* implicit */short) arr_0 [i_0]);
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 1])), (arr_0 [i_0 + 1])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_9 [(short)0] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_5 [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 1505461225)))) : (((/* implicit */unsigned long long int) min((arr_4 [(short)16] [i_2] [(unsigned short)11]), (((/* implicit */unsigned int) arr_1 [13U] [i_0 - 1]))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)23] [i_1] [i_1] [i_3] [i_1] [9]))) != (arr_4 [12LL] [i_2] [i_3])))))))));
                        arr_10 [i_0] [i_1] [i_2] [1ULL] = ((/* implicit */signed char) (+(2124434795U)));
                        arr_11 [i_0] [19U] [i_0 - 1] [i_0 - 1] [(unsigned short)0] [i_1] = ((max((max((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)34)) < (((/* implicit */int) var_14))))))) * (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])));
                        var_21 += ((/* implicit */unsigned char) (short)(-32767 - 1));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((arr_0 [i_0 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((8988138102654452031ULL) <= (6666063225115613823ULL))))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [13] [i_1] [i_1] [i_1]))))), ((+(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [12LL] [(signed char)12] [i_1] [i_1]))))))))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned char)111)), (arr_12 [i_4] [i_1] [i_0 - 1])))))) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) arr_8 [i_4 + 1] [i_2 + 2] [i_1 - 1] [i_0 + 1])), ((+(var_7)))))));
                        /* LoopSeq 3 */
                        for (int i_5 = 2; i_5 < 24; i_5 += 4) 
                        {
                            var_23 *= ((/* implicit */unsigned char) arr_4 [i_0 + 1] [i_0] [i_0]);
                            var_24 ^= ((/* implicit */unsigned int) arr_13 [i_0] [i_0]);
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)123)), (var_2)))) ? (arr_4 [i_4 + 1] [i_1 + 2] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)100)) / (((/* implicit */int) arr_3 [i_6] [i_2] [i_1])))))))));
                            var_25 += ((/* implicit */unsigned short) ((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1])))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_21 [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_26 += ((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) var_15)))))), (arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [(unsigned short)17] [i_0])));
                            var_27 = ((/* implicit */signed char) ((unsigned short) arr_7 [i_0] [i_0] [20ULL] [(short)22] [22] [(short)22]));
                            arr_24 [i_7] [i_1] [i_4] [i_2] [i_1] [i_0 - 1] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_4] [i_1])) ? (arr_4 [i_0] [i_0] [i_4]) : (arr_4 [i_0] [(unsigned short)10] [(unsigned short)10])))) || (((/* implicit */_Bool) 8988138102654452031ULL)))))));
                        }
                    }
                    var_28 = ((/* implicit */signed char) max((((((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1] [i_2 - 1])) != (((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 2] [i_2 + 2])))), (((((/* implicit */int) arr_8 [i_2 + 2] [i_1] [(_Bool)1] [i_0])) > ((~(var_7)))))));
                    /* LoopSeq 4 */
                    for (int i_8 = 2; i_8 < 21; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 2; i_9 < 23; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) max((min((((((/* implicit */int) arr_23 [i_2] [i_8])) + (arr_29 [i_0] [i_1] [i_0] [i_8] [i_9]))), (((/* implicit */int) arr_18 [i_2] [i_2] [i_2 - 2] [i_1] [i_2 - 1])))), (arr_28 [i_0] [i_0] [4] [i_0])));
                            var_30 ^= ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned short)65509)))), (((/* implicit */int) (short)(-32767 - 1)))));
                            var_31 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max((arr_4 [i_1] [(unsigned char)11] [i_1]), (1749638033U)))), (arr_0 [21]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_2])))));
                            arr_32 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_8 + 4] [i_8 - 2] [i_8 + 2] [i_8 - 1])) / (((/* implicit */int) arr_8 [i_0 + 1] [i_2 + 2] [i_8] [i_8 + 2])))) * (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_2 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_15 [i_2] [i_2] [3ULL] [i_8] [i_1] [i_0] [i_2]))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) 
                        {
                            arr_36 [i_1] [i_10 + 3] [i_8] [i_2] [(unsigned short)9] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
                            arr_37 [i_2] [i_1] [i_1] [i_2 + 1] [i_1] [i_1] &= ((/* implicit */_Bool) max((((int) min((arr_34 [i_0]), (((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [(signed char)7]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 1] [i_2 - 1])))))));
                            var_32 = ((/* implicit */unsigned int) (signed char)6);
                        }
                        var_33 = ((/* implicit */int) ((min((arr_0 [i_8]), (arr_0 [i_8 + 4]))) % (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)-89)))))));
                        var_34 += ((/* implicit */signed char) (((((+(((/* implicit */int) arr_7 [(signed char)15] [i_1 + 2] [(signed char)15] [i_8] [(signed char)15] [(signed char)15])))) | (((/* implicit */int) ((unsigned char) var_0))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2 + 1] [i_2] [i_0 + 1] [i_8] [i_0])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_0 + 1] [i_0] [i_0] [i_1] [i_0])) > (((/* implicit */int) arr_19 [i_1] [i_1] [i_11] [i_11 - 1] [(_Bool)1] [i_1 + 2]))));
                        var_36 = ((/* implicit */int) ((5849039790283740488LL) ^ (((/* implicit */long long int) arr_16 [i_1] [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_11 - 1] [i_1]))));
                        var_37 = ((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1]);
                    }
                    for (unsigned short i_12 = 3; i_12 < 23; i_12 += 4) 
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0 - 1] [i_1 + 2])))) : (min((arr_13 [i_0 - 1] [i_1 + 2]), (arr_13 [i_0 - 1] [i_1 + 2])))));
                        var_39 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_41 [i_1] [i_2 - 1] [i_2] [i_2])))), (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_41 [i_1] [i_1 + 1] [8] [i_12])) ^ (-531419369)))))));
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [22U] [i_12 + 1] [i_12] [i_12] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [0] [(short)13])), ((unsigned char)25))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_35 [i_0] [i_1] [i_2] [i_2] [i_12]) : (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_1] [i_2] [i_12 - 2]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(arr_31 [i_0] [i_0] [i_0] [i_2] [i_2 + 2] [i_2 - 2] [i_12])))))) : (max((min((((/* implicit */long long int) 1518600572)), (arr_35 [i_12] [i_12] [(signed char)2] [i_1 + 2] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (unsigned short)64485)) : (arr_26 [i_2] [i_2])))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_1] [i_12] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [(unsigned short)14] [i_2] [23U] [23U] [i_2 + 1]))));
                            var_41 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_29 [i_0] [i_1 - 1] [1] [i_12] [1])) & (var_12))) / (((/* implicit */unsigned long long int) -7523792349084103346LL))));
                            var_42 += ((/* implicit */_Bool) arr_39 [i_2 - 2] [i_0 - 1] [i_2] [i_0 - 1] [3]);
                            arr_47 [i_0] [i_0] [16ULL] [i_1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_39 [i_13] [i_1] [(unsigned short)5] [i_1] [(unsigned short)5])) : (((/* implicit */int) (signed char)120))))) ? (arr_16 [i_1] [i_1] [(unsigned short)14] [7U] [(unsigned short)5] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) arr_22 [i_0] [i_0] [(_Bool)1] [14LL] [i_13]))))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_14 = 2; i_14 < 22; i_14 += 1) 
                    {
                        arr_51 [i_0] [i_0] [(short)17] [i_2] [i_1] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_45 [i_1] [i_1])))) <= (arr_13 [i_14 + 2] [i_1 + 2])));
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            var_43 ^= ((/* implicit */unsigned char) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 2]);
                            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2] [i_14 + 2] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2] [i_14 + 2] [i_15]))) : (arr_4 [i_2 + 2] [i_2 + 2] [i_14 + 2])));
                            var_45 = ((/* implicit */int) (~(((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_0)))));
                        }
                        var_46 *= ((/* implicit */short) arr_16 [i_2] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            var_47 = ((unsigned short) (_Bool)1);
                            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) var_15))));
                            var_49 *= ((/* implicit */signed char) ((arr_17 [i_14 - 2] [i_14 + 1] [i_2 + 1] [i_2] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_2] [i_2] [i_2] [i_2 + 2])))));
                            arr_58 [i_0 - 1] [i_1] = arr_41 [i_1] [i_1] [i_1] [i_1 + 2];
                        }
                        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            var_50 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2])) * (((/* implicit */int) arr_39 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 - 2]))));
                            var_51 = ((((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_17] [i_0] [i_2] [i_1] [i_0] [i_0]))) - (var_11))) > (((/* implicit */long long int) (-(((/* implicit */int) (signed char)122))))));
                        }
                        var_52 += ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_2] [(unsigned short)22])))))));
                    }
                    var_53 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_52 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_1]))) : (var_11))) + (9223372036854775807LL))) >> (((((int) arr_52 [i_1])) + (91)))))) : (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_52 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_1]))) : (var_11))) + (9223372036854775807LL))) >> (((((((int) arr_52 [i_1])) + (91))) - (47))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_18 = 4; i_18 < 24; i_18 += 4) 
        {
            var_54 = ((/* implicit */short) ((max(((+(((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */_Bool) arr_4 [i_18 + 1] [(signed char)13] [(signed char)13])) ? (((/* implicit */int) arr_43 [(short)24] [(short)24] [i_18] [i_18] [i_0 - 1] [24])) : (((/* implicit */int) arr_30 [(signed char)1] [i_18])))))) != ((+(((/* implicit */int) min(((unsigned short)43067), (((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0 + 1] [i_18] [i_18] [(short)12])))))))));
            var_55 ^= ((/* implicit */unsigned char) arr_50 [i_18] [i_18] [i_0] [i_18] [i_0 + 1]);
            var_56 = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_8 [i_0] [i_18 - 2] [i_0] [i_18 - 2])))) / (((/* implicit */int) ((short) -1636662359276076897LL))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [19])))))) >= (((((/* implicit */_Bool) arr_17 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_18 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(signed char)5] [(signed char)5]))) : (arr_13 [i_0] [i_0]))))))));
        }
    }
}
