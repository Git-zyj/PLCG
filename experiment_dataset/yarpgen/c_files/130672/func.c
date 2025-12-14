/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130672
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (var_3)))) && (((/* implicit */_Bool) ((unsigned long long int) var_5))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (0U)));
                var_20 = ((/* implicit */long long int) 0U);
                var_21 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) > (16899714746770493305ULL))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_22 = ((/* implicit */long long int) ((unsigned char) arr_7 [i_2 + 1]));
            /* LoopSeq 2 */
            for (signed char i_4 = 3; i_4 < 21; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_3] [i_5])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_24 = ((((-2606156375390297757LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [9] [i_3] [i_4] [(unsigned char)2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        var_25 = ((((/* implicit */_Bool) 2606156375390297757LL)) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (arr_12 [i_4] [i_4] [i_5] [i_4]) : (arr_12 [i_4] [i_4] [i_4] [i_5]))) : (((/* implicit */unsigned int) ((int) var_4))));
                        arr_19 [i_2] [i_3] [i_3] [i_3] [i_4] [i_5] [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_9 [i_2] [(_Bool)1]))) ? (arr_12 [i_4] [i_3] [i_4] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) var_5))) > (((((/* implicit */long long int) ((/* implicit */int) (short)3))) & (arr_15 [i_2 + 1] [i_7] [(_Bool)1] [i_5] [(_Bool)1])))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_4] [i_2] [i_7 + 1]))) : (arr_15 [i_2 + 1] [(short)22] [1U] [i_5] [i_7 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2 + 1]) : (((/* implicit */int) (short)-22982)))))));
                    }
                }
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((int) (_Bool)1)) : (((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) arr_7 [(unsigned char)12])) : (arr_11 [i_2 + 1] [i_2 + 1])))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((long long int) arr_8 [i_4 + 2] [i_2 + 1]));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((arr_10 [10U] [10U]) >> (((arr_25 [20LL] [20LL] [20LL]) - (1484012287106426838LL)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) (~(arr_11 [i_2 + 1] [i_4 + 1])));
                arr_28 [(_Bool)1] [i_4] [i_2] = arr_8 [i_4 - 3] [i_2];
            }
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                arr_32 [13U] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_2 + 1] [i_10] [(unsigned short)16]))) <= (arr_26 [i_10])));
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (-(arr_27 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_10]))))));
                /* LoopSeq 3 */
                for (signed char i_11 = 1; i_11 < 21; i_11 += 4) 
                {
                    var_33 = (!(((/* implicit */_Bool) var_16)));
                    arr_35 [i_2] [i_2] [i_10] [i_11] [i_11] [i_3] = ((/* implicit */long long int) (short)-22982);
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2 + 1] [i_11 + 1] [i_11 + 2] [i_11 + 2])) == (((((/* implicit */_Bool) arr_10 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3])) : (5412376533710278392ULL)))));
                }
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_10])) < (((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */int) var_2))));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_16))));
                }
                for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    arr_41 [i_13 - 1] [i_2 + 1] [i_3] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_10])) == (((/* implicit */int) arr_16 [i_10]))));
                    var_37 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_25 [i_10] [i_3] [i_10]) >> (((((/* implicit */int) arr_29 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_13])) - (108)))))) < ((~(arr_39 [i_2] [i_3] [(short)10] [i_13] [(short)10])))));
                }
            }
            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_3))));
            arr_42 [i_2 + 1] [21LL] = ((/* implicit */unsigned char) ((arr_27 [18U] [i_3] [i_3] [i_2] [i_2] [i_2] [(_Bool)1]) * (((/* implicit */unsigned long long int) arr_17 [i_2 + 1] [10U] [i_3] [i_2 + 1] [i_2 + 1]))));
        }
        for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            arr_47 [i_2] = ((/* implicit */long long int) var_3);
            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) arr_29 [i_2 + 1] [i_2] [i_2] [i_2 + 1]))));
            var_40 = ((/* implicit */_Bool) ((long long int) arr_21 [i_2 + 1] [i_2 + 1] [17U] [17U] [i_2 + 1]));
            var_41 = ((/* implicit */unsigned char) var_10);
            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((arr_27 [i_2 + 1] [i_14] [i_2] [i_2] [i_2] [i_14] [16U]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
        }
        for (unsigned int i_15 = 1; i_15 < 20; i_15 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_17 = 1; i_17 < 22; i_17 += 1) 
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_2] [i_15 + 3] [i_15 - 1] [i_17 + 1] [i_2 + 1])) & (((/* implicit */int) arr_24 [i_2] [1U] [i_15 + 3] [(unsigned short)3] [7LL]))));
                    arr_54 [i_2] [(unsigned short)12] [(short)8] [(short)8] [i_17] = ((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) % (var_5)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 905566079752593037LL)) : (arr_10 [(short)22] [14U]))));
                    var_44 = var_10;
                }
                for (unsigned int i_18 = 2; i_18 < 19; i_18 += 1) 
                {
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_18 + 2] [i_18 - 1] [i_18] [i_18] [i_18 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [7] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_8 [i_16] [i_15]))))));
                    var_46 = ((/* implicit */long long int) var_1);
                    var_47 = ((/* implicit */short) (_Bool)1);
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (-(arr_5 [i_15 + 2] [i_2 + 1]))))));
                    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) arr_51 [i_2] [i_2] [i_18]))));
                }
                var_50 = ((/* implicit */int) arr_15 [i_2] [i_2] [i_15] [i_15 - 1] [6ULL]);
            }
            for (signed char i_19 = 1; i_19 < 19; i_19 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_20 = 1; i_20 < 20; i_20 += 1) 
                {
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-68)) > (((/* implicit */int) arr_20 [i_20 + 2] [i_2 + 1] [i_19] [i_2 + 1] [(_Bool)1] [20LL]))));
                    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_55 [i_2] [i_2] [i_15 + 2] [i_20 + 1])));
                }
                for (unsigned int i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                {
                    arr_65 [(signed char)7] [i_19] [14ULL] [i_19 + 4] [i_19 + 3] [i_21] = (~(arr_48 [i_21] [i_15]));
                    var_53 = ((/* implicit */signed char) ((var_14) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))));
                    var_54 = ((/* implicit */int) arr_8 [i_15 + 2] [i_2 + 1]);
                    var_55 = ((/* implicit */_Bool) (+(((/* implicit */int) ((5412376533710278406ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))))))));
                }
                for (unsigned int i_22 = 0; i_22 < 23; i_22 += 1) /* same iter space */
                {
                    var_56 = ((/* implicit */short) arr_49 [11] [i_15] [i_15 + 3]);
                    var_57 = ((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 + 3] [i_19 - 1]));
                }
                for (int i_23 = 0; i_23 < 23; i_23 += 1) 
                {
                    arr_70 [i_2] [i_2] [i_2] [i_19] = ((/* implicit */short) ((arr_6 [i_15 + 3]) >> (((/* implicit */int) ((unsigned char) var_11)))));
                    var_58 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)64))));
                }
                var_59 = ((/* implicit */unsigned short) 4398046511104LL);
            }
            for (unsigned int i_24 = 3; i_24 < 22; i_24 += 1) 
            {
                arr_74 [i_2] [13U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_24] [i_24 - 2] [i_24] [i_24 - 1] [i_24 - 2])) ? (arr_39 [i_24] [i_24 - 2] [i_24 - 3] [19ULL] [i_24 - 2]) : (arr_39 [(_Bool)1] [(unsigned char)20] [i_24] [i_24] [i_24 - 2])));
                var_60 = ((/* implicit */int) min((var_60), ((~(arr_33 [(unsigned short)15] [i_15 + 3] [i_15 + 3] [i_15 - 1] [i_15])))));
                var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_66 [i_24 - 3] [i_2 + 1] [i_15 + 3] [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_2] [i_15 - 1])) ? (((/* implicit */int) var_2)) : (arr_52 [i_24 - 2] [i_15 + 3] [i_15] [i_2 + 1]))))));
            }
            for (signed char i_25 = 0; i_25 < 23; i_25 += 3) 
            {
                var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_75 [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_34 [(signed char)18] [i_2 + 1] [i_2 + 1] [i_15 - 1] [i_25] [10])))))));
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_63 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_78 [i_26] [22U] [i_15 + 3] [i_2])) ? (((/* implicit */unsigned int) 1040384)) : (arr_63 [i_2] [i_15] [i_15] [i_15] [i_15] [i_26])))));
                    var_64 = ((/* implicit */unsigned int) arr_9 [i_2 + 1] [14U]);
                }
                /* LoopNest 2 */
                for (unsigned int i_27 = 2; i_27 < 20; i_27 += 1) 
                {
                    for (unsigned int i_28 = 1; i_28 < 22; i_28 += 4) 
                    {
                        {
                            var_65 = ((/* implicit */unsigned char) ((2600344014U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_15 - 1])))));
                            var_66 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_27 + 1] [i_28 - 1] [i_15 + 3] [i_2 + 1])) < (((/* implicit */int) arr_29 [i_27 + 1] [i_28 - 1] [i_15 + 3] [i_2 + 1]))));
                        }
                    } 
                } 
                var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [(unsigned short)6] [4U])) ? (arr_57 [i_2] [i_2] [i_25]) : (arr_76 [13LL] [i_15] [i_25])))) || (((/* implicit */_Bool) ((unsigned short) var_15)))));
            }
            var_68 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 3052925627U)) / (arr_10 [(_Bool)1] [i_15 - 1])));
            var_69 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2606156375390297774LL)) ? (5412376533710278392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        }
        var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) ((((/* implicit */int) (short)22981)) >> (((((((arr_81 [i_2] [i_2 + 1] [i_2] [(short)8] [i_2] [i_2] [i_2]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) - (333861547183781445LL))))))));
        var_71 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (arr_39 [17LL] [17LL] [(unsigned char)4] [9ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [(unsigned short)9] [i_2 + 1])))));
        /* LoopSeq 3 */
        for (unsigned int i_29 = 2; i_29 < 22; i_29 += 3) 
        {
            var_72 = 4294967295U;
            arr_85 [i_29] [(_Bool)1] [i_2 + 1] = ((/* implicit */_Bool) (-(arr_37 [i_2] [i_2] [i_2 + 1] [i_29] [i_29 - 1] [i_29])));
        }
        for (unsigned char i_30 = 1; i_30 < 21; i_30 += 1) 
        {
            var_73 = ((/* implicit */int) ((long long int) arr_14 [(unsigned char)14] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]));
            arr_88 [i_30] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_30 + 1] [i_30] [5LL] [i_30])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62798)))));
        }
        for (unsigned int i_31 = 1; i_31 < 19; i_31 += 1) 
        {
            arr_91 [i_31] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_87 [i_2 + 1] [i_2 + 1]))));
            var_74 = ((/* implicit */unsigned int) -3033214862931008437LL);
            var_75 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_2 + 1] [i_31 + 4] [(unsigned char)18] [i_2 + 1] [i_31 + 4])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_45 [i_2 + 1]))));
            arr_92 [i_31] = ((/* implicit */unsigned char) (_Bool)0);
        }
    }
    var_76 = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-87)) > (((/* implicit */int) var_12))))) != (((/* implicit */int) var_3)))))));
}
