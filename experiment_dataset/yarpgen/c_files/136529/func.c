/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136529
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
    var_14 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_12)))) & (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))) - (var_4)));
        arr_5 [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 1]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (var_3)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1125027494)) : (arr_3 [i_1] [i_1])))));
                        var_15 |= ((/* implicit */unsigned int) ((arr_8 [i_3 + 2] [i_0 + 1]) >= (((/* implicit */unsigned int) var_0))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            var_16 ^= ((/* implicit */long long int) (+(((/* implicit */int) max((arr_10 [i_4] [2] [i_5 + 1] [(unsigned char)4]), (arr_10 [9] [9] [i_5 + 1] [i_5]))))));
            arr_19 [i_5] [i_4] = ((/* implicit */long long int) arr_2 [i_5 - 1]);
            arr_20 [i_4] = ((/* implicit */signed char) max((max((((/* implicit */unsigned short) arr_6 [i_4])), (arr_9 [0] [0] [i_4 + 2]))), (((/* implicit */unsigned short) max((arr_15 [i_5 + 1] [i_5 + 1]), (arr_15 [i_5 + 1] [(signed char)2]))))));
        }
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_23 [i_4 + 2] [i_6] = ((/* implicit */int) ((((unsigned long long int) var_11)) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) arr_14 [i_4 + 1])))))));
            arr_24 [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_3 [i_4] [i_4]) | (arr_12 [i_6] [i_6] [i_6] [i_6])))))) | (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (arr_17 [i_4]) : (var_0)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) ^ (var_6)))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    arr_34 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_4] [i_4 + 1] [i_4 + 2] [i_9])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (arr_30 [i_4 + 2] [0U] [9LL] [0U]))))));
                    arr_35 [i_7] [9U] [i_7] = ((/* implicit */unsigned char) ((arr_22 [i_4 - 1] [i_4 + 1]) ? (((/* implicit */int) arr_22 [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) arr_22 [i_4 + 1] [i_4 - 1]))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_4] [i_4] [i_4] [i_4 + 1]))) ? (arr_7 [i_4 + 2] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4 - 1]))));
                    arr_38 [i_4] [i_7] [i_10] [i_10] |= ((/* implicit */_Bool) ((arr_6 [i_4 + 2]) ? (((/* implicit */unsigned long long int) arr_32 [i_4 + 1] [i_10] [i_4 - 1] [i_4 + 1])) : (arr_12 [i_10] [i_4 + 1] [i_4 - 1] [i_4 - 1])));
                }
                var_19 ^= var_6;
                arr_39 [i_7] [i_4] [i_7] = ((/* implicit */long long int) var_9);
                arr_40 [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) ((arr_7 [i_4 + 1] [i_7]) > (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                var_20 = ((/* implicit */int) (~((-(arr_36 [i_4] [i_7] [i_8] [i_4 - 1] [i_7] [i_7])))));
            }
            var_21 = ((/* implicit */int) arr_26 [i_7] [i_7] [i_4 + 1]);
        }
        /* LoopNest 3 */
        for (unsigned int i_11 = 2; i_11 < 7; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_16 [i_11 - 2])))) ? (((((/* implicit */_Bool) arr_42 [i_4 + 1])) ? (arr_42 [i_4 - 1]) : (((/* implicit */long long int) var_1)))) : (((arr_42 [i_12]) % (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        arr_52 [i_12] [i_12] [6LL] |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_48 [(_Bool)1] [i_12] [i_12] [i_13]), (var_0)))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) var_4))), (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_4 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 + 1] [1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_13] [i_12] [i_4])))))))))));
                        arr_53 [i_4] [5] [(signed char)0] [i_12] [i_13] = ((/* implicit */_Bool) (~(max((arr_43 [i_11 + 2] [i_4 - 1]), (arr_43 [i_11 - 2] [i_4 - 1])))));
                        arr_54 [i_12] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_8 [i_4 + 1] [i_11 - 2]), (max((((/* implicit */unsigned int) arr_48 [i_13] [4] [4] [i_4 + 2])), (arr_51 [i_13] [i_11] [(unsigned char)8] [(unsigned short)1] [(unsigned char)9])))))), ((((!(((/* implicit */_Bool) arr_28 [i_4] [i_13])))) ? (((((/* implicit */_Bool) (short)-10106)) ? (2475999249045416767LL) : (((/* implicit */long long int) 1925731195)))) : (((/* implicit */long long int) max((((/* implicit */int) arr_25 [i_12])), (var_0))))))));
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_46 [i_4 + 1] [6U] [i_12] [(unsigned char)7])) ? (((/* implicit */long long int) var_5)) : (arr_0 [i_4 + 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_11 - 1])) ? (var_1) : (arr_43 [i_13] [i_11]))))))) ? (((/* implicit */int) ((var_13) != (((/* implicit */long long int) var_6))))) : (((/* implicit */int) arr_22 [i_12] [(unsigned char)3]))));
                    }
                } 
            } 
        } 
        arr_55 [i_4 + 2] [i_4] = ((/* implicit */int) max((min((((/* implicit */long long int) ((1925731195) ^ (((/* implicit */int) arr_25 [i_4]))))), (((arr_33 [i_4 + 2] [i_4] [i_4 + 2] [i_4]) ^ (var_3))))), (((/* implicit */long long int) -1925731195))));
    }
    for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
    {
        /* LoopSeq 4 */
        for (int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            var_24 = (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_2 [i_14 + 1])))));
            arr_61 [i_14 - 1] [i_14 - 1] [i_14 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_56 [i_14 + 1])) ? (((/* implicit */int) arr_9 [i_14] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) arr_9 [i_14] [i_14 - 1] [i_14 - 1]))))));
            arr_62 [i_14] [(unsigned char)10] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_56 [i_14 - 1])))) | ((-(((/* implicit */int) arr_1 [i_14 - 1] [i_14 - 1]))))));
        }
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            var_25 &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_1 [i_16] [i_14])))) | (((/* implicit */int) arr_9 [i_14 + 1] [i_14 + 1] [i_14 - 1]))));
            arr_66 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_14 - 1] [i_14 - 1] [18])) | (((/* implicit */int) arr_9 [i_14 - 1] [i_16] [i_16]))));
        }
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            arr_70 [(signed char)9] [i_14] [(signed char)9] = ((/* implicit */int) (((~(min((((/* implicit */unsigned long long int) var_3)), (arr_59 [i_14] [i_17] [i_17]))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_64 [i_14 + 1] [i_14] [i_14 - 1])), (((((/* implicit */_Bool) arr_59 [i_14] [i_14 - 1] [i_14])) ? (((/* implicit */long long int) var_4)) : (7596096423438752712LL))))))));
            arr_71 [i_17] = ((/* implicit */unsigned char) arr_67 [i_14]);
            arr_72 [i_14] = ((/* implicit */long long int) arr_8 [(unsigned char)17] [i_14]);
            var_26 += ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3)))))));
        }
        for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
        {
            arr_76 [i_14] [i_14] &= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) arr_10 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1])) : (((/* implicit */int) arr_10 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 1])))));
            /* LoopNest 3 */
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    for (unsigned char i_21 = 2; i_21 < 12; i_21 += 3) 
                    {
                        {
                            arr_86 [i_14] [(unsigned char)0] [i_19] [i_20] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7952267669470208802LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4182741933U)) ? (((/* implicit */int) (signed char)-109)) : ((-2147483647 - 1))))) : (754646776731210260LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_14 + 1])) ? (min((((/* implicit */unsigned int) 1925731202)), (var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_7 [i_14] [i_14]))), (arr_77 [i_14] [i_14] [i_14] [i_14 - 1])))));
                            arr_87 [i_14] [i_14] [i_18] [2] [i_19] [i_20] [i_21 - 2] = ((/* implicit */unsigned int) arr_12 [i_19] [i_19] [i_18] [i_19]);
                        }
                    } 
                } 
            } 
            var_27 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_14] [i_14] [i_18]))) : (arr_58 [i_14] [i_14])))) > (arr_0 [i_14 + 1])))) ^ (((((/* implicit */_Bool) ((arr_3 [4] [i_18]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_14])))))) ? (((/* implicit */int) arr_9 [i_14 - 1] [i_14 + 1] [i_18])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_81 [i_18] [(signed char)0] [(signed char)0] [i_14])), (var_11))))))));
        }
        arr_88 [i_14 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) 1925731202)) || (((/* implicit */_Bool) arr_69 [(unsigned char)4])))))))) ? (((/* implicit */int) ((var_8) || (((/* implicit */_Bool) arr_3 [i_14 - 1] [i_14 + 1]))))) : (((/* implicit */int) max((((((/* implicit */_Bool) 1775906256U)) || (((/* implicit */_Bool) (unsigned char)66)))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6))))))));
        arr_89 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [12U] [i_14 - 1] [i_14 - 1] [4LL])) ? (((/* implicit */long long int) var_4)) : (arr_11 [(_Bool)1] [i_14 + 1] [i_14 - 1] [i_14 - 1])))) ? (((arr_77 [i_14 - 1] [i_14] [i_14] [i_14 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) var_5))));
    }
    var_28 = ((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) var_5))));
}
