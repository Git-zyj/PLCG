/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146891
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
    var_11 = ((/* implicit */unsigned int) ((unsigned short) var_9));
    var_12 = ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned int) ((int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [12LL]))))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_6)))))))))));
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((arr_0 [i_0 + 3]) ? (max((min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [(unsigned short)24] [i_0]))), (((/* implicit */long long int) arr_0 [i_0 + 3])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (min((arr_1 [(short)4] [22]), (((/* implicit */long long int) (unsigned char)18))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_15 ^= ((/* implicit */unsigned long long int) (unsigned char)16);
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned char)230))));
        }
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 + 4] [i_2])) ? (1715129134) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_7 [i_2 + 4] [i_2 + 4]))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (arr_1 [i_2] [i_2]))) * (((/* implicit */long long int) ((int) arr_4 [24])))))) ? (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])) : (((((/* implicit */_Bool) ((arr_0 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (5899069797164531787ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 2] [i_2]))) % (var_4)))) : (max((((/* implicit */unsigned long long int) arr_6 [i_2])), (var_0)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */int) max((arr_3 [(unsigned char)16]), (var_7)))), (2147483635))) + (((/* implicit */int) ((unsigned short) arr_0 [i_2 - 2])))));
        var_17 = ((/* implicit */signed char) min((var_17), (arr_5 [(unsigned char)11] [i_2])));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_21 [i_3] [i_4] [(unsigned short)11] = -18LL;
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_29 [i_3] [i_4] [i_6] = ((signed char) (+(var_5)));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_6 + 2])) || (((/* implicit */_Bool) arr_18 [i_3] [i_3 - 1] [i_6 + 2]))));
                            var_19 = (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_3] [i_4] [i_8] [i_6] [i_8 + 2] = arr_11 [i_3] [i_5];
                            var_20 = ((/* implicit */unsigned char) (unsigned short)24596);
                            arr_34 [i_8] [i_3] [i_8] [i_6] [i_8] = ((/* implicit */unsigned int) (((!(var_9))) ? (((((/* implicit */_Bool) arr_12 [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_3 - 1] [i_6])))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_8 - 1] [i_5] [i_8])) ? (((/* implicit */int) arr_24 [i_3] [i_6] [i_8 + 1] [i_6] [i_8])) : (((/* implicit */int) arr_24 [i_8] [i_6] [i_8 + 1] [i_6] [i_8]))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) /* same iter space */
                        {
                            arr_38 [i_4] [i_4] [i_5] [i_6] [i_9] |= ((/* implicit */unsigned long long int) var_7);
                            arr_39 [i_3] [i_3] [i_6] [i_3] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_9 - 2] [i_6] [i_5] [i_6] [i_6]))));
                            arr_40 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_3] [i_6 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_27 [i_3] [i_6 + 2] [i_3 - 2])) : (((/* implicit */int) arr_27 [i_4] [i_6 + 1] [i_3 - 1]))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((signed char) arr_30 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_10 + 3])))));
                            arr_44 [i_3] [i_4] [i_6] [i_6 - 2] [(unsigned char)5] = ((signed char) arr_37 [i_6] [i_3 - 2] [i_6 - 2] [i_6]);
                            var_23 = var_9;
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
                        {
                            arr_47 [(unsigned char)5] [i_6 + 2] [i_5] [i_6] [i_6 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_3 - 1] [i_6] [i_11 + 2])) ^ (((((/* implicit */_Bool) arr_43 [i_6] [i_6] [i_6] [i_5])) ? (((/* implicit */int) arr_30 [i_3] [i_3] [i_5] [i_6] [i_11])) : (((/* implicit */int) (unsigned char)12))))));
                            arr_48 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_3] [i_11 + 1])));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) arr_19 [i_5] [i_11] [i_11 + 2])))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_53 [i_6] [i_4] [i_6 - 1] = ((/* implicit */unsigned short) (~(arr_22 [i_3] [(signed char)3] [i_3] [i_3] [i_3 + 1])));
                            var_25 = ((/* implicit */unsigned char) (~(((var_5) << (((((/* implicit */int) arr_12 [(unsigned char)5])) - (225)))))));
                            arr_54 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_12] [i_6] = ((/* implicit */_Bool) ((long long int) arr_50 [i_3 - 1] [i_3] [i_6 + 1] [i_6 - 1] [(_Bool)1]));
                            var_26 += ((/* implicit */unsigned int) ((unsigned long long int) arr_24 [4ULL] [i_4] [i_5] [i_6] [i_12]));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((unsigned char) arr_37 [i_6] [i_5] [i_6 - 2] [i_13]));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (unsigned char)0))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_61 [7] [i_14] [i_14] [i_14] [i_14] [i_6] [0ULL] = ((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))));
                            var_29 &= ((/* implicit */unsigned int) ((arr_0 [i_6 + 1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (1864241306)))) : (((((/* implicit */_Bool) 3640402043U)) ? (arr_43 [i_4] [i_4] [i_4] [i_6 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
                            var_30 = ((/* implicit */long long int) ((int) var_5));
                            arr_62 [11LL] [i_5] [11LL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (arr_31 [i_3 + 1]) : (((/* implicit */unsigned int) ((int) arr_31 [i_3 - 1])))));
                        }
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) arr_51 [i_4] [i_4] [i_6 - 2] [i_6 - 2] [i_4] [i_4] [i_4])) : (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)27))))));
                        arr_63 [i_4] [i_4] [i_5] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)2])) ? (((/* implicit */int) ((_Bool) 1691516990U))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned char)184))))));
                    }
                    for (signed char i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) (-(((/* implicit */int) arr_46 [i_4] [i_4] [(unsigned char)0] [i_15] [i_4]))));
                        var_33 += ((/* implicit */unsigned char) arr_17 [i_15] [i_4]);
                    }
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        arr_70 [10LL] = ((/* implicit */int) var_5);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_64 [i_3] [i_4] [i_5] [i_16])) * ((+(((/* implicit */int) (unsigned char)71))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            arr_77 [i_3] [i_3] [i_18] [i_5] [(unsigned char)4] [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15425)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_2))))) || ((!(((/* implicit */_Bool) arr_60 [i_3] [i_3] [i_3]))))));
                            arr_78 [i_18] [i_3] [i_17] [(signed char)5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_3] [i_4] [i_18]))) ? (((/* implicit */long long int) arr_66 [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_17])) : (arr_43 [i_4] [i_4] [i_18] [i_17]))))));
                            arr_79 [i_3] [i_18] = ((/* implicit */signed char) arr_59 [(signed char)7] [i_18] [i_5] [i_4] [i_4]);
                        }
                        var_36 = ((/* implicit */int) var_9);
                    }
                    var_37 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38202)) ? (((/* implicit */int) arr_23 [2ULL] [i_3] [i_3] [i_4] [0LL])) : (((/* implicit */int) var_9))));
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((short) ((arr_68 [i_3 + 1] [i_3] [i_3] [i_4] [i_5] [i_5]) / (((/* implicit */int) var_2))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */signed char) max((var_39), (((signed char) arr_28 [7U] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1]))));
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) 5870318628122948276LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(unsigned short)8] [(short)10] [i_3 + 2] [i_3]))) : (var_5)))));
        arr_80 [i_3] [4LL] = ((/* implicit */long long int) 28672);
        var_41 += ((/* implicit */short) var_6);
    }
}
