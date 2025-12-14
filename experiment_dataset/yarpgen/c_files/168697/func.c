/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168697
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
    var_17 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((((/* implicit */short) var_13)), (var_2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_4))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */_Bool) (~((~(196488316708862060ULL)))));
            var_18 ^= ((/* implicit */unsigned char) (~((-(4100266303U)))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_19 = ((/* implicit */short) (~((+((-2147483647 - 1))))));
                    arr_12 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) (~(4100266312U)));
                }
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    var_20 = ((/* implicit */long long int) (-((+(arr_2 [i_0 + 3] [i_0 + 3])))));
                    var_21 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) arr_8 [(signed char)8] [(signed char)8]))))));
                    arr_16 [i_0] = ((/* implicit */int) (~((-(196488316708862065ULL)))));
                }
                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)107))));
            }
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    var_23 ^= ((/* implicit */int) (~((-(18250255757000689562ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
                    {
                        var_24 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)26))))));
                        var_25 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0] [i_0 + 1] [19LL] [i_0] [i_0]))))));
                        arr_27 [i_0] [i_0] [i_5 - 2] [i_5 - 2] [i_7] = ((/* implicit */unsigned short) (~((-(194700993U)))));
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_6 [i_6 - 2] [i_5] [i_1 - 1]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)107)))))));
                        var_28 ^= (+((-(var_5))));
                        arr_30 [i_8] [i_0 + 3] [14ULL] [8LL] [i_0 + 3] &= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_4 [0LL] [(unsigned char)4]))))));
                        var_29 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)40923))))));
                        arr_31 [i_6] [(unsigned char)21] [i_0] [i_0] [i_6] [i_6 - 3] [i_6 - 3] = ((/* implicit */long long int) (-((-(18250255757000689562ULL)))));
                    }
                }
                for (long long int i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
                {
                    var_30 ^= ((/* implicit */_Bool) (-((+(((/* implicit */int) var_11))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_31 -= ((/* implicit */unsigned char) (~((~(18250255757000689557ULL)))));
                        var_32 *= ((/* implicit */short) (+((~(arr_6 [i_0 + 1] [i_0 + 2] [i_0])))));
                        var_33 = (~((+((-2147483647 - 1)))));
                        var_34 += ((/* implicit */short) (~((~(arr_23 [i_0] [i_1 - 3] [i_10] [i_9] [i_9])))));
                        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-4194))));
                    }
                    arr_40 [i_9 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_34 [i_0 - 1] [i_0 - 1] [i_5 - 1] [i_1] [i_1 - 1]))))));
                    arr_41 [i_0] [i_1] [i_0] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                }
                var_36 &= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_38 [i_5] [i_0 - 1] [i_0 - 1] [i_0 - 1] [15]))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-((+(-1890548086))))))));
                    arr_47 [i_0] [i_1] [i_1] [i_0] = (+((-(((/* implicit */int) var_12)))));
                    var_38 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_20 [i_12] [i_12] [i_11] [i_1 + 1] [i_0 + 2]))))));
                    var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                    arr_48 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_12] = ((/* implicit */unsigned char) (~((+(1408140022U)))));
                }
                arr_49 [i_0] [i_0] [i_11] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (signed char i_13 = 4; i_13 < 20; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_40 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0 + 1] [i_1 - 2] [i_11])))))));
                            arr_56 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251)))))));
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */int) (-((-(4100266311U)))));
        }
        for (unsigned char i_15 = 3; i_15 < 21; i_15 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(194700990U))))))))))));
            /* LoopSeq 3 */
            for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_57 [i_16])), (arr_33 [i_0 + 3] [i_0 + 3] [i_16]))))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)13619))))), ((~(194700983U))))))))));
                arr_61 [i_0] = ((/* implicit */int) (-((-((+(arr_29 [5ULL] [5ULL] [i_16])))))));
                var_44 *= ((/* implicit */signed char) max((((/* implicit */long long int) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) max((var_2), (((/* implicit */short) var_13)))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (max((var_6), (((/* implicit */long long int) var_7))))))));
                arr_62 [i_0] [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)233)), ((-9223372036854775807LL - 1LL))))), ((-(arr_52 [15] [i_0 + 2] [i_0 + 3] [15] [i_16] [i_16]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */short) arr_11 [i_0 + 2] [i_15] [i_16] [i_16] [i_16] [i_0])), (var_2)))))))));
            }
            /* vectorizable */
            for (long long int i_17 = 3; i_17 < 20; i_17 += 2) 
            {
                arr_65 [i_0 + 3] [(short)1] [i_0] [i_17 - 2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 197653925)))))));
                var_45 = ((/* implicit */unsigned int) (-((~(196488316708862054ULL)))));
                var_46 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (short)9945))))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 1; i_18 < 21; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) (-((+(var_6))))))));
                            arr_74 [i_0 + 3] [i_15 + 1] [i_15 + 1] [i_17] [i_17] [i_18 - 1] [i_0] = ((/* implicit */unsigned char) (+((-(3548011749365463108LL)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_20 = 3; i_20 < 19; i_20 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */signed char) (-((+(max((arr_42 [i_0] [i_15] [i_0]), (((/* implicit */unsigned long long int) var_11))))))));
                            arr_84 [i_0 + 1] [i_0 + 2] [i_0] [i_0] [i_0 + 3] [i_0 + 1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_1)))), ((-(((/* implicit */int) var_12))))))), (min(((-(arr_3 [i_0 + 1] [i_0 + 1] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_60 [i_0 - 1] [i_15])))))))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-9668)), (2199022731264ULL))))));
            }
            var_50 = ((/* implicit */short) (-((+((+(454112444)))))));
        }
        for (unsigned char i_23 = 3; i_23 < 21; i_23 += 1) /* same iter space */
        {
            arr_89 [(short)4] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) var_15)), (arr_85 [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))))))));
            /* LoopNest 2 */
            for (unsigned char i_24 = 3; i_24 < 20; i_24 += 4) 
            {
                for (long long int i_25 = 2; i_25 < 19; i_25 += 1) 
                {
                    {
                        arr_95 [i_0] [i_24] [i_23] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_81 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_24 + 1] [i_24 + 1] [i_0])), (arr_28 [i_24] [i_24])))))))));
                        arr_96 [i_0 + 2] [i_0 + 2] [i_24 + 1] [i_0] [i_23] = ((/* implicit */unsigned int) (+(min((-1), (((/* implicit */int) (short)-24733))))));
                        arr_97 [i_0] [i_0] [i_24] [i_23 + 1] [i_25 + 3] = ((/* implicit */unsigned long long int) (~((~(max((var_16), (((/* implicit */int) var_14))))))));
                    }
                } 
            } 
            arr_98 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */int) (unsigned char)236)), (var_16))), ((-(((/* implicit */int) (unsigned char)34)))))), (max((((/* implicit */int) max(((short)-9668), (arr_60 [i_0] [i_23 - 3])))), (min((arr_33 [i_0 + 1] [(unsigned char)3] [i_0]), (((/* implicit */int) (short)28604))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_26 = 0; i_26 < 22; i_26 += 4) 
        {
            var_51 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned char)23)), (var_16))), (min((arr_33 [(unsigned char)18] [i_0 + 2] [i_26]), (((/* implicit */int) (unsigned char)14))))))), (min(((+(16777215ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
            var_52 = ((/* implicit */long long int) min((max((max((arr_81 [i_26] [i_26] [i_26] [i_26] [(unsigned char)3] [(short)11] [i_0]), (((/* implicit */unsigned short) (unsigned char)32)))), (max(((unsigned short)27445), (((/* implicit */unsigned short) var_15)))))), (((/* implicit */unsigned short) max((max((((/* implicit */short) (unsigned char)186)), (arr_4 [i_0] [i_26]))), (((/* implicit */short) max((((/* implicit */unsigned char) var_7)), ((unsigned char)19)))))))));
            var_53 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((var_10), (((/* implicit */unsigned long long int) (unsigned char)95)))))))));
            arr_101 [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((max((arr_53 [i_0 + 3] [7LL] [i_0] [i_0 + 1] [i_0 + 3]), (((/* implicit */unsigned long long int) arr_60 [i_0] [i_26])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_13)), (var_12))))))));
        }
    }
    for (int i_27 = 0; i_27 < 13; i_27 += 2) 
    {
        arr_104 [i_27] |= ((/* implicit */signed char) min((7082412543517022619LL), (((/* implicit */long long int) (-(((/* implicit */int) (short)-1)))))));
        arr_105 [i_27] [i_27] = min((min((-3062563960423220720LL), (((/* implicit */long long int) max((((/* implicit */short) (unsigned char)19)), ((short)-27398)))))), (((/* implicit */long long int) (unsigned char)128)));
    }
}
