/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163934
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) min((var_16), (min(((short)-14569), (((/* implicit */short) max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0])) > (((/* implicit */int) (short)-2994))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 2])) ^ (((/* implicit */int) var_14))));
        }
        var_19 = ((/* implicit */_Bool) max((max((min((arr_0 [i_0]), (((/* implicit */short) var_0)))), (((/* implicit */short) arr_1 [i_0])))), (var_3)));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
    }
    for (short i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        var_21 = ((/* implicit */short) ((unsigned char) (short)-13739));
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_1 [i_2 + 1]))))));
            var_23 ^= min((max((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_2]))), (((/* implicit */unsigned char) ((((/* implicit */int) min((var_5), (arr_5 [i_2 - 3])))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))));
            arr_11 [10ULL] [i_3] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((short) (short)-10977))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 4] [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)14550)))))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_15 [i_4] |= ((/* implicit */_Bool) ((unsigned char) ((arr_1 [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))) : (7920180671463090985ULL))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_1))));
            var_25 |= ((/* implicit */short) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_9 [i_2 - 2]))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (short)-13734)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_22 [(short)1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_0))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((_Bool) arr_19 [i_4] [i_4])) ? (((/* implicit */int) arr_1 [i_6])) : (((((/* implicit */int) (short)13739)) << (((((/* implicit */int) (short)16982)) - (16981))))))))));
                        }
                        var_28 ^= ((/* implicit */_Bool) var_5);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_6 + 1])) - (((/* implicit */int) ((short) arr_14 [i_2])))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2 - 2] [i_2 - 3] [i_2 - 2])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2 + 2] [i_2 + 2] [i_2 - 2])))))));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2 - 2])) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])))))));
                        var_32 = ((/* implicit */unsigned long long int) arr_14 [i_2]);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_37 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_33 [i_2 - 1] [i_9] [i_9] [i_9 + 3] [i_10] [(short)15]))));
                        var_33 += ((/* implicit */_Bool) arr_34 [i_9] [4ULL] [i_10] [i_10] [i_9]);
                        var_34 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 20; i_13 += 3) 
                    {
                        var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) arr_26 [i_9] [8ULL] [i_13]))) : (((/* implicit */int) min((((/* implicit */short) arr_13 [i_8] [i_8])), (var_7))))))) ? (((/* implicit */int) arr_36 [i_9] [i_9] [i_8])) : (((/* implicit */int) arr_29 [i_8] [i_2 - 2] [i_9 + 2]))));
                        var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_13] [i_9 + 3]))) || (((/* implicit */_Bool) max((arr_3 [i_9] [i_9 + 2]), (arr_3 [i_10] [i_9 - 1]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        arr_43 [i_2] [i_8] [i_9] [i_10] [i_14] |= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_3)), (arr_34 [i_2] [i_2 + 1] [i_2 + 2] [(short)16] [i_2]))), (((/* implicit */unsigned long long int) ((short) arr_34 [i_2] [i_2 + 2] [i_2 + 1] [i_2] [i_2])))));
                        var_37 ^= ((/* implicit */unsigned char) max((((short) arr_8 [i_2 - 2])), (((/* implicit */short) ((unsigned char) arr_8 [i_2 - 3])))));
                        var_38 = ((/* implicit */short) arr_29 [(short)9] [i_9] [i_10]);
                    }
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_39 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_9 + 3] [i_9] [i_8] [(unsigned char)1] [i_2 - 3] [i_2] [i_2 - 1]))));
                        var_40 = arr_16 [i_2 - 1] [i_8] [i_9];
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) 11465964247939739746ULL))));
                        var_42 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) >= (((/* implicit */int) arr_16 [i_2 + 1] [i_2] [i_2]))))), (((((/* implicit */int) var_11)) | (((/* implicit */int) arr_20 [i_15] [i_8] [i_9 + 4] [i_9] [i_10] [i_15]))))))));
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)110))))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */short) arr_35 [i_2] [i_8] [(unsigned char)18] [i_2] [i_15] [i_10])))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)10405), (var_3)))))))))));
                    }
                    var_44 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_39 [i_2] [(unsigned char)19] [i_8] [i_8] [i_8] [i_9 - 1] [i_10])) ? (((/* implicit */int) arr_39 [i_2] [i_8] [i_8] [i_9 + 4] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_6 [i_10])))) + (((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), (arr_30 [i_2]))), (arr_27 [i_9] [(_Bool)1] [i_9 + 4]))))));
                }
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    arr_50 [(unsigned char)4] [i_2] [i_9] [i_9] [i_8] [i_16] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                    var_45 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [i_9] [i_9] [(short)15])), (min((((unsigned long long int) arr_21 [i_8] [i_8] [i_8] [i_16] [i_8] [i_8])), (((/* implicit */unsigned long long int) arr_16 [(short)0] [i_9 + 1] [i_16]))))));
                    arr_51 [i_2] [i_2] [(unsigned char)10] [i_2 - 3] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((min((((/* implicit */short) (unsigned char)56)), (arr_18 [i_2] [i_8] [i_9] [i_2 - 3]))), (((/* implicit */short) ((unsigned char) var_6))))))));
                }
                arr_52 [i_9] [(short)14] [i_9] [i_9] = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_40 [i_2] [i_2 - 3] [i_9 + 2])))), (((((/* implicit */_Bool) arr_46 [i_2 - 1] [i_8] [(unsigned char)19] [i_2] [i_9])) ? ((((_Bool)0) ? (((/* implicit */int) arr_33 [i_2 - 4] [i_8] [(unsigned char)12] [i_8] [i_9 + 2] [i_9])) : (((/* implicit */int) arr_39 [i_2] [(short)17] [i_9 + 2] [(short)17] [i_2] [(short)17] [i_2])))) : (((/* implicit */int) max((var_15), (arr_22 [i_2]))))))));
                arr_53 [i_2] [i_8] [(short)19] |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
            }
            /* LoopNest 2 */
            for (unsigned char i_17 = 2; i_17 < 17; i_17 += 3) 
            {
                for (short i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            arr_62 [i_19] [i_18] [i_17 + 2] [i_18] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13734)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_17] [i_18] [i_19]))))) : (((/* implicit */int) arr_6 [i_2 - 3]))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_39 [i_17 - 1] [i_17] [i_17 - 1] [(unsigned char)17] [(short)18] [i_17] [i_17 + 3])) * (((/* implicit */int) (_Bool)1))));
                            var_47 = ((/* implicit */short) var_14);
                            var_48 += ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_2] [(unsigned char)15] [i_2])) << (((((/* implicit */int) var_4)) - (191)))))) : (arr_34 [i_2] [i_8] [i_17] [i_18] [i_2])));
                        }
                        var_49 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_17 + 1] [i_2 - 1] [(short)8] [i_17 + 1])) ? (((/* implicit */int) max((var_15), (((/* implicit */short) (unsigned char)97))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_29 [i_17 + 1] [i_8] [i_2])) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) arr_25 [(short)15] [i_17 + 3] [i_8])) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_32 [i_2] [i_8] [i_17 + 4] [(_Bool)1] [i_18]), (arr_44 [i_2] [i_8] [i_17 - 2] [i_18] [i_2 + 1] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_18] [i_17] [i_2] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_36 [i_8] [i_17 + 3] [i_18])) : (((/* implicit */int) arr_41 [i_2] [i_8] [i_8] [i_8] [i_17 + 1] [i_17 + 2] [i_18]))))))))));
                        arr_63 [i_18] [i_8] [i_17] [i_18] [i_8] [i_17 + 1] = ((/* implicit */short) (((~(((unsigned long long int) arr_47 [i_2] [i_2 - 1] [i_2])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_18] [i_8])))));
                        var_50 *= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_8 [i_17 + 4])))), (((((/* implicit */int) arr_8 [i_17 + 2])) << (((((/* implicit */int) var_4)) - (189)))))));
                    }
                } 
            } 
            arr_64 [(short)0] [i_2] [i_2] &= ((/* implicit */short) max((max((arr_35 [i_2] [i_2] [i_2] [i_2 - 3] [i_2 + 2] [i_2 + 2]), (arr_35 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 3] [i_2 - 2]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 2])) || (((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 4])))))));
        }
        /* vectorizable */
        for (short i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 21; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        {
                            var_51 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_69 [i_20] [i_20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))));
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_20])) && (((/* implicit */_Bool) arr_66 [i_20] [i_20]))));
                            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_68 [i_2] [i_20] [i_21] [i_20]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)205))))) ? (((/* implicit */int) arr_20 [i_20] [i_22] [i_21] [i_21] [i_20] [i_20])) : (((/* implicit */int) var_0))));
                            var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) arr_65 [i_20])) : (((/* implicit */int) (short)32767))))));
                            arr_76 [i_21] [i_20] [(short)16] [i_22] [i_23] |= ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                arr_77 [i_2] [i_2] [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_2 - 2]))));
            }
            var_55 = arr_28 [(unsigned char)8] [i_20] [i_20] [i_20] [i_20];
            var_56 = ((short) var_3);
        }
        var_57 ^= ((/* implicit */_Bool) arr_74 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2]);
        var_58 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_56 [i_2] [i_2] [i_2] [i_2]))));
    }
    var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) * (((/* implicit */int) (short)-16995)))), (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_6)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)1)))))) | (((var_8) << (((((/* implicit */int) var_6)) - (194))))))) : (var_8)));
}
