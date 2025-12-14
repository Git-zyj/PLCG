/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153949
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
    var_18 *= ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned short) var_5)), ((unsigned short)60579))), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) max((var_12), (var_15)))), (max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) (unsigned short)65526);
        var_20 *= ((/* implicit */unsigned char) (_Bool)1);
    }
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((unsigned short)49382), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */unsigned long long int) max((var_0), (var_8)))), (min((9471143372964367799ULL), (8205403440235865385ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 4; i_1 < 6; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) max(((unsigned short)56585), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */unsigned long long int) var_15)), (576179277326712832ULL))))), (((/* implicit */unsigned long long int) max((min(((unsigned short)65520), ((unsigned short)60579))), (((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_1])))))))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_23 += ((/* implicit */unsigned char) min((2801530194U), (((/* implicit */unsigned int) (_Bool)1))));
            var_24 |= ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) max((arr_2 [i_1] [i_2]), (((/* implicit */unsigned char) arr_4 [i_2]))))), (min((arr_6 [i_1 - 4]), (877903227U))))), (((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)4971), (((/* implicit */unsigned short) (unsigned char)211))))), (min((arr_1 [(unsigned char)3] [i_2]), (((/* implicit */int) var_8)))))))));
            arr_8 [2] [i_2] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)20353)), (arr_5 [i_1 + 4] [(unsigned char)6])))), (min((var_4), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) max(((unsigned short)51022), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9710))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_15 [i_1] [i_1] [5] [i_3] = ((/* implicit */_Bool) 877903255U);
                arr_16 [i_3] [i_1 - 3] [8LL] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_25 |= ((/* implicit */unsigned char) (_Bool)1);
                arr_19 [i_3] = ((/* implicit */_Bool) (unsigned char)234);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_26 = 1929371712;
                            arr_27 [i_1 + 2] [i_3] [4LL] [i_1] [i_1] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) (unsigned char)38);
                        }
                    } 
                } 
            }
            var_27 ^= ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
        {
            arr_30 [i_8] = max((max((min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_1 + 4])))), (((/* implicit */unsigned long long int) max(((unsigned char)127), (((/* implicit */unsigned char) arr_0 [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_22 [i_1] [i_8] [i_1 + 3] [8ULL] [i_8] [i_1])), (var_17))), (((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10)))))))));
            arr_31 [(signed char)6] [(unsigned char)4] = ((/* implicit */_Bool) min((max((max((((/* implicit */int) arr_13 [i_1] [i_8] [i_1] [(unsigned char)8])), (arr_1 [i_1] [i_1 + 2]))), (((/* implicit */int) max(((unsigned short)23562), (((/* implicit */unsigned short) (unsigned char)81))))))), (max((-986620541), (((/* implicit */int) (unsigned short)56585))))));
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
        {
            var_28 *= ((/* implicit */unsigned char) min((max((max((var_14), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_1 - 2] [i_1 - 2])))))), (max((min((arr_6 [i_1]), (((/* implicit */unsigned int) (unsigned char)255)))), (((/* implicit */unsigned int) min((var_7), (((/* implicit */short) arr_14 [9] [i_9])))))))));
            var_29 = ((/* implicit */unsigned int) max(((unsigned short)42326), (((/* implicit */unsigned short) (unsigned char)234))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 1; i_10 < 8; i_10 += 4) 
            {
                var_30 &= min((((/* implicit */unsigned int) min((max(((unsigned short)9712), (((/* implicit */unsigned short) var_2)))), (max((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_1] [i_10])))))), (min((max((((/* implicit */unsigned int) var_10)), (arr_32 [i_1 - 3] [i_9] [i_10]))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned char) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 7; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((unsigned char)129), ((unsigned char)234)))), (min((((/* implicit */unsigned int) min((arr_13 [i_12] [i_11] [(signed char)6] [i_9]), (((/* implicit */unsigned short) var_10))))), (min((arr_17 [i_10] [i_11 - 3]), (arr_6 [i_11 - 1])))))));
                            var_32 |= ((/* implicit */int) min((max((max((877903270U), (((/* implicit */unsigned int) (short)29051)))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_26 [9] [i_12])), (arr_23 [i_1 + 4] [i_9] [i_10] [i_11] [i_12])))))), (((/* implicit */unsigned int) min((max(((unsigned char)25), ((unsigned char)243))), (min((((/* implicit */unsigned char) arr_11 [2U] [(unsigned char)8] [(_Bool)1] [i_1])), (var_9))))))));
                            arr_42 [i_1] [i_10] = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned int) var_11)), (var_3))), (max((((/* implicit */unsigned int) (unsigned char)0)), (arr_6 [i_9]))))), (max((max((((/* implicit */unsigned int) 2147483647)), (2802256643U))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-29056)), (-203325806))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2802256643U)));
                arr_43 [i_10] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_40 [i_9] [i_9] [i_10 - 1] [i_1 + 4] [i_10] [(unsigned char)9])), ((unsigned char)255)))), (max((((/* implicit */long long int) var_5)), (arr_10 [i_10] [i_9]))))), (((/* implicit */long long int) min((((/* implicit */int) min(((unsigned char)48), (arr_2 [i_1] [i_9])))), (min((((/* implicit */int) var_10)), (2147483630))))))));
            }
            for (signed char i_13 = 3; i_13 < 8; i_13 += 4) 
            {
                arr_46 [i_1] [i_9] [i_13 + 2] [i_9] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) var_13))))), (max((((/* implicit */unsigned long long int) var_9)), (var_4))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483641)), (2802256657U))))));
                /* LoopSeq 4 */
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_34 = max((max((((/* implicit */unsigned long long int) max(((unsigned char)143), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (short)29051)), (14899131231795619883ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (arr_35 [i_1 - 2] [i_9] [i_1 - 2] [5])))), (min(((unsigned short)47528), (((/* implicit */unsigned short) (unsigned char)175))))))));
                    arr_50 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1] [i_1] [i_1 + 2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_47 [4] [4])), ((unsigned char)255)))), (max((arr_13 [i_1 + 3] [(unsigned short)9] [0] [(unsigned short)9]), (((/* implicit */unsigned short) (_Bool)1))))))), (min((((/* implicit */unsigned int) max((arr_21 [2] [i_9] [(_Bool)1] [(unsigned short)9] [i_14]), (var_16)))), (min((var_14), (((/* implicit */unsigned int) arr_28 [i_1 - 3] [i_9] [i_14]))))))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 1; i_15 < 7; i_15 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */int) 4544357880648225189ULL);
                    var_36 |= ((/* implicit */unsigned char) (_Bool)1);
                    var_37 = ((/* implicit */unsigned char) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned char i_16 = 1; i_16 < 7; i_16 += 3) /* same iter space */
                {
                    arr_58 [i_9] [i_16] = ((/* implicit */int) (_Bool)1);
                    var_38 ^= ((/* implicit */int) (_Bool)1);
                    var_39 *= ((/* implicit */_Bool) (unsigned short)37049);
                    var_40 = ((/* implicit */_Bool) 2802256643U);
                }
                for (unsigned char i_17 = 1; i_17 < 7; i_17 += 3) /* same iter space */
                {
                    var_41 ^= ((/* implicit */unsigned long long int) max((max((max(((unsigned short)37049), (((/* implicit */unsigned short) var_9)))), (max((((/* implicit */unsigned short) var_1)), ((unsigned short)19325))))), (max((max(((unsigned short)49445), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_40 [i_17 + 1] [i_9] [i_13] [i_9] [i_9] [i_1 - 3])), ((unsigned char)0))))))));
                    arr_63 [i_1 - 4] [i_9] [i_13 - 1] [i_17] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (arr_20 [i_1 + 4] [i_9] [i_13] [4])))), (max((var_17), (var_14))))), (((/* implicit */unsigned int) max((max(((unsigned short)37045), (((/* implicit */unsigned short) (short)29052)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)64)))))))));
                    var_42 = ((/* implicit */_Bool) max((max((((/* implicit */short) max((arr_3 [i_1 - 4]), (arr_3 [i_13 + 1])))), (min((((/* implicit */short) var_2)), (var_5))))), (((/* implicit */short) min((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)28))))));
                }
                arr_64 [i_9] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) max((max((((/* implicit */unsigned char) var_12)), (arr_55 [i_1] [i_1] [i_1 - 4] [i_1 - 3]))), (min(((unsigned char)108), (((/* implicit */unsigned char) arr_59 [i_1] [i_9] [7U]))))))), (max((max((((/* implicit */unsigned short) var_0)), (arr_45 [i_1] [i_9] [i_13 - 3]))), (((/* implicit */unsigned short) max((arr_35 [3] [i_9] [i_9] [i_9]), (arr_51 [i_9] [i_9] [3] [i_9]))))))));
                arr_65 [i_1 - 4] [i_9] [(unsigned char)2] [6ULL] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) min(((unsigned short)35151), (((/* implicit */unsigned short) (unsigned char)64))))), (max((((/* implicit */unsigned long long int) var_5)), (var_4))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) arr_0 [i_1] [(short)7])), ((unsigned char)64))), (((/* implicit */unsigned char) max((arr_59 [(short)7] [i_9] [4]), (var_13)))))))));
                var_43 = ((/* implicit */int) max((((/* implicit */unsigned int) max((max((arr_13 [i_9] [i_9] [i_1 + 4] [(unsigned char)9]), ((unsigned short)15872))), (((/* implicit */unsigned short) min(((unsigned char)10), (arr_2 [i_13 - 1] [i_9]))))))), (min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)65535)), (-1)))), (max((1324309340U), (((/* implicit */unsigned int) var_5))))))));
            }
            for (short i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_44 *= ((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned int) (unsigned char)127)), (var_17))), (((/* implicit */unsigned int) min(((unsigned short)4650), (((/* implicit */unsigned short) var_8))))))), (max((((/* implicit */unsigned int) max((var_5), (((/* implicit */short) arr_59 [i_1 + 4] [i_9] [i_1 + 4]))))), (max((((/* implicit */unsigned int) arr_20 [(unsigned short)3] [i_9] [i_18] [(unsigned short)3])), (var_14)))))));
                /* LoopSeq 1 */
                for (long long int i_19 = 1; i_19 < 7; i_19 += 2) 
                {
                    arr_71 [i_1 - 4] [(signed char)0] [(signed char)7] [i_18] [i_19] [i_19 + 2] = ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) var_9)), (arr_41 [i_1] [i_9] [i_18] [i_18] [i_18]))), (((/* implicit */unsigned long long int) max((var_2), ((_Bool)1)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max(((unsigned char)230), (arr_34 [i_1 + 4] [7U] [i_18] [i_19 + 3])))), (max((((/* implicit */unsigned short) var_10)), (arr_13 [i_1 + 3] [8] [i_18] [i_18]))))))));
                    var_45 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) var_8)), (arr_9 [i_18] [i_19 + 3]))), (((/* implicit */unsigned long long int) max((arr_6 [i_1]), (((/* implicit */unsigned int) arr_24 [i_1] [i_9] [i_18] [i_18] [(unsigned char)2]))))))), (((/* implicit */unsigned long long int) max((max((var_16), (((/* implicit */unsigned short) (unsigned char)2)))), (((/* implicit */unsigned short) min((var_12), (arr_61 [i_1] [i_1] [i_18] [i_19])))))))));
                    arr_72 [i_1] [i_9] [7U] [i_18] [i_19 - 1] [i_19 + 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min(((unsigned char)245), (((/* implicit */unsigned char) arr_47 [i_9] [i_19]))))), (min((((/* implicit */unsigned short) (signed char)94)), ((unsigned short)54725)))))), (min((max((((/* implicit */unsigned long long int) (unsigned char)73)), (17913961494693852332ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)35151), (((/* implicit */unsigned short) (_Bool)1)))))))));
                }
            }
            var_46 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((max(((unsigned short)29293), (((/* implicit */unsigned short) arr_70 [9LL] [9LL] [4ULL] [i_1 - 4])))), (((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (var_14)))), (min((((/* implicit */unsigned long long int) arr_54 [3] [i_9] [i_1 - 2])), (18446744073709551615ULL)))))));
        }
    }
}
