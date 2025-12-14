/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117520
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
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)21598))))) <= (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))), (var_2)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_1 [i_0 + 4]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_1] [(short)3] [(short)3] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned short)49947))))), (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))));
            var_21 = ((/* implicit */short) arr_1 [i_0]);
            var_22 = ((/* implicit */int) var_9);
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) var_6)))) / (((/* implicit */int) ((arr_1 [i_0 + 4]) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0 + 1])), ((unsigned short)49947))))))))));
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) (+(var_17)))) : (max((6403712978546798568LL), (-6403712978546798568LL)))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                var_23 ^= ((/* implicit */unsigned char) (+(((arr_8 [i_3 + 1]) / (((/* implicit */int) arr_4 [i_0 - 4]))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_24 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_4 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_18 [i_0 + 2] [i_4 - 1] [i_4] [i_0])) : (((/* implicit */int) var_5)))));
                    arr_20 [(unsigned char)7] [(unsigned char)7] [i_4] = min((((((/* implicit */unsigned long long int) var_0)) != (var_8))), (((((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned int) 16)) : (2758131557U))) == (((/* implicit */unsigned int) ((int) arr_1 [3ULL]))))));
                }
                var_25 = ((unsigned short) ((((/* implicit */int) arr_2 [i_3 - 1])) + (((/* implicit */int) arr_2 [i_3 + 1]))));
                arr_21 [i_4 + 1] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)22809)) || (((/* implicit */_Bool) (unsigned char)233))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((67043328), (((/* implicit */int) var_10))))))))));
            }
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_19 [i_0] [i_3] [i_3] [i_3])))))))) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) min((arr_14 [i_0 - 1]), (arr_14 [i_0 - 1]))))));
            var_27 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) arr_0 [i_0 - 3] [i_3 - 1]))), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_3]))))), (((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0])) ? (var_12) : (((/* implicit */long long int) arr_8 [i_0]))))))));
            /* LoopSeq 4 */
            for (short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_28 = var_7;
                arr_25 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_6]);
            }
            for (int i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                var_29 = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    arr_30 [i_0] [i_3] [i_7 + 1] [i_7] = ((/* implicit */long long int) ((var_12) != (((/* implicit */long long int) arr_8 [i_0 - 4]))));
                    arr_31 [i_7] [i_3 + 1] [0] = (~(((/* implicit */int) var_4)));
                }
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    var_30 *= var_4;
                    arr_35 [i_3 + 1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) max(((+(arr_27 [i_7] [i_0 - 2]))), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_12 [i_9] [i_9] [i_7 + 2])) | (var_11))), (((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
                    arr_36 [i_7] [i_7 - 2] [i_3] [i_7] = ((/* implicit */long long int) ((((arr_7 [i_0] [i_3 + 1]) & (arr_17 [i_7 - 3] [7LL] [i_7]))) < (((/* implicit */long long int) var_2))));
                }
            }
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_31 ^= ((/* implicit */unsigned long long int) (~(arr_7 [i_0 + 4] [i_0 + 1])));
                        arr_43 [i_0] [i_0] [i_10] [9] [i_12] [i_12] = ((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_3] [i_10] [i_10] [i_12]);
                        arr_44 [i_0] [i_3] [i_10] [i_0 + 3] = (signed char)-18;
                    }
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) /* same iter space */
                    {
                        arr_47 [i_0] [i_3] [i_10] [1] [1] [(_Bool)1] [1] |= ((/* implicit */unsigned char) min((max((arr_39 [i_3 + 1] [i_3 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 4] [i_0 + 1]), (((/* implicit */int) arr_13 [i_3 + 1] [i_3 - 1] [i_3])))), ((+(((/* implicit */int) (unsigned char)99))))));
                        arr_48 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_16))))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) : (max((((/* implicit */int) arr_2 [i_0 - 2])), (var_2)))));
                        arr_49 [i_0] = ((/* implicit */int) var_6);
                        arr_50 [i_13] [i_11] [i_0] = ((/* implicit */int) 227399080U);
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
                    {
                        arr_55 [i_0] [i_3 + 1] [i_3 + 1] [i_10] [i_11] [9LL] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_14] [i_10])) != (((/* implicit */int) var_9))))) << (((min((arr_51 [i_3 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) 3080471938073054157ULL))))))) + (1764971288)))));
                        arr_56 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_7 [i_0 + 4] [i_3 - 1]), (arr_7 [6ULL] [i_3 + 1]))))));
                        arr_57 [i_11] [i_11] [i_11] [i_11] [3ULL] = ((/* implicit */signed char) 3080471938073054157ULL);
                        arr_58 [i_0] [i_3] [i_10] [i_3] [i_14] [6] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */int) (unsigned short)15589))))), ((+(((unsigned long long int) var_16))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_5))));
                    }
                    var_33 = ((/* implicit */int) arr_23 [i_11] [i_0]);
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    arr_61 [i_10] [i_0] [i_10] [i_15] [i_0] [i_15] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (min(((~(1536835738U))), (((/* implicit */unsigned int) arr_4 [i_3 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_15] [i_15] [i_15 - 1])))));
                    var_34 ^= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))), (max((var_1), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_10] [(_Bool)1])))))) | (((/* implicit */unsigned long long int) ((((1536835738U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) & (((/* implicit */unsigned int) (~(arr_59 [i_0] [i_3] [i_10] [i_3] [i_0])))))))));
                    var_35 += ((/* implicit */long long int) min(((-((-(((/* implicit */int) arr_12 [i_3 - 1] [i_10] [i_15])))))), ((-(((/* implicit */int) var_9))))));
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_12))));
                }
                arr_62 [i_10] [i_3 - 1] [i_0] = ((/* implicit */long long int) var_6);
                /* LoopSeq 2 */
                for (int i_16 = 1; i_16 < 10; i_16 += 3) 
                {
                    arr_65 [i_16] [i_3] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) arr_17 [i_10] [i_3 - 1] [i_0])) * (arr_46 [i_0] [i_3] [i_10] [i_16] [i_16]))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) var_18)) : (min((((/* implicit */long long int) var_4)), (var_13))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) var_4)))))));
                    var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)50392))));
                    var_38 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) min((arr_38 [i_0 - 3] [i_0 - 3] [i_16 - 1] [i_0]), (((/* implicit */int) arr_5 [i_0 - 4])))))), (max((max((((/* implicit */int) arr_37 [i_0] [i_0] [i_10] [i_0 + 3])), (var_17))), (((/* implicit */int) arr_2 [i_0 + 3]))))));
                }
                for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    arr_68 [i_10] = ((/* implicit */unsigned short) min((((arr_24 [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_60 [i_17] [i_17] [i_17] [i_17]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)30230)), (-6032044023248127676LL))))));
                    arr_69 [i_0 - 2] [i_0] [i_0] [i_10] [(signed char)1] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_67 [i_0] [i_0] [i_10] [i_17]) : (var_17))))))) / (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > ((~(((/* implicit */int) (unsigned short)15589)))))))));
                    var_39 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)218)), (arr_15 [i_17] [i_3 + 1] [i_3 + 1] [i_17])))))));
                    arr_70 [i_17] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0 + 3] [i_0 + 3] [i_0]);
                }
            }
            for (unsigned short i_18 = 1; i_18 < 8; i_18 += 2) 
            {
                arr_73 [i_18 + 3] [i_18 + 3] [i_18] = (+(((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [(unsigned char)9]))))) > (((((/* implicit */_Bool) arr_71 [i_0] [i_3] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))));
                var_40 = ((/* implicit */_Bool) (-2147483647 - 1));
            }
        }
    }
    for (unsigned short i_19 = 4; i_19 < 11; i_19 += 2) 
    {
        var_41 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(var_18)))) ? (((((/* implicit */_Bool) (short)20523)) ? (((/* implicit */unsigned long long int) -6403712978546798584LL)) : (17046511766698513168ULL))) : (max((((/* implicit */unsigned long long int) arr_75 [i_19])), (var_7))))), (((((/* implicit */_Bool) -6403712978546798568LL)) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) 4342350929076627555LL)) ? (arr_74 [i_19]) : (((/* implicit */unsigned long long int) 3146069015U))))))));
        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535))))) : (18446744073709551615ULL)));
        var_43 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_75 [i_19 - 3]))))));
        var_44 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_19 - 1]))) - (arr_74 [i_19 - 3]))) ^ (((((/* implicit */_Bool) (+(12599513879889903988ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_14))) : (((((/* implicit */_Bool) arr_74 [i_19])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_2))))))));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_75 [i_19 + 2])) : (((/* implicit */int) arr_75 [i_19 - 2]))))) ? (((((/* implicit */int) min((((/* implicit */short) (signed char)0)), ((short)22)))) / (((/* implicit */int) ((short) arr_74 [i_19]))))) : (min((((/* implicit */int) ((unsigned short) var_17))), ((-(((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (long long int i_20 = 1; i_20 < 18; i_20 += 2) 
    {
        arr_78 [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6582952538690596919LL)) ? (var_13) : (((/* implicit */long long int) 991625002U))))) ? (((/* implicit */int) arr_76 [i_20])) : (((/* implicit */int) arr_77 [i_20 + 2] [i_20 + 2])));
        arr_79 [i_20] = ((/* implicit */unsigned int) var_4);
        var_46 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_76 [i_20]) || (((/* implicit */_Bool) var_9)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
        {
            var_47 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (var_18) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_10)))))));
            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_82 [i_20] [i_20] [(unsigned short)6]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42716))))) : (((/* implicit */int) arr_81 [i_20 - 1] [i_20]))));
            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) -188135021))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
        {
            arr_86 [i_20] [i_20] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
            var_50 += ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_83 [i_22] [i_20 + 2] [i_22])) | (var_0)));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_23 = 4; i_23 < 18; i_23 += 4) 
    {
        arr_90 [i_23] = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)42716)))), (((/* implicit */int) ((short) (_Bool)1)))));
        var_51 = ((/* implicit */unsigned long long int) ((unsigned int) (-(var_2))));
        var_52 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_88 [i_23 - 2]))))));
    }
    var_53 = var_16;
    var_54 = ((/* implicit */int) max((var_54), ((-(((/* implicit */int) ((signed char) var_4)))))));
}
