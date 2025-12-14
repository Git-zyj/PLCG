/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14986
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
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10)))))) ? (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) 4294967291U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned int) 18U));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (unsigned char)39);
                                var_15 = ((/* implicit */unsigned char) ((arr_4 [i_1] [i_1] [i_3] [i_4]) ? (min((((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */unsigned long long int) arr_2 [i_4])) : (arr_0 [i_1] [3U]))), (((/* implicit */unsigned long long int) (unsigned char)216)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] [i_0]), (arr_12 [i_4] [i_3] [i_3] [i_3] [9U] [0LL])))))));
                                arr_13 [i_0] [i_1] [i_3] [(_Bool)1] = ((/* implicit */signed char) var_7);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_4] [i_0])) <= (((/* implicit */int) (unsigned char)216)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [(unsigned short)6] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1])) + (((/* implicit */int) arr_8 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (arr_9 [i_0] [i_0] [i_1] [i_2])))));
                }
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_10 [0U] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (arr_2 [i_1]))))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((var_7), (((/* implicit */long long int) arr_2 [i_0])))))) ? ((+(((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (633104679082677496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))))))) : (arr_0 [i_0] [i_1])));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))) | (((unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57395))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (~(arr_16 [i_5] [i_5]))))) ? (((long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_16 [i_5] [i_5]) : (arr_16 [i_5] [i_5])))) : (((long long int) (+(((/* implicit */int) (unsigned short)22762)))))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_21 = arr_20 [i_5];
            var_22 += ((/* implicit */unsigned short) ((724785158U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5])))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((arr_18 [i_6]) << (((((/* implicit */int) arr_23 [i_5] [i_5])) + (967))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_17 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [2U] [i_6]))))))))));
                var_24 ^= ((/* implicit */short) ((arr_24 [i_6]) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_6] [i_6]))))), (var_9))))));
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_28 [i_5] [i_6] [i_8] = ((/* implicit */unsigned char) (+(2715640678U)));
                var_25 &= ((/* implicit */unsigned long long int) (+(arr_25 [i_8] [i_8] [i_8] [i_5])));
            }
        }
        for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-7104773759716610446LL) - (((/* implicit */long long int) arr_21 [i_5] [i_9] [i_9]))))) ? (((((/* implicit */unsigned long long int) var_7)) & (arr_24 [i_9]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_5])))))))) ? (min((((/* implicit */unsigned int) arr_19 [i_9] [i_9])), (arr_29 [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
            arr_33 [1LL] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9] [i_5]))) < (var_7)))), ((~(((/* implicit */int) (unsigned short)64955))))));
            var_27 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_5] [i_5]))));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                arr_37 [i_5] [i_9] [i_10] = ((/* implicit */signed char) (+(3717029134U)));
                arr_38 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 16461505820166088340ULL)))) & (arr_24 [i_5])))));
                var_28 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_5] [i_5] [i_9] [i_5]))) : (arr_36 [i_10] [i_9] [i_5] [i_5]))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_5] [i_9] [i_9] [i_10])))))));
                var_29 = ((/* implicit */unsigned short) var_1);
                var_30 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_17 [i_9])) ? (arr_17 [i_5]) : (arr_17 [i_5])))));
            }
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            arr_41 [(unsigned char)5] [i_5] [i_11] = ((/* implicit */unsigned int) arr_39 [i_5]);
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            arr_52 [i_12] [(signed char)12] [i_13] [i_14] [i_14] [i_5] [7] = ((/* implicit */unsigned char) var_7);
                            arr_53 [i_11] [i_11] [(short)8] [i_13] [i_11] |= ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_32 [i_11] [i_14])))), (((/* implicit */int) arr_32 [i_5] [i_5]))));
                            arr_54 [i_14] [i_13] = ((((/* implicit */_Bool) min((((arr_27 [i_13] [i_13] [i_12] [i_5]) ? (arr_18 [i_5]) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_39 [i_5])))))))) ? ((+(arr_43 [i_5] [i_5] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */long long int) ((min((arr_46 [i_5] [i_11]), (arr_46 [i_11] [i_5]))) ? (arr_16 [i_5] [i_5]) : ((-(arr_16 [i_11] [i_5])))));
        }
        var_32 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_5] [i_5]))))) ? (max((((/* implicit */unsigned long long int) min((arr_20 [i_5]), (((/* implicit */unsigned short) arr_51 [i_5] [i_5] [i_5] [i_5] [i_5]))))), ((+(1985238253543463304ULL))))) : (((/* implicit */unsigned long long int) min((arr_21 [i_5] [i_5] [i_5]), (((/* implicit */int) arr_19 [i_5] [i_5])))))));
    }
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
    {
        arr_57 [i_15] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 153207616U)), (min((((((/* implicit */_Bool) (unsigned short)61743)) ? (((/* implicit */unsigned long long int) var_4)) : (14607564827092991594ULL))), (((/* implicit */unsigned long long int) arr_56 [i_15] [i_15]))))));
        arr_58 [i_15] [i_15] = ((/* implicit */signed char) arr_55 [i_15]);
        var_33 ^= var_5;
        var_34 = ((/* implicit */unsigned int) arr_55 [i_15]);
    }
    for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
    {
        var_35 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_56 [i_16] [i_16]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))))) ? (((16405821526088432720ULL) << (((2147483647) - (2147483602))))) : (arr_55 [i_16]))), (arr_55 [i_16])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                for (int i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8156)) ? ((~(((/* implicit */int) arr_61 [i_16] [i_18] [2LL])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)70)) == (((/* implicit */int) var_3)))))));
                            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_61 [0U] [i_19] [0U]))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_17]))) : (var_10)));
                            var_39 = ((/* implicit */unsigned int) var_3);
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_16])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_67 [i_16] [i_17] [i_18] [(_Bool)1] [i_20]))))));
                        }
                    } 
                } 
            } 
            var_41 |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 1991824968)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_17] [(unsigned char)2] [i_16] [16LL] [(unsigned char)6]))) : (arr_66 [i_16] [(unsigned char)8] [(unsigned char)0]))));
            /* LoopNest 3 */
            for (signed char i_21 = 0; i_21 < 17; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 17; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 577938161U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57393))) : (-6527924977506673537LL)));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_3))));
                            var_44 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_16] [i_16])) ? (((/* implicit */int) arr_70 [i_16] [i_16] [i_17] [(unsigned char)15] [i_22] [i_23])) : (var_11)));
                            var_45 = ((/* implicit */long long int) max((var_45), (((((/* implicit */_Bool) arr_74 [(short)0])) ? (((((/* implicit */_Bool) arr_64 [i_16] [(_Bool)1] [i_22] [i_23])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_16] [i_17] [i_17] [i_21] [(signed char)2] [i_23]))))) : (((/* implicit */long long int) arr_79 [i_22]))))));
                            var_46 = ((/* implicit */_Bool) max((var_46), ((_Bool)1)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_24 = 0; i_24 < 17; i_24 += 1) /* same iter space */
        {
            arr_84 [i_16] [i_24] [i_16] = ((/* implicit */unsigned char) (unsigned short)8155);
            /* LoopSeq 2 */
            for (unsigned long long int i_25 = 0; i_25 < 17; i_25 += 2) 
            {
                var_47 = ((((/* implicit */_Bool) arr_66 [i_16] [i_24] [i_16])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) arr_73 [i_16] [i_24] [i_25] [i_25] [i_25])) ? (arr_66 [i_16] [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))))));
                var_48 = ((/* implicit */signed char) arr_70 [i_16] [i_24] [i_24] [i_25] [i_25] [i_24]);
                arr_87 [i_16] [(_Bool)1] [i_25] [i_25] = ((/* implicit */unsigned long long int) arr_62 [(unsigned short)4] [i_16]);
            }
            for (unsigned short i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                var_49 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_78 [i_26] [i_26] [2LL] [i_16] [i_16])) << (((((/* implicit */int) arr_78 [i_16] [i_16] [i_24] [i_24] [i_16])) - (19164)))));
                arr_90 [i_16] [i_16] [i_26] [i_26] = ((/* implicit */long long int) arr_65 [i_16]);
                var_50 = ((/* implicit */long long int) ((unsigned int) arr_72 [i_16] [i_16] [i_16] [i_24] [i_16]));
            }
        }
        /* vectorizable */
        for (unsigned int i_27 = 0; i_27 < 17; i_27 += 1) /* same iter space */
        {
            var_51 = ((/* implicit */short) ((int) (~(var_10))));
            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_16] [4] [i_27] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))) : (arr_69 [i_16] [14] [i_16] [i_16] [(unsigned short)14]))))));
            var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) arr_65 [4]))));
        }
        var_54 = ((/* implicit */unsigned long long int) ((int) arr_65 [i_16]));
        var_55 = ((/* implicit */unsigned long long int) arr_56 [i_16] [i_16]);
    }
    /* LoopNest 2 */
    for (long long int i_28 = 0; i_28 < 14; i_28 += 3) 
    {
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            {
                arr_99 [i_28] [i_29] [i_29] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((-7755415770901401413LL), (((/* implicit */long long int) (unsigned char)223))))), (var_1))) <= (((/* implicit */unsigned long long int) arr_86 [i_28] [i_29]))));
                var_56 += ((/* implicit */unsigned char) (_Bool)1);
                var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -1301451594))))))))))));
            }
        } 
    } 
}
