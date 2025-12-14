/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109152
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)1781)) != (((/* implicit */int) (short)-27659))))) > (((/* implicit */int) (unsigned char)255))));
        var_10 = ((/* implicit */int) min((var_10), ((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1])) : (arr_3 [i_0] [i_1]))), (max((arr_3 [i_0] [i_1]), (((/* implicit */int) arr_0 [i_1])))))))));
            arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1])) <= (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1]))))))), (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (short)3951)) : (((/* implicit */int) (unsigned char)78))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((-14), (((((/* implicit */int) (short)-27659)) | (((/* implicit */int) (short)1))))));
                            var_13 &= ((/* implicit */short) arr_12 [i_6]);
                            var_14 = (+(((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)177)), ((short)-1)))) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (unsigned char)242)))) : (arr_22 [i_3] [i_3] [i_4] [i_4] [i_6] [7]))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(1777133445))))));
                            var_16 *= min((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_3] [i_4] [(short)13] [i_6])))) <= (((((/* implicit */_Bool) arr_15 [i_5] [i_4] [i_2])) ? (arr_22 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3 - 1]) : (((/* implicit */int) arr_12 [i_4]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5])) / (arr_22 [i_2] [i_3 - 1] [i_3] [i_3] [i_3] [i_3])))) ? (max((-1775604650), (((/* implicit */int) (short)-6946)))) : (((/* implicit */int) min(((unsigned char)11), (arr_12 [i_5 - 1])))))));
                        }
                    } 
                } 
            } 
            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_2] [i_3] [i_3]))))) ? (((((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_3] [i_3])) ^ (((/* implicit */int) arr_16 [i_2] [i_3] [i_3 + 2] [i_3])))) : (((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) ((min((arr_11 [(unsigned char)12]), (((/* implicit */int) var_3)))) < (((((/* implicit */_Bool) var_2)) ? (-1) : (((/* implicit */int) var_0))))))) : (min((((/* implicit */int) arr_15 [i_2] [i_3 + 1] [i_3 - 1])), (arr_10 [i_2] [10])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_25 [i_2] [i_7] [i_2] = ((/* implicit */int) (unsigned char)100);
            arr_26 [i_2] [(short)10] = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_14 [(unsigned char)8] [i_7])))));
        }
        var_18 = ((/* implicit */int) min((var_18), ((-(min((((/* implicit */int) var_7)), (arr_11 [i_2])))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((((int) ((((/* implicit */int) (short)-19003)) / (arr_10 [i_8] [i_9])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_22 [i_9] [i_9] [i_9] [i_8] [i_2] [i_9]) : (((/* implicit */int) (short)-6223))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_23 [i_2] [i_9] [i_9]))))));
                    arr_31 [i_2] [(short)1] [i_8] [i_2] = ((/* implicit */unsigned char) arr_19 [i_9] [i_8] [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
        arr_32 [i_2] = ((/* implicit */int) (short)-27663);
        arr_33 [2] [i_2] = min((((arr_28 [i_2] [i_2] [i_2]) ^ (arr_28 [i_2] [i_2] [i_2]))), (((((/* implicit */_Bool) (unsigned char)4)) ? (arr_28 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_12 [i_2])))));
    }
    for (short i_10 = 1; i_10 < 18; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */unsigned char) arr_20 [(unsigned char)8]);
        /* LoopSeq 4 */
        for (short i_11 = 2; i_11 < 18; i_11 += 1) 
        {
            var_20 = arr_16 [i_10] [i_10] [i_10] [i_11];
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((int) ((((/* implicit */int) (short)1)) % (((((/* implicit */_Bool) arr_17 [i_11] [i_11] [i_11] [i_10])) ? (var_9) : (((/* implicit */int) (unsigned char)11))))))))));
            arr_42 [i_10] [i_11] = ((/* implicit */short) max((((/* implicit */int) (((-(var_1))) < (((((/* implicit */int) var_0)) & (((/* implicit */int) (short)27663))))))), (min((arr_27 [i_10 - 1]), (((/* implicit */int) (unsigned char)236))))));
        }
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) ((short) ((arr_30 [i_12] [0]) - (arr_37 [i_10 - 1]))));
            var_23 = (((-(arr_27 [i_10 + 1]))) + (((/* implicit */int) arr_14 [i_10 + 1] [0])));
            arr_47 [(short)16] [i_10] = (short)-1;
        }
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
        {
            var_24 += ((/* implicit */short) min((max((arr_22 [14] [i_10] [i_10] [i_13] [i_13] [12]), (((((/* implicit */int) (short)-15)) | (var_2))))), ((+(((((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_45 [i_13] [i_10] [i_10]))))))));
            arr_51 [i_10] [i_13] [i_10] = -2147483641;
        }
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
        {
            arr_55 [i_10] [i_14] [i_14] = (-(((/* implicit */int) (unsigned char)234)));
            arr_56 [i_10] [i_14] = 1930776701;
            var_25 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((var_1), (((/* implicit */int) (short)-1))))))) ? (((((/* implicit */_Bool) ((short) var_0))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_50 [i_10])) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_43 [i_10 + 1] [i_10])))) : (((((((/* implicit */_Bool) -996584171)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) arr_46 [i_10] [i_10] [i_14])))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)1))))))));
        }
        arr_57 [i_10] [i_10] &= ((/* implicit */short) (~(((((/* implicit */int) max((var_0), (var_7)))) % (((/* implicit */int) arr_53 [i_10 - 1]))))));
    }
    var_26 = ((/* implicit */unsigned char) min((max(((~(((/* implicit */int) (short)-1)))), (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-587146110) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_15 = 2; i_15 < 11; i_15 += 4) 
    {
        arr_60 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29813)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)158))));
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 13; i_16 += 2) 
        {
            for (short i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (unsigned char)173))));
                                var_28 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)6))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 4) 
                        {
                            var_29 = ((/* implicit */short) (unsigned char)64);
                            var_30 *= ((/* implicit */short) arr_70 [i_21]);
                            var_31 = ((/* implicit */int) arr_36 [(short)9] [i_20]);
                            var_32 = ((/* implicit */int) ((arr_70 [i_21]) <= (((/* implicit */int) arr_64 [i_15 + 3] [i_15 + 1] [i_16 + 1]))));
                        }
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)10422))));
                        arr_77 [i_15] [(short)2] [i_15] [i_20] = ((/* implicit */short) (~(((/* implicit */int) arr_46 [i_15 - 2] [(short)6] [i_20]))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)98)) != (((/* implicit */int) (unsigned char)78)))))));
                    }
                    for (int i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
                    {
                        arr_82 [i_15] [i_15] [i_15] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(15)))) ? (((((/* implicit */_Bool) arr_37 [i_22])) ? (((/* implicit */int) arr_64 [i_15] [i_15] [i_22])) : (((/* implicit */int) var_7)))) : (arr_75 [i_15] [i_16] [i_17] [i_17] [i_17])));
                        arr_83 [i_15] [i_16] [i_22] [i_22] = (~(((((/* implicit */_Bool) (unsigned char)157)) ? (-800097464) : ((-2147483647 - 1)))));
                        var_35 ^= ((/* implicit */short) ((var_2) / (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)55))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_23 = 2; i_23 < 13; i_23 += 2) 
        {
            for (unsigned char i_24 = 0; i_24 < 14; i_24 += 1) 
            {
                {
                    var_36 = ((/* implicit */int) arr_36 [i_15] [i_15]);
                    /* LoopSeq 1 */
                    for (int i_25 = 0; i_25 < 14; i_25 += 4) 
                    {
                        var_37 += ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_16 [i_15] [i_24] [i_15] [i_15]))));
                        var_38 ^= (+(((/* implicit */int) arr_16 [i_15 - 1] [i_23 - 1] [i_25] [i_25])));
                    }
                    arr_93 [i_24] [i_23] [i_15] [i_24] = ((((/* implicit */int) (unsigned char)38)) & (((((/* implicit */_Bool) -2147483641)) ? (-800097452) : (1393933165))));
                }
            } 
        } 
        arr_94 [i_15 - 2] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
    }
    var_39 -= var_5;
}
