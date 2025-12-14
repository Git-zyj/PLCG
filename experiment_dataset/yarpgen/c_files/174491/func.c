/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174491
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
    var_10 = ((/* implicit */unsigned long long int) (~((((!(((/* implicit */_Bool) 4673959794817944352ULL)))) ? (((/* implicit */unsigned int) ((var_6) & (var_3)))) : (1740269640U)))));
    var_11 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)36009)) ? (((/* implicit */unsigned long long int) var_7)) : (9208724532254770813ULL))) * (((/* implicit */unsigned long long int) var_2))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) ((var_7) == (var_7))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) 5ULL))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_0 - 4])), (18446744073709551610ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_9 [i_3] [i_2] [8LL] [i_0 - 1])) & (((/* implicit */int) arr_0 [i_0])))) ^ (((((/* implicit */int) var_1)) ^ (var_2))))))));
                            var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0 + 2] [i_1] [i_1] [i_0 + 1])) : (((((/* implicit */_Bool) arr_2 [9])) ? (((/* implicit */int) arr_2 [6ULL])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [7U]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) ^ (min((((/* implicit */unsigned long long int) var_2)), (9238019541454780802ULL)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        arr_15 [3LL] [3LL] [i_1] [3LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5]))) : (arr_5 [i_4] [(unsigned short)10] [(unsigned short)10])))) ? ((+(var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [(short)5] [i_5 - 3] [i_5 + 2])))));
                        arr_16 [4LL] [4LL] [i_0] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 3] [i_5] [i_5] [i_5])) ? (var_9) : (((/* implicit */int) arr_13 [i_5 - 3] [i_5 - 3] [i_5] [i_5]))));
                        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_5 - 2] [i_0 - 2])) ? (var_9) : (((/* implicit */int) arr_10 [i_0 - 4] [i_5] [i_5 - 3] [0U]))));
                        arr_17 [i_0] [i_1] = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_5])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) 9238019541454780803ULL))));
                        arr_21 [(signed char)1] [i_1] [i_1] [i_1] [2] [i_1] &= ((/* implicit */_Bool) 9208724532254770801ULL);
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) -2147483643);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_0 - 4]))))) - (((((/* implicit */_Bool) arr_10 [i_0 - 4] [i_4] [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0 - 3]))))));
                        arr_25 [i_7] [i_7 - 2] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_23 [i_7] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_7 - 2]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2])), (((var_4) / (8316385154130123880LL))))))));
                        var_19 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((signed char) arr_20 [i_8] [i_4] [i_1] [i_1] [i_1] [(unsigned short)2]))))));
                        arr_29 [i_0] [i_1] [i_4] [i_8] [i_4] [i_8 + 1] = ((/* implicit */long long int) ((((arr_26 [i_0 - 3] [i_8 + 3]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))))) ? (9208724532254770813ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 4]))));
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            var_20 -= ((/* implicit */int) ((unsigned int) ((((/* implicit */int) ((signed char) arr_7 [i_0 - 1] [i_1]))) ^ (((/* implicit */int) ((signed char) var_7))))));
                            var_21 = ((/* implicit */unsigned short) ((signed char) max((arr_32 [i_8] [i_9] [(unsigned short)3] [i_9 + 2] [(unsigned short)8]), (arr_32 [i_8] [i_9] [i_9 + 2] [i_9 - 1] [i_9 - 1]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_5))));
                            var_23 = (((-(((/* implicit */int) (signed char)35)))) == ((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1])))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */int) ((long long int) arr_36 [i_0] [i_0 - 1] [i_0] [i_1] [i_8 - 1]));
                            arr_39 [i_8] [6LL] [11ULL] [i_8] = max((((/* implicit */long long int) ((signed char) arr_38 [i_8]))), (max((max((((/* implicit */long long int) (short)-23607)), (var_7))), (min((var_4), (((/* implicit */long long int) var_0)))))));
                            var_25 = ((/* implicit */unsigned short) var_7);
                        }
                        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [i_8] [i_1] [i_1])) + (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_41 [(unsigned short)10] [i_1] [i_8] [i_8] [(signed char)7])) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_12]))) + (9238019541454780786ULL))))));
                            var_27 -= ((/* implicit */unsigned long long int) ((long long int) min((9238019541454780840ULL), (min((((/* implicit */unsigned long long int) (signed char)-127)), (9238019541454780830ULL))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_9), (((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_12]))))))) == (max((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) : (9238019541454780830ULL))), (((/* implicit */unsigned long long int) arr_35 [i_1] [i_4] [2LL]))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_4] [i_8] [i_1])) ? (((/* implicit */int) arr_34 [i_0] [(unsigned char)3] [i_1] [i_4] [i_4] [i_8] [i_0])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_6 [4] [i_8])) ? (9238019541454780840ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_4] [i_1])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)18))) ^ (((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_12] [i_12]))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))));
                            arr_42 [5] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((9238019541454780830ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)184))) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)-92)))))));
                        }
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        var_30 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_43 [i_13]))))));
        var_31 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_44 [i_13]))) == (((/* implicit */int) max((((/* implicit */unsigned short) arr_44 [i_13])), (arr_43 [i_13]))))));
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((min((((long long int) var_6)), (((/* implicit */long long int) arr_43 [i_13])))) == (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_13])) & (((/* implicit */int) arr_43 [i_13]))))) : (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_1))))))))))));
        /* LoopSeq 4 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_49 [6ULL] [i_13] = ((((/* implicit */_Bool) 128970250)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)184)));
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (unsigned char)238))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_14 - 1] [i_14 - 1])) ? (arr_45 [i_14 - 1] [i_14 - 1]) : (arr_45 [i_14 - 1] [i_14 - 1])))) ? (((long long int) arr_45 [i_14 - 1] [i_14 - 1])) : (((((/* implicit */long long int) arr_45 [i_14 - 1] [i_14 - 1])) | (-9164427301300791125LL)))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_35 ^= ((/* implicit */unsigned short) arr_50 [i_13] [i_15 - 1]);
            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (unsigned short)37982))));
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) min((arr_52 [i_17] [i_16] [i_15]), (((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)49675))))))));
                        var_38 *= ((/* implicit */signed char) 9208724532254770830ULL);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 17; i_19 += 1) 
            {
                for (int i_20 = 1; i_20 < 16; i_20 += 1) 
                {
                    {
                        var_39 = var_0;
                        var_40 &= ((signed char) (unsigned char)65);
                    }
                } 
            } 
            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_46 [i_18 - 1] [i_18 - 1] [6U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_18 - 1]))) : (((((/* implicit */_Bool) arr_57 [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_50 [(_Bool)1] [5LL])) : (9208724532254770766ULL)))));
            var_42 *= ((/* implicit */long long int) 9208724532254770832ULL);
            /* LoopNest 2 */
            for (long long int i_21 = 2; i_21 < 15; i_21 += 2) 
            {
                for (int i_22 = 4; i_22 < 15; i_22 += 3) 
                {
                    {
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((var_5) & (((/* implicit */long long int) arr_50 [i_21] [i_13])))) == (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_51 [i_18 - 1])) : (((/* implicit */int) var_8))))))))));
                        var_44 = ((/* implicit */unsigned short) ((unsigned int) arr_56 [i_13] [i_21] [i_13] [i_21] [i_21]));
                    }
                } 
            } 
        }
        for (unsigned int i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            arr_76 [i_23] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_13] [i_13] [(signed char)1] [i_13])) ? (max((var_7), (var_7))) : (((2410966490025907583LL) / (((/* implicit */long long int) arr_45 [i_13] [i_13]))))))) ? (9238019541454780830ULL) : ((+(4541119375402338447ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_24 = 2; i_24 < 16; i_24 += 2) 
            {
                for (long long int i_25 = 2; i_25 < 13; i_25 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_45 = (signed char)36;
                            arr_83 [i_26] = max((arr_48 [i_13] [(signed char)16]), (((/* implicit */unsigned long long int) max(((-(3954318994U))), (((/* implicit */unsigned int) ((unsigned short) arr_51 [i_25])))))));
                            arr_84 [i_26] [(signed char)7] = ((/* implicit */signed char) min((((((/* implicit */int) arr_74 [i_24 - 2] [i_24 + 1] [i_24 + 1])) & (((/* implicit */int) arr_74 [i_24 - 2] [i_25] [i_25 + 2])))), (((((/* implicit */_Bool) 2086135376)) ? (((/* implicit */int) arr_56 [i_24 - 2] [i_26] [i_25 - 1] [i_25 + 3] [i_25])) : (((/* implicit */int) arr_56 [i_24 - 2] [i_26] [i_24 + 1] [i_25 + 3] [8LL]))))));
                        }
                        var_46 = ((/* implicit */int) arr_62 [6ULL] [i_24] [i_25]);
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2086135376)) ? (arr_63 [i_25]) : (((/* implicit */int) (signed char)36)))) * (((/* implicit */int) ((((/* implicit */int) arr_60 [i_23] [i_24] [13ULL])) == (((/* implicit */int) var_1)))))))) ? (((int) ((unsigned int) (_Bool)1))) : ((+(((/* implicit */int) arr_46 [i_25 + 4] [i_24 + 1] [i_23])))))))));
                    }
                } 
            } 
        }
    }
}
