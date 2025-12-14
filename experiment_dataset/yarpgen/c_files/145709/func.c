/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145709
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
    var_12 = ((/* implicit */long long int) (-(((/* implicit */int) ((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) >= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)65535))))))))));
    var_13 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_14 -= arr_7 [i_0] [i_0] [(unsigned short)18] [i_0] [i_0] [i_0];
                        arr_11 [(unsigned short)1] [i_2] [(unsigned char)0] [(unsigned short)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3])))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_1 [(short)8])) >= (((/* implicit */int) arr_10 [(unsigned char)3] [i_3] [i_3]))))))));
                    }
                } 
            } 
            var_15 += min((((/* implicit */unsigned char) (_Bool)1)), (var_3));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) var_2)))) / (((/* implicit */int) min((((/* implicit */short) arr_5 [i_0 + 4] [i_0 + 3] [i_0] [i_0 - 1])), (arr_2 [i_0 + 2])))))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1])) * (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_1]))))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
        {
            arr_14 [14LL] [i_0 + 3] [i_4] = ((/* implicit */unsigned short) ((((arr_8 [i_0 + 4]) + (arr_8 [i_0 - 1]))) / (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_4] [i_0 + 4])) | (((/* implicit */int) arr_1 [i_0 + 4])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                var_18 = ((/* implicit */short) ((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_16 [i_0] [i_5 + 2] [i_5 - 1])))) < (((/* implicit */int) arr_16 [i_0 + 4] [i_4] [i_5 - 1]))));
                var_19 = ((/* implicit */_Bool) (unsigned short)65529);
                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_2 [i_0])) - (1413)))))))));
                var_21 -= ((/* implicit */_Bool) (-(((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) var_1))))));
                arr_17 [i_0 + 1] [i_4] [i_5] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_2)))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                arr_21 [i_6] = ((/* implicit */_Bool) (((((-(arr_19 [i_0] [i_4] [i_4] [i_6 - 3]))) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) var_3)))) + (187))) - (18)))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) (+((+(((/* implicit */int) arr_0 [i_0]))))));
                            var_23 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_1 [i_7]))))));
                            var_24 = ((/* implicit */_Bool) arr_9 [i_6] [i_6 - 2] [i_6 - 3]);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)12] [(unsigned short)9] [i_0] [i_0 + 3] [0LL]))) : (0LL))) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_0 + 2] [i_4]))))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) arr_6 [i_4] [(unsigned short)21] [i_4] [i_4]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
                {
                    var_27 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                    arr_31 [i_0] [i_0] [i_9] [i_9] [i_10 - 3] = ((/* implicit */short) max(((+(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 3] [i_9] [i_10])))), (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_0 - 2] [i_10] [14LL]), (arr_7 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_10 - 2]))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((min((min((((/* implicit */long long int) var_9)), (arr_28 [i_0 + 4] [i_4] [i_9] [i_10] [i_10]))), (((/* implicit */long long int) (unsigned short)1536)))) - (((((/* implicit */_Bool) arr_13 [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 4] [i_9] [i_9]))) : ((+(var_5))))))))));
                    var_29 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) var_7)), (((unsigned short) arr_10 [i_0] [i_4] [i_9])))), (var_0)));
                    var_30 = ((/* implicit */unsigned char) (-((+((+(arr_8 [i_4])))))));
                }
                var_31 = ((/* implicit */unsigned char) arr_1 [i_4]);
            }
            arr_32 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0] [(unsigned short)15] [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
        {
            arr_36 [i_0] = ((/* implicit */unsigned char) (unsigned short)192);
            arr_37 [i_0] [(unsigned char)22] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_0 [(unsigned char)3]))))));
            arr_38 [i_11] [i_0] &= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_11] [i_11])) <= (((/* implicit */int) arr_2 [i_0 - 1]))));
        }
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                var_32 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) arr_6 [i_13] [i_13] [i_12] [i_0])));
                arr_45 [i_0] [i_12] [(_Bool)1] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) << (((((((/* implicit */_Bool) arr_20 [i_0])) ? (((/* implicit */int) arr_10 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))) - (12294)))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_33 += ((/* implicit */unsigned short) max((max((arr_8 [i_0 + 4]), (arr_8 [i_0 - 2]))), (137438953471LL)));
                var_34 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)7))));
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) arr_47 [i_0] [i_14]))))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [2LL] [i_0] [i_0 + 1] &= ((/* implicit */unsigned short) arr_41 [i_16] [i_14] [i_12]);
                            arr_54 [i_14] [i_14] [i_14] [i_12] [i_14] = ((/* implicit */unsigned char) arr_9 [i_14] [i_15] [i_16]);
                            arr_55 [i_16] [i_12] [i_15] [i_15] [i_14] [i_12] [i_0 + 1] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 21; i_17 += 1) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */short) arr_8 [i_18 - 1]);
                            var_37 ^= (unsigned short)65525;
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_0 - 4] [i_12] [i_17 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_51 [i_0 - 4] [i_0] [i_0] [i_0] [i_0 + 3])) : (((/* implicit */int) arr_26 [i_17] [i_17 + 2] [i_0 + 3] [i_0 + 4]))))) ? ((+(((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) || (((/* implicit */_Bool) ((arr_56 [i_12] [i_12] [i_12] [i_0]) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) (short)32767))))))))));
            /* LoopNest 2 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_73 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) var_10);
                            var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_1 [i_19 - 1]), (arr_1 [i_19 - 1]))))));
                            var_41 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) arr_57 [i_0] [i_12] [i_19] [i_21]))))) ? (((/* implicit */int) arr_59 [i_0 - 3] [i_12] [(unsigned char)2] [(unsigned char)2] [i_21])) : (((/* implicit */int) arr_64 [i_0 - 2] [i_12] [i_19] [i_21]))))));
                            var_42 |= ((/* implicit */_Bool) (unsigned short)1024);
                        }
                        arr_74 [(unsigned short)8] [i_12] [i_12] [i_19] [i_20] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_19] [i_20]))))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_22 = 1; i_22 < 22; i_22 += 4) 
        {
            for (unsigned short i_23 = 0; i_23 < 23; i_23 += 4) 
            {
                {
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_22] [i_23] [i_0] [i_0] [i_23])) * (((/* implicit */int) (_Bool)1))))), (((((((/* implicit */_Bool) arr_13 [i_22] [i_23])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        for (long long int i_25 = 0; i_25 < 23; i_25 += 1) 
                        {
                            {
                                var_44 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) & (max((((/* implicit */int) var_3)), ((~(((/* implicit */int) arr_64 [i_25] [i_23] [i_22 + 1] [i_0 + 2]))))))));
                                var_45 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) min(((unsigned short)65529), (((/* implicit */unsigned short) arr_47 [i_0 + 3] [i_23])))))), (min((max((((/* implicit */long long int) var_3)), (arr_83 [i_0] [i_22 - 1] [i_23] [i_24] [i_25]))), (((/* implicit */long long int) arr_16 [i_25] [i_23] [i_22]))))));
                                arr_88 [(unsigned char)7] [i_22] [i_23] [i_25] [i_25] [i_25] [i_22 - 1] = var_10;
                                var_46 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) arr_26 [i_0] [(_Bool)1] [i_23] [i_24]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_26 = 2; i_26 < 20; i_26 += 3) 
    {
        var_47 = ((/* implicit */unsigned char) arr_89 [i_26] [i_26]);
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) arr_89 [i_26] [i_26 - 1]))));
    }
    for (long long int i_27 = 0; i_27 < 25; i_27 += 1) 
    {
        arr_94 [i_27] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_92 [i_27])) / (((/* implicit */int) arr_92 [i_27])))), (((((/* implicit */int) arr_93 [i_27])) / (((((/* implicit */int) arr_91 [i_27])) * (((/* implicit */int) var_0))))))));
        var_49 &= ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_92 [i_27])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))) >> ((((~(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_1))))))) + (43913)))));
        arr_95 [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_93 [i_27])) + (((/* implicit */int) arr_92 [i_27])))), (((/* implicit */int) arr_91 [i_27]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_92 [i_27])) < (((/* implicit */int) arr_91 [i_27])))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_93 [(unsigned short)7])) >= (((/* implicit */int) var_4))))), (((((/* implicit */long long int) ((/* implicit */int) arr_91 [i_27]))) - (var_5)))))));
    }
    var_50 = ((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((((-(((/* implicit */int) var_6)))) / (((/* implicit */int) var_1))))));
}
