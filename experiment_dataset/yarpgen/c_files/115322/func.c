/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115322
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_3))) : (var_7))) : ((-((~(var_7)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) != (var_4)));
                    arr_8 [i_0] [4] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((3612641318U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) ? ((+(3612641342U))) : (682325953U)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (-(((int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_5))))));
                            arr_16 [i_3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (-((-(arr_9 [i_4 - 1] [i_3 + 1] [(unsigned char)1] [i_3] [i_2] [i_2])))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_1] [(short)1] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_1)) >> (((var_3) - (1874995729U))))))) / (min((((/* implicit */unsigned long long int) ((var_6) | (((/* implicit */long long int) var_10))))), (((var_11) & (((/* implicit */unsigned long long int) var_3))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [(short)3] = ((/* implicit */_Bool) ((signed char) ((signed char) arr_17 [i_3] [i_5 + 2] [i_5 + 2] [i_3 + 2] [i_3] [i_3])));
                            arr_23 [i_5] [i_3] [i_3] [i_0] = ((/* implicit */short) var_11);
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 1) 
                        {
                            arr_28 [i_3] = ((/* implicit */signed char) ((((min((var_4), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_2])))) & (((/* implicit */unsigned long long int) (-(arr_4 [i_6 - 1])))))) - (((/* implicit */unsigned long long int) (-(arr_12 [i_3] [i_2] [i_3]))))));
                            arr_29 [i_6] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) == (((/* implicit */int) (unsigned char)29)))))) : (arr_10 [i_0] [i_1] [i_6 - 3]))), (((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned int) arr_13 [i_0] [i_0])), (arr_12 [i_3] [i_3 - 2] [i_3])))))));
                            arr_30 [i_3] [i_3 - 1] [i_0] [(short)6] [i_3] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) | ((~(var_0))))), (((/* implicit */unsigned int) ((short) (~(var_0)))))));
                            arr_31 [i_0] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_6 + 2])), (var_9)))) : ((~(((/* implicit */int) var_8))))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 4) 
                        {
                            arr_34 [i_7] [i_3] [i_2] [i_1] [i_7] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_10)) : (var_5)))))));
                            arr_35 [i_3] [i_7] = ((/* implicit */unsigned int) (-(((((var_4) * (((/* implicit */unsigned long long int) var_7)))) / (((((/* implicit */_Bool) var_0)) ? (var_11) : (var_4)))))));
                            arr_36 [i_7] [i_7] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) (-((~(((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (short)-2984))))))));
                        }
                        arr_37 [i_0] [i_3] [i_1] [i_1] [i_2] [i_2] = ((max((((arr_32 [i_3] [i_1] [i_1] [i_3] [i_0] [i_3]) | (arr_19 [i_3] [i_1] [i_3]))), (((/* implicit */unsigned long long int) var_10)))) + (var_11));
                        arr_38 [i_3] [2U] [i_1] [i_3] = ((/* implicit */unsigned short) (-(max((min((var_3), (var_0))), (((/* implicit */unsigned int) var_1))))));
                    }
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        arr_43 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (arr_4 [i_1]) : (((/* implicit */long long int) arr_14 [i_8] [i_8] [(signed char)5] [i_1] [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))) | (((((/* implicit */_Bool) min((arr_42 [i_0] [i_1] [i_2] [i_8]), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_2] [i_0]), (((/* implicit */unsigned int) var_8))))) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [(unsigned short)6] [i_2] [i_8]))))))));
                        arr_44 [i_0] [i_1] [i_2] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_8] [i_1] [i_2] [0])) ? (arr_32 [i_0] [i_8] [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_2] [i_0])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(var_10))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))))))));
                        arr_45 [i_8] [i_1] = (((((~(var_6))) != (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_8] [i_2] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) ? (((((var_11) != (arr_9 [i_8] [i_0] [i_1] [i_1] [i_0] [i_0]))) ? (max((arr_32 [i_8] [i_2] [i_8] [i_8] [i_1] [i_8]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_17 [i_1] [i_0] [0LL] [i_1] [0LL] [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((var_5), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)74)) ? (2660389846U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5437))))))))));
                        arr_46 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(arr_20 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    }
                    for (signed char i_9 = 2; i_9 < 8; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_52 [i_0] [i_1] [i_0] [7ULL] [i_9] [i_10] = ((/* implicit */signed char) (-(((var_11) >> (((var_11) - (10571674940693142714ULL)))))));
                            arr_53 [i_0] [(unsigned char)5] [(unsigned short)4] [i_2] [i_9] [i_9] [i_10] |= ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            arr_54 [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (max((((var_4) & (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_20 [i_1]))))));
                            arr_55 [3ULL] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0]))) : (arr_24 [i_0] [i_1] [i_0] [i_10]))) > (((/* implicit */long long int) ((arr_40 [i_0] [i_1] [(_Bool)1] [i_9 + 1] [i_10]) >> (((((/* implicit */int) var_2)) - (213))))))))), ((-((-(var_4)))))));
                        }
                        arr_56 [i_0] [i_1] [i_2] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(min((arr_41 [i_0] [i_0] [i_2] [(unsigned char)3]), (((/* implicit */unsigned int) arr_50 [i_9] [i_2] [i_2] [i_1] [i_0]))))))) & ((~(var_6)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_11 = 2; i_11 < 6; i_11 += 3) 
                        {
                            arr_61 [i_11 + 2] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_1);
                            arr_62 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */signed char) (-(arr_5 [i_11 - 2] [i_9 + 1] [0LL] [i_9])));
                        }
                        arr_63 [i_9 - 1] [i_9] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_0))) != (max(((-(((/* implicit */int) (unsigned char)150)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_50 [(unsigned char)4] [i_1] [i_1] [(unsigned char)4] [(unsigned char)4])) : (((/* implicit */int) var_8))))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        arr_67 [i_12] [(unsigned char)6] |= ((/* implicit */signed char) min((min((((/* implicit */long long int) (-(var_7)))), (max((((/* implicit */long long int) arr_64 [i_12])), (var_5))))), ((+((-(var_6)))))));
        arr_68 [i_12] = min((var_7), (var_0));
    }
    for (signed char i_13 = 2; i_13 < 18; i_13 += 1) /* same iter space */
    {
        arr_71 [i_13] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_9)), (var_7))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) arr_69 [i_13])))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_70 [i_13])) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) arr_70 [i_13]))))) ? (((/* implicit */long long int) min((var_10), (var_3)))) : (((var_8) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_13]))))))));
        arr_72 [15LL] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (-(var_5)))))))));
    }
    for (signed char i_14 = 2; i_14 < 18; i_14 += 1) /* same iter space */
    {
        arr_75 [i_14] = (-(((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_0)))) & (((var_11) >> (((var_6) - (2312553539122056551LL))))))));
        arr_76 [i_14] [i_14] = ((/* implicit */_Bool) arr_70 [i_14]);
        arr_77 [i_14] [i_14] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_74 [i_14 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_14 + 1]))) : (var_11)))));
    }
}
