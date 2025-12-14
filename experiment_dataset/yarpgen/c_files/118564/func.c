/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118564
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) - (2052069906)));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [16LL] [i_0] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_2 [(signed char)1])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_1])))) : (((((/* implicit */int) arr_5 [i_0] [i_1])) | (((/* implicit */int) arr_1 [i_0]))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [17])) <= (((/* implicit */int) arr_6 [i_0]))));
                }
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) != (arr_2 [i_1])))));
                        arr_11 [i_0] [i_1] [i_3] [i_4] [(signed char)10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_3])))))));
                        var_18 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [(unsigned char)15] [(unsigned char)15])) : (arr_0 [2ULL] [i_3]))));
                    }
                    var_19 |= ((/* implicit */unsigned int) arr_9 [i_3] [i_3] [i_1] [i_0] [i_0] [15ULL]);
                }
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [1LL] [i_0] [(signed char)4] [i_1] [i_1] [20ULL])) ? (-7474964064742622389LL) : (arr_9 [14U] [i_1] [i_1] [i_1] [i_0] [13LL])))))) && (((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [9U] [9U] [9U]))))))) == (max((((/* implicit */unsigned int) (unsigned short)11449)), (arr_3 [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_3 [i_0] [i_0]))));
                        arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_14 [(unsigned short)0] [i_1] [i_0])), (arr_6 [i_0])))) ? (max((((/* implicit */long long int) arr_12 [i_0] [i_1] [3])), (arr_9 [i_0] [i_0] [(unsigned char)2] [(short)9] [i_5] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [10LL] [i_1] [10LL]), (arr_16 [i_0] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_6])) : (1724662968)))) / (((arr_3 [(short)3] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_5] [i_5])))))))) : (min((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5])) ? (arr_2 [(signed char)19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_6]))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_0 [18] [i_1])))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [19U])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [6ULL])) & (((/* implicit */int) min(((unsigned char)252), (((/* implicit */unsigned char) (signed char)48)))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [0ULL]))) + (arr_13 [i_6]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5 - 1] [i_1] [i_5 - 1]))))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7702356095701654047ULL)) ? (9ULL) : (((/* implicit */unsigned long long int) -7587150172587406976LL))))) || (((((long long int) arr_1 [i_5])) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2187923484U))))))));
                            var_24 = arr_2 [i_0];
                            arr_26 [i_0] [i_1] [i_0] [i_7] [i_1] [6U] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_21 [i_0] [i_7])))) ? (((/* implicit */int) (signed char)19)) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_5 - 1] [i_7] [i_8 + 1])) ? (arr_22 [i_8] [i_8] [i_5 - 1] [i_5 - 1] [i_8 + 2]) : (((/* implicit */int) (unsigned short)65535))))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) ((0ULL) != (arr_0 [i_5] [i_5])))) <= (((/* implicit */int) arr_15 [i_9 - 1] [i_7] [i_5 + 1]))))), (((((/* implicit */_Bool) arr_27 [i_1] [i_9] [i_9] [7] [i_9] [i_9])) ? (((/* implicit */int) arr_14 [i_7] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5 + 1])) && (((/* implicit */_Bool) arr_13 [i_9])))))))));
                            var_26 = (signed char)33;
                        }
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((_Bool) arr_7 [i_0])))));
                        var_28 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_7] [(unsigned char)19]))));
                    }
                    var_29 |= ((/* implicit */short) arr_27 [i_5 - 1] [(signed char)12] [i_5 - 1] [i_0] [i_5 - 1] [i_0]);
                }
                arr_30 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(9ULL)))) ? ((-(((((/* implicit */_Bool) 13ULL)) ? (arr_3 [i_0] [20ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [20] [i_0] [i_1]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)16])))))) ? (((/* implicit */int) ((arr_37 [i_10] [i_11 + 1] [i_12 - 1] [i_13]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_11 + 1] [i_12 - 1] [i_13] [i_12 + 4])))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10] [i_11]))) == (arr_21 [i_10] [19LL]))) ? (arr_24 [i_11]) : (((/* implicit */int) arr_8 [i_10] [4] [7ULL]))))));
                        var_31 -= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_12 [i_10] [i_11] [i_12 - 1])))), (((((/* implicit */_Bool) arr_12 [i_11 + 2] [(unsigned char)18] [i_12 - 1])) ? (((/* implicit */int) arr_12 [i_12] [i_12] [i_12 + 4])) : (((/* implicit */int) arr_12 [i_11 - 1] [i_11] [i_12 - 1]))))));
                    }
                } 
            } 
        } 
        arr_43 [0LL] = arr_41 [(unsigned short)5] [i_10] [i_10];
    }
    for (unsigned int i_14 = 1; i_14 < 20; i_14 += 4) 
    {
        var_32 = ((/* implicit */long long int) arr_46 [i_14 - 1] [i_14 - 1]);
        arr_48 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)62)) || (((/* implicit */_Bool) arr_46 [i_14] [i_14]))));
    }
    for (short i_15 = 3; i_15 < 10; i_15 += 4) 
    {
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) max((((((/* implicit */int) (short)23588)) - (((/* implicit */int) (short)-9082)))), (max((arr_46 [i_15] [i_15 - 3]), ((+(((/* implicit */int) arr_44 [6LL])))))))))));
        arr_51 [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-3226241425651845736LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23588)))))) * ((+(18446744073709551615ULL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_16 = 1; i_16 < 10; i_16 += 2) 
        {
            var_34 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_36 [i_15] [(short)12] [i_15])) + (2147483647))) << (((arr_28 [i_15] [i_16] [i_16] [i_16] [i_16]) - (3673972295499019118LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_16] [(short)7] [i_15] [(short)7] [i_15] [i_15])) ? (((/* implicit */int) arr_6 [i_15])) : (arr_35 [i_15] [i_16 + 1] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_37 [i_16 - 1] [i_16 - 1] [i_15 - 2] [i_16])) ? (arr_45 [i_15]) : (11868141700741576650ULL))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                for (int i_18 = 2; i_18 < 7; i_18 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) arr_47 [i_18] [i_15]))));
                        arr_59 [i_15 - 2] [i_16 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_12 [i_15 + 1] [i_15 + 1] [i_16 - 1])) : (((/* implicit */int) arr_14 [i_15] [i_18] [i_17])))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_15] [i_16])) <= (arr_45 [(short)9]))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)14)) ? (arr_39 [i_18] [i_16 + 1] [i_16 - 1] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_17])))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_27 [i_15 - 1] [4ULL] [i_15 - 1] [8ULL] [(_Bool)0] [i_16])) > (((((/* implicit */unsigned long long int) 9223372036854775807LL)) - (9223372002495037440ULL)))));
        }
        for (long long int i_19 = 2; i_19 < 10; i_19 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_52 [i_19 + 1])) ? (((/* implicit */int) arr_52 [i_19 + 1])) : (((/* implicit */int) arr_52 [i_15]))))));
            /* LoopNest 3 */
            for (short i_20 = 0; i_20 < 11; i_20 += 3) 
            {
                for (unsigned char i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_73 [i_15] [i_19] [(unsigned char)0] [(unsigned char)8] [(unsigned char)0] [i_20] [i_20] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_67 [i_15] [i_15] [10] [7ULL] [i_22])) ? (((((/* implicit */_Bool) arr_16 [3] [i_19])) ? (arr_67 [i_15] [i_15] [i_20] [(unsigned char)1] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23576))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_20]))))));
                            var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_21 [15LL] [i_19 - 1])), (((((((/* implicit */unsigned long long int) arr_60 [i_21] [i_20])) < (18446744073709551606ULL))) ? (((/* implicit */unsigned long long int) min((arr_67 [i_15] [8U] [(signed char)5] [10ULL] [8U]), (((/* implicit */unsigned int) arr_46 [(short)0] [6U]))))) : (max((((/* implicit */unsigned long long int) arr_40 [i_15] [i_15] [i_21] [8ULL])), (524287ULL)))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_23 = 2; i_23 < 9; i_23 += 3) 
        {
            var_40 = arr_31 [i_15];
            arr_76 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_15 - 3] [i_23] [i_23 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))) : (arr_71 [i_15] [i_15] [i_15 - 2] [i_23] [i_15] [i_23 - 2] [i_23 - 1])));
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 4; i_24 < 8; i_24 += 3) 
            {
                for (short i_25 = 1; i_25 < 7; i_25 += 1) 
                {
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_15] [i_15] [i_24 + 3]))) != (arr_21 [i_25 + 3] [i_24 + 1]))))));
                        arr_83 [i_23] [i_24] [i_23] [i_23] = ((/* implicit */signed char) ((short) arr_0 [i_15] [i_15]));
                        arr_84 [i_23] [i_24] [i_23] [i_23] [i_23] = ((/* implicit */signed char) arr_46 [i_15 - 3] [i_23 - 1]);
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned int) 18446744073709551615ULL);
        }
        /* vectorizable */
        for (short i_26 = 4; i_26 < 10; i_26 += 3) 
        {
            var_43 *= ((((/* implicit */_Bool) (-(9223372071214514175ULL)))) ? (arr_0 [i_15] [i_15 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_39 [i_15] [i_15 - 2] [i_15 - 2] [i_26])))));
            arr_87 [i_15] = ((/* implicit */short) ((((/* implicit */int) arr_47 [4ULL] [16U])) == ((-(((/* implicit */int) arr_58 [6U] [i_26] [(signed char)4] [i_15]))))));
        }
        arr_88 [i_15] = ((/* implicit */unsigned int) arr_4 [i_15] [i_15] [i_15]);
    }
    var_44 -= ((/* implicit */int) min((((((((/* implicit */_Bool) 22LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_11))))))), (var_1)));
    var_45 = ((((((var_12) <= (((/* implicit */long long int) 8)))) ? (((((/* implicit */_Bool) (signed char)-18)) ? (2969550835707601750LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53920))) : (var_12))))) != (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
}
