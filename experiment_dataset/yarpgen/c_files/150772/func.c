/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150772
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0 - 1]));
        var_11 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) max((((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2])) - (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2])))), ((~(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2]))))));
            var_13 = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1]))))))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) <= (((/* implicit */int) arr_5 [i_1]))))))) : (var_0)));
            /* LoopSeq 4 */
            for (short i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0] [(signed char)7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41908))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))));
                var_16 = ((/* implicit */signed char) arr_6 [(unsigned short)8] [(unsigned short)8] [i_2]);
            }
            for (int i_3 = 4; i_3 < 9; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32983))) / ((-(var_3)))));
                        var_18 = min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_0 [i_0 - 2]))))));
                        var_19 = ((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_3 + 1] [i_3 - 1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 + 1])) >= (((/* implicit */int) arr_13 [i_0 - 1]))));
                        arr_22 [i_0] [i_1] [i_3] [(_Bool)1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) 960);
                        arr_23 [i_0] [i_1] [i_3 - 3] [i_1] [i_6] = ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] [i_3] [i_6]);
                    }
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((arr_10 [i_0 - 1] [i_3] [i_4]), (((/* implicit */long long int) arr_7 [i_0] [1LL] [i_0] [i_0])))) >> ((((~(arr_3 [i_0 + 1] [i_1]))) - (605711975U))))))));
                }
                arr_24 [i_0] [i_1] [i_3] = ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_1 [i_3 - 3])) : (arr_12 [i_0] [i_0] [i_3 - 1] [i_3 - 2] [i_3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_1] [(unsigned char)7])))))))));
                var_22 = ((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3 - 4] [i_1]) / (((/* implicit */unsigned int) ((max((((/* implicit */int) arr_16 [i_0] [(unsigned short)6] [2] [i_0] [2] [i_3 - 2])), (-2147483631))) / (((/* implicit */int) min((arr_19 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 2]), (((/* implicit */unsigned short) arr_5 [i_1]))))))))));
                var_23 *= ((/* implicit */_Bool) arr_10 [(signed char)2] [(signed char)2] [i_3]);
            }
            /* vectorizable */
            for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    arr_29 [i_0] [i_0] [i_1] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0 - 2] [i_0] [i_7] [i_0] [i_7 - 1]))) : (941583202U)));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3353384088U)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_7 + 1])) : ((-(((/* implicit */int) var_1))))));
                }
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    arr_32 [i_0] [9] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7 + 1] [8ULL] [i_1] [i_7] [i_1] [i_7 + 1]))) : ((+(4294967295U)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_37 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [2U] [i_7 - 1] [2U] [i_9] [i_10])) ? (arr_12 [i_0] [i_7 - 1] [i_9] [i_9] [i_9]) : (arr_12 [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_10])));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_18 [i_0] [(short)5] [(short)5] [i_9] [(short)5]))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 8; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (short)851)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_7] [i_9] [i_11]))) : (arr_1 [i_9])))))));
                        var_27 = (!(((/* implicit */_Bool) arr_35 [i_7] [i_7 + 1] [i_7 + 1] [i_0 - 1] [i_0] [i_7])));
                        arr_42 [4LL] [4LL] [i_7] [i_9] [i_11 - 2] = ((/* implicit */short) arr_5 [9U]);
                        arr_43 [i_7] = ((/* implicit */int) arr_3 [i_11 + 1] [i_11]);
                    }
                    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        arr_47 [i_7] [i_9] [(signed char)3] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_10 [i_1] [i_9] [i_9])))) ? (((var_4) / (((/* implicit */long long int) 3353384102U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7 + 1] [i_9]))))))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_8))));
                    }
                }
                arr_48 [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_7]);
            }
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                arr_52 [i_0] [i_1] [i_13] = ((/* implicit */_Bool) ((unsigned int) ((arr_38 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) <= (((/* implicit */int) arr_51 [i_0 - 1] [3] [i_0])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_14 = 1; i_14 < 9; i_14 += 2) 
                {
                    arr_57 [i_0] [i_0] [i_13] [i_14] = ((/* implicit */signed char) var_4);
                    arr_58 [(unsigned short)0] [i_14] [i_13] [i_14 + 1] [i_14] = ((/* implicit */_Bool) var_9);
                }
                for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    arr_61 [i_15] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0 + 1] [i_0 - 2])), ((+(var_4))))))));
                    arr_62 [i_0] [i_1] [i_15] = ((/* implicit */signed char) min(((~(((/* implicit */int) ((signed char) 16U))))), (((/* implicit */int) arr_54 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])) >= (((((/* implicit */_Bool) arr_21 [(_Bool)1] [(unsigned char)7] [i_13])) ? (((/* implicit */unsigned int) arr_26 [i_0 - 1] [(signed char)4] [i_0] [i_0])) : (var_8))))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? ((-(var_6))) : (((/* implicit */unsigned int) max((arr_21 [i_0] [i_1] [i_13]), (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-21278)))))))))));
                    arr_63 [i_0] [i_15] [i_1] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-(var_9))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12738)))))))) / (arr_12 [(_Bool)0] [i_1] [i_13] [i_13] [i_15])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        arr_67 [i_0] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */_Bool) (((+(arr_35 [i_15] [i_15] [i_13] [i_15] [i_0 - 2] [i_13]))) << (((((((/* implicit */_Bool) arr_45 [i_0 - 1] [(signed char)2] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_35 [i_15] [i_1] [i_15] [i_15] [i_0 - 2] [i_1])) : (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1]))) - (1523266031ULL)))))) : (((/* implicit */_Bool) (((((+(arr_35 [i_15] [i_15] [i_13] [i_15] [i_0 - 2] [i_13]))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_45 [i_0 - 1] [(signed char)2] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_35 [i_15] [i_1] [i_15] [i_15] [i_0 - 2] [i_1])) : (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1]))) - (1523266031ULL))) - (18446744070623353386ULL))))));
                        var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)46507))));
                    }
                    for (unsigned char i_17 = 1; i_17 < 9; i_17 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)7168)) / (((/* implicit */int) arr_51 [i_15] [i_13] [i_0 - 2]))))))), ((-(arr_3 [i_0 + 1] [i_0 + 1])))));
                        var_32 = (!(((/* implicit */_Bool) (+(arr_45 [i_17 - 1] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17 - 1])))));
                        var_33 = ((/* implicit */unsigned int) arr_65 [i_0]);
                        var_34 = ((/* implicit */unsigned int) ((((((0ULL) / (((/* implicit */unsigned long long int) arr_25 [i_17])))) / (((/* implicit */unsigned long long int) ((arr_26 [i_0] [i_1] [(_Bool)1] [i_17 - 1]) / (((/* implicit */int) var_1))))))) >= (((/* implicit */unsigned long long int) var_4))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    var_35 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_65 [i_0 - 1]), (arr_65 [i_0 - 2]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) arr_14 [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1] [i_18]);
                        arr_77 [i_0 + 1] [i_18] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_19] [i_13] [(unsigned short)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_0 + 1])))) : (arr_25 [i_19 + 1]));
                        var_37 = (+(((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_18 + 1] [4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))));
                        arr_78 [i_0 + 1] [i_1] [i_18] [i_18 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [i_0] [i_1] [i_13] [i_18]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (arr_73 [i_0 - 1])));
                    }
                    /* vectorizable */
                    for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_68 [i_0 - 2] [i_0 - 2] [i_18] [i_0 - 2] [i_20]) & (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) arr_38 [i_20] [i_18] [i_13] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_40 [i_0] [i_1] [i_13] [i_18] [i_20])))) : (((/* implicit */int) var_5))));
                        arr_82 [i_18] [i_0] [i_13] [i_0] [i_18] = ((/* implicit */unsigned long long int) (unsigned short)32553);
                        arr_83 [i_0] [i_1] [2] [i_18] [i_20] = ((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_0 - 2] [i_18 + 1] [i_18 + 1]))));
                    }
                    arr_84 [i_0 - 2] [i_18] [i_13] [i_18] [i_18 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -7761411811742889560LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_45 [i_18] [i_13] [i_13] [i_0] [i_13] [i_1] [i_0]) / (((/* implicit */int) var_2)))) >= (((/* implicit */int) max((((/* implicit */short) arr_72 [i_0] [i_1] [i_18] [i_0] [(_Bool)1])), (arr_76 [i_0])))))))) : (((max((((/* implicit */unsigned int) (unsigned short)32559)), (587658738U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5))))))));
                    arr_85 [i_0 - 1] [i_0 - 1] [i_18] [i_18] [i_18 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_21 [i_0] [6] [i_18 + 1]) : (((/* implicit */int) arr_5 [(unsigned char)2]))));
                    var_39 = var_3;
                }
            }
        }
        for (unsigned int i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(arr_25 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1])) < (((/* implicit */int) ((unsigned short) var_2))))))) : (max((((((/* implicit */_Bool) (unsigned short)32574)) ? (arr_36 [i_0] [i_0] [i_0] [(unsigned short)1] [i_21] [4]) : (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_21] [i_21] [i_21] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_64 [(_Bool)1] [i_21] [i_21] [i_21] [i_0] [i_21] [6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_59 [i_0] [i_0] [6U] [i_0 + 1] [i_0 + 1])))))));
            arr_88 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */int) arr_56 [i_0] [i_0 - 1] [i_0] [i_0])) + (((/* implicit */int) arr_56 [i_0] [i_0 - 2] [i_0] [i_21])))) : (((((/* implicit */_Bool) ((short) arr_79 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))) ? (((/* implicit */int) arr_27 [i_21] [6U] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_53 [i_21] [i_21] [i_0])) : (((/* implicit */int) arr_51 [i_0] [i_21] [i_21]))))))));
            var_41 = ((/* implicit */signed char) ((unsigned char) (~(max((arr_8 [i_0] [i_21] [i_21]), (((/* implicit */unsigned int) (_Bool)1)))))));
            arr_89 [i_0] = ((/* implicit */unsigned long long int) (~(arr_3 [i_0] [2ULL])));
        }
    }
    var_42 = ((/* implicit */int) var_0);
    var_43 = var_5;
    /* LoopSeq 1 */
    for (unsigned long long int i_22 = 2; i_22 < 15; i_22 += 2) 
    {
        var_44 = ((/* implicit */_Bool) (short)32749);
        var_45 = ((arr_92 [i_22] [11ULL]) >= (((arr_91 [i_22 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_22 - 1]))))));
        var_46 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (signed char)-103)) && (((/* implicit */_Bool) arr_91 [i_22])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_90 [i_22])) ? (((/* implicit */int) arr_90 [i_22])) : (((/* implicit */int) (short)862))))) : ((~(var_9)))))));
    }
}
