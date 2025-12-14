/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181813
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
    var_15 |= ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 3])))), (((/* implicit */int) min((arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 2]), (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2]);
                arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 + 1]))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_18 *= ((/* implicit */unsigned short) var_5);
                var_19 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1 - 1])))) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 1])) : ((-(((/* implicit */int) var_9))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
            }
            var_21 *= ((/* implicit */short) var_6);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_1] [i_4] |= ((/* implicit */int) (+(arr_6 [i_5] [i_5 + 2] [i_5] [i_5])));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1] [(signed char)10])))))));
                        arr_19 [i_0] [i_1] [i_4] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)7168))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) var_10);
                        var_24 = ((/* implicit */int) (-(var_11)));
                        arr_24 [i_0] [i_1] [i_5] [i_7] = arr_7 [i_4] [i_4] [i_5 - 2] [i_1 - 1];
                    }
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (unsigned short i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_26 [i_1] [i_8 + 2]))));
                    var_27 = ((/* implicit */int) min((var_27), ((-((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_4]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        arr_32 [i_1] [i_9] = ((/* implicit */signed char) arr_21 [i_1 - 1] [i_1] [i_4] [i_8 - 1] [i_1]);
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_8 - 2] [i_1 + 1]))));
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_1 - 3] [i_4] [i_8 - 2] [i_0]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_30 |= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 1] [i_8] [i_10]);
                        arr_35 [i_10] [i_10] [i_1 - 1] [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_31 [i_0] [i_1 + 1]);
                        arr_36 [i_0] [i_0] [i_4] [(unsigned short)1] [i_4] [i_1] = ((/* implicit */unsigned int) var_2);
                    }
                }
                for (unsigned short i_11 = 2; i_11 < 20; i_11 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 1])) ? (var_12) : (arr_15 [i_0] [i_1 - 1] [i_4] [i_11]))))));
                    var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_1] [i_1 + 1] [i_1])) : ((-(((/* implicit */int) var_5))))));
                }
                for (unsigned short i_12 = 2; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) var_4);
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(arr_33 [i_1 - 3] [i_1 - 3] [i_12 - 2]))))));
                    var_35 *= ((/* implicit */unsigned long long int) arr_26 [i_1 - 1] [i_12 - 2]);
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) var_4))));
                }
                arr_44 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) var_14);
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((arr_38 [i_4] [i_1] [i_0] [i_4] [i_4] [i_0]) ? (var_12) : (arr_6 [i_4] [i_4] [i_4] [i_4]))))));
            }
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
            {
                arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_14);
                arr_49 [i_0] [i_1 - 2] [i_13] [i_13] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_13]);
                var_38 = ((/* implicit */unsigned char) min(((unsigned short)3968), (((/* implicit */unsigned short) (unsigned char)141))));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) min((arr_41 [i_1 - 3] [i_1 - 2] [i_1 - 1]), (arr_41 [i_1 - 2] [i_1 - 2] [i_1 + 1]))))));
            }
            /* LoopSeq 2 */
            for (short i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                arr_52 [i_0] [i_1] [i_14] [i_1] = ((/* implicit */unsigned long long int) max((min((((var_6) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_38 [i_0] [i_0] [(unsigned short)15] [i_1 + 1] [i_1 + 1] [i_14])))), (((/* implicit */int) var_4)))), (((/* implicit */int) var_10))));
                var_40 = ((/* implicit */long long int) min((var_40), (arr_26 [i_14] [i_1])));
                arr_53 [i_14] [i_14] = ((/* implicit */int) var_8);
                arr_54 [i_14] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_22 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]), (arr_22 [i_14 + 3] [i_14 + 3] [i_14] [i_14 + 2])))), (min((arr_45 [i_1 - 2] [i_14 + 3]), (((/* implicit */unsigned int) arr_50 [i_14 + 1] [i_1] [i_14]))))));
                var_41 = ((/* implicit */unsigned short) arr_17 [i_14 + 1] [i_14 + 3]);
            }
            for (unsigned int i_15 = 2; i_15 < 18; i_15 += 1) 
            {
                var_42 = ((/* implicit */unsigned char) arr_21 [i_0] [(signed char)2] [i_0] [i_1] [16]);
                var_43 *= ((/* implicit */signed char) arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_15 + 2]);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    var_44 *= ((/* implicit */unsigned char) arr_33 [i_0] [i_1 + 1] [i_16]);
                    var_45 = ((/* implicit */signed char) (-(arr_43 [i_0] [i_1] [i_15 + 2] [i_16 + 1])));
                }
                for (long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    var_46 += ((/* implicit */unsigned char) min((max((var_2), (((/* implicit */int) arr_29 [i_0] [i_0] [i_15 + 2])))), (((/* implicit */int) arr_29 [i_0] [i_15 + 4] [i_15]))));
                    arr_64 [i_0] = ((/* implicit */unsigned short) arr_0 [i_1 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) max((max((arr_62 [i_15 + 2] [i_1 - 2] [i_15] [i_17]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */long long int) arr_58 [i_1 - 1] [i_1 - 3] [i_15 + 2]))));
                        var_48 |= ((/* implicit */int) min((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_18] [i_15 + 3]))), (arr_5 [i_0] [8ULL] [i_0])));
                        arr_67 [i_0] [i_1 - 1] [i_15] [i_1 - 1] [(signed char)19] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_43 [i_0] [i_1 - 1] [i_0] [i_1 - 1])), (var_1)))));
                    }
                }
                var_49 = ((/* implicit */long long int) arr_10 [i_0] [i_15 + 4]);
                var_50 = max((((/* implicit */long long int) arr_46 [i_0] [i_15])), ((-(max((((/* implicit */long long int) arr_28 [i_0] [i_0] [i_1] [i_1 + 1] [i_15] [i_15])), (arr_26 [i_0] [i_1 - 3]))))));
            }
        }
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_13)), (arr_14 [i_0] [i_0] [i_19])))), (min((((/* implicit */unsigned long long int) var_10)), (var_11))))), (((/* implicit */unsigned long long int) var_6)))))));
            var_52 *= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_46 [i_0] [i_19]))))));
            var_53 ^= ((/* implicit */_Bool) max((arr_61 [i_0] [i_19] [i_19]), (arr_61 [i_19] [i_0] [i_0])));
        }
        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) var_6))));
        /* LoopSeq 1 */
        for (unsigned char i_20 = 2; i_20 < 21; i_20 += 2) 
        {
            arr_73 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((((/* implicit */signed char) arr_9 [i_0] [i_20 - 1] [i_0] [i_0])), (var_8)))), (arr_15 [i_20] [i_20] [i_0] [i_20 + 1]))), (((/* implicit */long long int) var_3))));
            arr_74 [i_20] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_55 [i_0])) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_20])) : (arr_7 [i_20] [i_20] [i_20] [i_20])))));
            arr_75 [i_0] [i_20] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_71 [i_20 + 1])) ? (arr_71 [i_20 - 1]) : (arr_71 [i_20 + 1]))), (arr_71 [i_20 - 2])));
            /* LoopSeq 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
            {
                var_55 = ((/* implicit */unsigned long long int) (-(min((arr_6 [i_21] [i_20 - 1] [i_20 + 1] [i_21]), (((/* implicit */long long int) arr_4 [i_20] [i_20] [i_21]))))));
                var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_34 [i_0] [i_0] [i_20 - 2] [i_21])))), ((~(arr_6 [i_20] [i_20 - 1] [i_20 - 1] [i_20]))))))));
                arr_78 [i_21] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_72 [i_20] [i_20])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_45 [i_0] [i_21])) : (arr_71 [i_0]))))), (var_1)));
                var_57 = ((/* implicit */unsigned char) arr_51 [i_21] [i_20 - 1] [i_21]);
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    arr_82 [i_21] = ((/* implicit */signed char) max((9197764745014440807ULL), (((/* implicit */unsigned long long int) 1023LL))));
                    /* LoopSeq 1 */
                    for (long long int i_23 = 2; i_23 < 21; i_23 += 2) 
                    {
                        arr_85 [i_0] [i_20] [i_20] [i_0] |= ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) arr_14 [i_20 - 1] [i_21] [i_22])), (arr_21 [i_0] [i_20 - 2] [i_20 - 2] [i_20 - 2] [(unsigned short)13]))), (((/* implicit */unsigned long long int) arr_77 [i_20 - 2] [i_21])))), (((/* implicit */unsigned long long int) var_3))));
                        var_58 &= ((/* implicit */short) min((max((-4257098439196918850LL), (((/* implicit */long long int) (short)10553)))), (min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_39 [i_23] [i_20] [i_21] [i_22])), (var_3)))), (((((/* implicit */_Bool) arr_51 [i_23] [i_21] [i_22])) ? (arr_76 [i_0] [i_20] [i_21] [i_23 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_23 - 2])))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_24 = 0; i_24 < 22; i_24 += 1) 
                    {
                        var_59 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_87 [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1] [i_20 + 1]), (arr_87 [i_20 - 1] [i_20] [i_20] [i_20 + 1] [i_20 - 1]))))));
                        var_60 |= (-(((/* implicit */int) max((arr_13 [i_20 - 1] [i_20 - 1] [i_20 + 1]), (arr_13 [i_20 - 2] [i_20 - 2] [i_20 - 1])))));
                        var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_20 + 1] [i_20 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))) ? (arr_70 [i_20 - 2] [i_20 + 1]) : (max((arr_70 [i_20 - 1] [i_20 - 2]), (arr_70 [i_20 + 1] [i_20 - 2])))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 0; i_25 < 22; i_25 += 2) /* same iter space */
                    {
                        var_62 = ((/* implicit */unsigned long long int) min((var_62), (max((min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (arr_0 [i_21])))), (arr_71 [i_20 - 2]))), (((/* implicit */unsigned long long int) var_9))))));
                        var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) arr_72 [i_20 - 1] [i_20 - 1]))));
                        arr_90 [i_0] [i_25] [i_21] [i_22] [i_25] &= ((/* implicit */signed char) arr_87 [i_0] [i_20 + 1] [i_20] [i_22] [i_25]);
                        arr_91 [i_20] [i_20] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_42 [i_0] [i_20] [i_20] [i_0]))))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 22; i_26 += 2) /* same iter space */
                    {
                        var_64 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((arr_34 [i_0] [i_0] [i_0] [i_20 - 1]), (((/* implicit */int) var_10))))), (max((((/* implicit */unsigned long long int) var_6)), (arr_71 [i_20 - 1])))));
                        var_65 = ((/* implicit */unsigned char) max((var_65), (((/* implicit */unsigned char) max((min((arr_27 [i_22] [i_20 + 1] [i_20 + 1]), (arr_27 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) var_8)))))));
                    }
                }
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                var_66 = ((/* implicit */_Bool) min((var_66), (((/* implicit */_Bool) var_4))));
                /* LoopSeq 1 */
                for (unsigned short i_28 = 0; i_28 < 22; i_28 += 2) 
                {
                    var_67 *= ((/* implicit */unsigned long long int) min((min((1053LL), (((/* implicit */long long int) (unsigned char)248)))), (((/* implicit */long long int) max((arr_84 [i_28] [i_20 - 2] [i_20 + 1] [i_20] [i_20] [i_27]), (arr_84 [i_0] [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 - 2] [i_28]))))));
                    var_68 &= ((/* implicit */unsigned short) arr_21 [i_28] [i_27] [i_20] [i_0] [i_0]);
                }
                var_69 -= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_68 [i_20 + 1] [i_20 + 1] [i_27])))), (((/* implicit */int) arr_80 [i_0] [i_20] [i_20] [i_27] [i_27]))));
                arr_100 [i_0] [i_20] = ((/* implicit */int) arr_94 [i_0] [i_0] [i_27] [i_0] [i_0]);
            }
        }
        var_70 = ((/* implicit */signed char) min((var_70), (((/* implicit */signed char) (+(((/* implicit */int) max((arr_66 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_66 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        arr_101 [i_0] [i_0] &= min((((/* implicit */long long int) (signed char)-74)), (9007199254740991LL));
    }
    var_71 = (~(((/* implicit */int) var_5)));
}
