/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161373
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551612ULL))));
    var_16 = ((/* implicit */int) var_14);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 3ULL)) ? (-2147483629) : (((/* implicit */int) (unsigned char)211))))))));
        var_17 = ((((/* implicit */int) var_10)) == ((~(((/* implicit */int) arr_1 [i_0])))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_18 += ((/* implicit */unsigned int) arr_4 [i_1 - 1]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1 - 1]))) ? ((-(((/* implicit */int) arr_6 [i_1 - 1])))) : (((((/* implicit */int) arr_6 [i_1 + 1])) << (((/* implicit */int) arr_6 [i_1 + 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_6 [i_1 + 1]));
            var_20 = ((/* implicit */unsigned short) arr_8 [i_1]);
            arr_10 [i_2] = ((unsigned char) (+(((/* implicit */int) arr_6 [i_2]))));
            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1 - 1]))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned char) arr_4 [i_4 + 2]));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((arr_11 [i_1] [i_1] [i_4]) + (9223372036854775807LL))) << (((((arr_13 [i_1] [(short)0] [i_4 + 1] [i_4] [0LL]) + (1150055214))) - (5))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_19 [(_Bool)1] [i_2] [i_3] [i_3] [i_5] = var_12;
                        arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_2])))) ? ((~(18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 - 1] [i_4 - 1] [i_3] [i_5])))));
                    }
                    arr_21 [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                }
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    arr_26 [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_2] [i_3] [i_6] [i_2] [i_6]))) : (arr_11 [i_1] [i_1] [i_1 + 1])));
                    var_24 -= ((/* implicit */unsigned short) arr_5 [i_6]);
                }
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_29 [i_1 - 1] [i_3] [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned int) ((int) arr_6 [i_1 - 1]));
                    arr_30 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_1 + 1])) ? (((/* implicit */int) arr_25 [i_1 - 1])) : (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        arr_34 [i_1 - 1] [i_3] [i_7] [i_3] = arr_16 [i_1] [i_1] [i_8 + 1] [i_1 - 1];
                        arr_35 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1] [i_3] [i_1 + 1]))));
                    }
                }
                var_25 = ((/* implicit */int) arr_24 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_3]);
                var_26 = ((/* implicit */int) (unsigned char)45);
                arr_36 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (!(arr_14 [i_2] [i_3] [i_3] [i_1 - 1] [i_1 + 1])));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            arr_39 [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_1 - 1]))) : (arr_8 [i_9])))) ? ((+(arr_8 [i_1]))) : (max((((/* implicit */unsigned int) arr_33 [i_1] [i_1 - 1])), (arr_8 [i_9])))));
            arr_40 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551602ULL))))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (unsigned char)0))));
        }
    }
    for (unsigned char i_10 = 2; i_10 < 8; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    arr_51 [i_10] [i_11] [i_10] [i_12] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (arr_8 [i_10 - 2]))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_7 [i_12])))))))));
                    arr_52 [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_10] [i_11]))));
                    var_28 = ((/* implicit */short) arr_45 [i_10]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((unsigned long long int) ((int) ((arr_6 [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_13] [i_14]))) : (18446744073709551602ULL))))))));
                    var_30 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_25 [i_10 - 1])))) ^ (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
        arr_57 [i_10 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_10 - 2])) * (((/* implicit */int) arr_32 [i_10 + 3]))))) : (((((/* implicit */_Bool) arr_43 [i_10 + 2])) ? (arr_43 [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10 - 2])))))));
        var_31 = ((/* implicit */unsigned char) arr_15 [12LL] [(_Bool)1] [i_10] [(_Bool)1]);
        var_32 = ((/* implicit */signed char) (unsigned char)217);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        arr_60 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_15] [(_Bool)1] [(_Bool)1] [i_15])))))));
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            arr_64 [(unsigned char)4] [(unsigned char)4] &= ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_15] [i_15] [i_15] [i_15] [(unsigned short)6]));
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    {
                        arr_70 [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((unsigned int) arr_31 [i_18] [i_17] [i_16]));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [0U])))))));
                        var_34 = ((/* implicit */unsigned char) arr_22 [i_17]);
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            arr_73 [i_19] [i_15] [(signed char)10] = ((/* implicit */_Bool) ((short) arr_72 [i_15] [i_19]));
            arr_74 [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_15] [i_19] [i_19] [i_19]))) % (arr_69 [i_19])));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_77 [i_15] [i_15] [i_20] = ((/* implicit */long long int) (!(arr_6 [i_20])));
            /* LoopNest 2 */
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((arr_8 [i_15]) - (1750317060U))))))));
                        arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_15])) ? (((/* implicit */int) arr_17 [i_21])) : (arr_67 [i_22] [i_15])));
                    }
                } 
            } 
            arr_84 [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_20])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (25ULL)))) ? (((/* implicit */int) arr_82 [i_15] [i_20] [i_20])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32)))))));
            var_36 = ((((/* implicit */_Bool) arr_38 [i_15] [i_20] [i_15])) ? (((/* implicit */int) arr_38 [i_15] [i_15] [i_20])) : (((/* implicit */int) arr_38 [i_20] [i_20] [i_15])));
            arr_85 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (unsigned char)119)) == (((/* implicit */int) (signed char)-62))))));
        }
        for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 1) 
        {
            arr_88 [i_15] [i_23] = ((/* implicit */long long int) ((arr_82 [i_15] [i_23] [i_23]) ? (((/* implicit */int) arr_14 [(unsigned char)6] [(unsigned short)14] [i_23] [i_23] [(_Bool)1])) : (((/* implicit */int) (unsigned char)224))));
            arr_89 [i_15] [i_15] = ((/* implicit */unsigned char) (+(arr_76 [i_15])));
            arr_90 [i_15] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (19ULL) : (((/* implicit */unsigned long long int) arr_69 [i_15]))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_15] [i_15] [i_15] [i_23] [i_15] [i_23])) ? (((/* implicit */int) (unsigned short)3568)) : (((/* implicit */int) arr_72 [i_23] [i_23]))));
        }
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_94 [i_24] = ((/* implicit */short) arr_67 [i_24] [i_24]);
        arr_95 [i_24] [i_24] = ((long long int) arr_69 [i_24]);
    }
    /* vectorizable */
    for (unsigned char i_25 = 0; i_25 < 18; i_25 += 1) 
    {
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) arr_6 [i_25]))));
        arr_99 [i_25] = ((/* implicit */unsigned char) arr_58 [i_25]);
        arr_100 [i_25] |= ((((/* implicit */int) arr_5 [i_25])) % (arr_13 [i_25] [i_25] [i_25] [i_25] [10LL]));
    }
    var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((_Bool) var_14))), (max((18446744073709551605ULL), (((/* implicit */unsigned long long int) (signed char)74))))));
}
