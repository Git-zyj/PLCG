/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162715
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        arr_3 [(signed char)2] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_15)))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_3)))) ? ((+(var_7))) : (((unsigned long long int) arr_1 [i_0]))))));
        var_16 = ((/* implicit */signed char) var_2);
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (min((var_6), (var_10))))))) & (min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (arr_0 [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_17 &= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_8)))) - (((/* implicit */int) var_12))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) /* same iter space */
            {
                var_18 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))));
                arr_12 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1] [(unsigned short)7])) : (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_2])))));
                /* LoopSeq 2 */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_15 [i_2] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_9 [16] [16] [16]))))))));
                        var_21 *= ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
                        var_22 = var_6;
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        arr_20 [(unsigned short)9] [i_3] [(unsigned short)19] [i_4] [i_4] [(unsigned short)19] [i_6] = ((unsigned short) var_3);
                        var_23 = ((/* implicit */short) var_10);
                        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_12))))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_26 [i_3] = ((/* implicit */signed char) ((((unsigned long long int) arr_11 [i_2])) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8] [i_4] [i_1] [i_2] [i_1]))))))));
                        arr_27 [i_1] [i_1] [i_2] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_13)))) ? ((+(((/* implicit */int) arr_17 [(signed char)7] [i_2] [i_2] [i_3] [i_8] [i_2] [12LL])))) : (((/* implicit */int) arr_7 [i_3 + 2]))));
                        var_27 += var_3;
                    }
                }
                for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_7))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) var_3)) - (32673)))))) ? (((int) var_4)) : (((/* implicit */int) var_2)))))));
                    /* LoopSeq 4 */
                    for (short i_10 = 3; i_10 < 17; i_10 += 2) 
                    {
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [9LL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) ? (((unsigned long long int) arr_15 [i_2] [i_9])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_28 [(signed char)16] [i_3] [i_3] [4ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10 + 3] [i_10 - 3] [i_1] [13ULL] [i_2] [i_1] [i_1]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(unsigned short)18] [i_2]))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_36 [i_1] [i_2] [i_3] [i_9] [15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_24 [i_1] [(short)6] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_11)))))));
                        arr_37 [(unsigned short)17] [i_3] [(unsigned short)17] [(signed char)4] [i_11] [i_2] = ((/* implicit */signed char) ((short) var_2));
                        arr_38 [i_3] [i_3] = ((((/* implicit */_Bool) arr_24 [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((+(((/* implicit */int) var_15)))));
                        var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                        var_33 += ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_42 [8U] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_1])) ? (((((/* implicit */_Bool) arr_7 [i_9])) ? (arr_30 [i_12] [i_1] [i_1] [i_3]) : (arr_39 [i_1] [i_2] [i_3 + 3] [(unsigned short)17]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_2] [i_9] [(short)15] [i_2] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] [i_1])))))));
                        arr_43 [i_3] [(signed char)8] [i_12] [(unsigned short)16] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_3 + 3] [i_3]))));
                        var_34 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_25 [i_1] [i_9] [i_9] [(signed char)14] [i_12]))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_48 [4ULL] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) arr_28 [4LL] [i_3] [i_3] [i_1]);
                        arr_49 [i_3] = ((/* implicit */signed char) ((unsigned short) var_4));
                        var_35 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_28 [i_13] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))));
                    }
                    var_36 = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_9] [10] [i_3 - 3] [i_1] [i_1] [i_1] [i_1]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        {
                            var_37 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_3 - 2] [i_15])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_55 [i_2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(short)4] [i_2] [i_1] [i_2] [i_1])))))));
                            arr_57 [i_1] [i_2] [(unsigned short)6] [i_3] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (arr_16 [i_15]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_9))))));
                            arr_58 [i_15] [i_15] [i_3] [i_3 - 1] [i_3] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_8)))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) var_10))))));
                            arr_59 [i_1] [(signed char)6] [i_3] [(unsigned short)14] [i_2] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_3 + 2] [i_14 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15)))) : (((((/* implicit */_Bool) arr_22 [i_15] [i_14] [17U] [i_2] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) var_12)))));
            }
            for (unsigned long long int i_16 = 3; i_16 < 17; i_16 += 1) /* same iter space */
            {
                arr_62 [i_16] = ((/* implicit */unsigned long long int) var_3);
                arr_63 [(signed char)3] [(signed char)3] [i_16] = ((/* implicit */long long int) ((short) ((signed char) arr_52 [i_16] [i_2] [i_16])));
                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((short) var_7))) : ((+(((/* implicit */int) var_15))))));
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (arr_54 [i_1] [i_2])));
                arr_64 [i_16] = ((/* implicit */unsigned long long int) var_11);
            }
            for (unsigned long long int i_17 = 3; i_17 < 17; i_17 += 1) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_12))));
                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_17] [(signed char)8]))) : (var_1)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_65 [(unsigned short)9] [i_2] [(unsigned char)14] [i_1]) : (((/* implicit */int) var_12)))))));
                var_44 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_67 [(_Bool)1] [i_2] [i_1])) && (((/* implicit */_Bool) arr_65 [17] [i_2] [i_17 - 1] [17]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1])))))));
                var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] [2LL])))))));
                arr_69 [i_1] [(signed char)8] = ((/* implicit */unsigned char) var_8);
            }
            arr_70 [i_2] [i_1] = ((/* implicit */unsigned long long int) var_4);
            var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_45 [i_1] [i_1] [i_1] [(unsigned char)4] [i_1] [(signed char)0] [i_1]))));
        }
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1)))))));
        arr_71 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) var_13)));
        var_48 -= ((/* implicit */_Bool) ((short) ((unsigned char) arr_47 [i_1] [i_1] [0ULL])));
    }
    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (((unsigned long long int) var_14)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))), ((+(var_1)))))));
    var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? ((+(((((/* implicit */_Bool) var_9)) ? (var_7) : (var_1))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_14)) << (((((/* implicit */int) var_11)) - (3560))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))))))));
}
