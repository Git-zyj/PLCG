/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150022
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
    var_16 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] = ((((/* implicit */_Bool) ((long long int) ((unsigned short) arr_10 [i_0] [i_1] [i_0] [i_3] [4LL] [i_0])))) ? (((var_6) >> ((((-(var_3))) - (7438638958361809934ULL))))) : (((/* implicit */long long int) (-(arr_10 [i_3 + 1] [i_3] [i_3] [i_3 + 4] [i_3 + 4] [i_1])))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1976241553)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) -721997157)) ? (((/* implicit */int) (unsigned short)56744)) : (((/* implicit */int) (unsigned char)128)))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_4 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_3 + 2])))) ? ((+(((arr_6 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0]) << (((1976241546) - (1976241495))))))) : (((/* implicit */unsigned long long int) var_6))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned long long int) -1821468490);
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                            {
                                arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) arr_5 [(unsigned short)8] [i_1] [(unsigned char)16] [i_1])) ? (-753635741) : (-721997157)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 + 2] [i_1])) == (((/* implicit */int) arr_0 [i_1] [i_1]))))))) : (-753635741)));
                                arr_18 [i_1] [i_3] [12U] [12U] [i_1] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [3])) ? (var_1) : (((/* implicit */unsigned int) 356894907)))), (((/* implicit */unsigned int) arr_12 [i_0] [i_2] [i_3]))));
                            }
                            var_22 -= ((/* implicit */signed char) 16025747648590320061ULL);
                            var_23 = ((/* implicit */unsigned int) min((min((arr_9 [i_0] [i_0] [i_1] [i_2] [13] [0LL]), (((/* implicit */long long int) (unsigned short)43789)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)176)) * (((/* implicit */int) arr_1 [i_3 + 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7544279860590542161LL)) ? (max((((/* implicit */int) (unsigned char)128)), (2025321687))) : (((/* implicit */int) var_14))))) ? ((~(11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_7), (var_5)))))))))));
        /* LoopSeq 1 */
        for (long long int i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            arr_24 [i_8] = ((/* implicit */short) (unsigned char)255);
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8 - 1]))) : (var_0)))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)4096))))), (14435648550808486476ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8 + 2] [i_8 + 3])) ? (((/* implicit */int) arr_23 [i_8 + 2] [i_8 + 1])) : (((/* implicit */int) arr_23 [i_8 + 3] [i_8 + 2])))))));
            var_26 -= ((/* implicit */long long int) arr_20 [(unsigned char)11]);
            arr_25 [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_8 + 3] [i_8 + 1] [i_8 - 1]))))) ? (((((/* implicit */_Bool) (unsigned short)61468)) ? (((/* implicit */int) arr_21 [i_8 + 2] [i_8 + 2] [i_8 + 1])) : (((/* implicit */int) arr_21 [i_8 - 1] [i_8 + 3] [i_8 - 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_8 - 1] [i_8 + 3] [i_8 + 2])) : (((/* implicit */int) arr_21 [i_8 + 3] [i_8 + 3] [i_8 + 2]))))));
            var_27 -= ((/* implicit */unsigned short) ((unsigned int) (((+(((/* implicit */int) var_4)))) << (((((/* implicit */int) arr_21 [i_8] [i_8 + 3] [i_8 + 1])) + (60))))));
        }
    }
    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 3; i_10 < 18; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) var_14);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        for (short i_13 = 3; i_13 < 18; i_13 += 3) 
                        {
                            {
                                arr_44 [i_13] [i_10] [i_12] [i_11] [i_10] [i_9 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned char)27)))));
                                arr_45 [i_9] [i_10 + 2] [i_11] [i_11] [i_12] [i_10] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) | (arr_30 [i_11] [i_10])))) + (((((/* implicit */_Bool) 2002522203)) ? (((/* implicit */unsigned long long int) arr_35 [i_12] [i_10])) : (((((/* implicit */_Bool) var_12)) ? (arr_32 [i_10] [i_10 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35853)) ? (2420996425119231554ULL) : (((/* implicit */unsigned long long int) 2047))))) ? (3ULL) : (((((/* implicit */_Bool) (signed char)-32)) ? (2599676757152012638ULL) : (((/* implicit */unsigned long long int) 0LL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                    {
                        var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_10 - 2] [i_10 + 1] [i_10] [18LL])) ? (((/* implicit */long long int) ((int) var_8))) : (arr_29 [i_9 + 2])));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 3; i_15 < 19; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((unsigned char) (unsigned char)255));
                            var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13926)) ? (2002522203) : (((/* implicit */int) (signed char)-74))));
                            arr_51 [i_15 - 2] [i_10] [21ULL] [i_10] [i_9] = ((/* implicit */unsigned long long int) (short)32744);
                        }
                    }
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                        {
                            arr_56 [i_10] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)));
                            arr_57 [i_10] [i_10] = ((/* implicit */unsigned long long int) var_14);
                            arr_58 [i_10] = ((/* implicit */short) (unsigned short)18194);
                            arr_59 [i_17] [i_10] [i_10] [i_10] [i_10] [i_9] = ((/* implicit */long long int) ((unsigned long long int) -16LL));
                        }
                        arr_60 [i_9 + 2] [i_9 + 2] [i_10] [i_9 + 2] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_50 [i_9 + 1])) ? (((/* implicit */unsigned long long int) 255U)) : (var_15))) >> (((/* implicit */int) var_4)))), (((/* implicit */unsigned long long int) ((short) var_13)))));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((((/* implicit */_Bool) -16LL)) ? (arr_49 [8] [i_10 + 3] [i_10 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) < (9064501126401403830LL))))))) | (((/* implicit */long long int) max(((-(-919509215))), (var_11)))))))));
                    }
                    for (short i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((18446744073709551587ULL) < (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)6738))))))))));
                        arr_65 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_18] [i_11])) ? (3ULL) : (((/* implicit */unsigned long long int) arr_26 [i_11] [i_9]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_48 [i_18] [i_10 + 4] [i_9 + 3] [i_10] [i_9 + 3] [i_9 + 3] [i_9])) ? (((/* implicit */int) arr_48 [i_10] [i_10 - 2] [i_9] [i_10] [i_9 + 1] [i_9] [i_9])) : (((/* implicit */int) arr_48 [i_10] [i_10 - 2] [i_9] [i_10] [i_9 + 1] [(unsigned char)16] [i_9 + 2]))))));
                    }
                }
            } 
        } 
        arr_66 [i_9] [i_9] = var_13;
    }
}
