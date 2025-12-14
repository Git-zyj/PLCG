/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180893
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] &= ((/* implicit */unsigned char) (-(4194272ULL)));
                    var_11 *= ((/* implicit */_Bool) var_6);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [6ULL] [i_3] [i_0]))) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_10 [i_0])))));
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_3 [i_0]))));
                            var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-27903))))) ? (((((/* implicit */_Bool) 14161727019318983324ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-128)))));
                            var_15 = ((/* implicit */short) ((arr_16 [i_3] [i_4] [i_5] [i_6]) ? (((/* implicit */int) arr_16 [i_0] [i_3] [i_5] [2U])) : (((/* implicit */int) (short)127))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_16 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)17)) >> (((((/* implicit */int) arr_7 [i_0] [i_3] [i_4] [(_Bool)0])) - (213)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)17)) >> (((((((/* implicit */int) arr_7 [i_0] [i_3] [i_4] [(_Bool)0])) - (213))) + (130))))));
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2732013000144136268LL)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)-64))));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_18 += ((/* implicit */signed char) (((_Bool)0) || (((/* implicit */_Bool) arr_14 [i_0] [12ULL] [i_8]))));
                var_19 ^= ((/* implicit */unsigned long long int) ((arr_13 [(signed char)4] [(signed char)4] [i_8]) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(unsigned char)12])) : (((/* implicit */int) arr_9 [i_0] [i_3] [(short)12]))));
                var_20 = ((/* implicit */signed char) arr_5 [(_Bool)1] [i_3] [i_0] [i_0]);
                var_21 = ((/* implicit */short) var_1);
            }
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                arr_30 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_9] [i_3] [i_0])) >> (((((/* implicit */int) var_0)) + (143)))));
                var_22 *= arr_29 [i_0] [i_0] [i_0];
            }
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 1) 
            {
                arr_34 [i_0] [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) arr_4 [i_10 + 2] [i_10 - 2] [i_10 + 1]);
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_28 [i_10] [i_3] [(signed char)3]))));
                var_24 = ((/* implicit */int) ((unsigned char) (unsigned char)205));
            }
            /* LoopSeq 3 */
            for (unsigned char i_11 = 2; i_11 < 11; i_11 += 4) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_11 + 2] [i_11 - 2] [i_11 + 1])) ? ((-(var_10))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                arr_37 [i_11] &= ((/* implicit */short) arr_20 [i_3] [i_3] [i_11 + 1] [i_11 + 2] [4ULL]);
                var_26 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) == (((var_4) ? (((/* implicit */unsigned int) var_6)) : (2298895674U)))));
            }
            for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                var_27 *= ((/* implicit */signed char) arr_32 [i_12] [i_3] [i_0]);
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)128)) ? (((unsigned int) (short)128)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_29 -= ((/* implicit */unsigned char) ((unsigned int) ((arr_32 [(signed char)7] [i_3] [(unsigned char)6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_43 [i_0] [i_3] [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [6ULL] [i_3])))))));
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((arr_11 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (arr_21 [i_13] [i_0] [i_3] [i_0]))))));
                var_31 = ((signed char) (!(((/* implicit */_Bool) arr_26 [i_0]))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 3; i_16 < 12; i_16 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_6 [(signed char)3] [i_0] [(unsigned short)12]))));
                        var_33 = ((((/* implicit */_Bool) ((arr_29 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) arr_19 [i_0] [i_0])))) : ((-(((/* implicit */int) (signed char)-83)))));
                        /* LoopSeq 4 */
                        for (signed char i_17 = 4; i_17 < 10; i_17 += 3) /* same iter space */
                        {
                            var_34 += ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_17]));
                            arr_53 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_33 [i_0])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_24 [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_17 - 3] [i_17 - 1] [i_16 - 3] [i_16 - 2])) ? (var_2) : (arr_15 [i_16 - 2] [i_17 - 3] [i_16 + 1] [i_16 - 2]))))));
                            var_36 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        for (signed char i_18 = 4; i_18 < 10; i_18 += 3) /* same iter space */
                        {
                            var_37 ^= ((/* implicit */signed char) ((15315491849052982931ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74)))));
                            var_38 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_51 [i_0] [i_0] [(signed char)8] [i_14] [i_0]))))) + (arr_50 [i_15] [(signed char)10] [i_15] [i_0])));
                        }
                        for (signed char i_19 = 4; i_19 < 10; i_19 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */_Bool) var_0);
                            arr_58 [i_19 + 2] [(unsigned char)8] [i_0] [i_14] [i_0] = ((/* implicit */signed char) ((_Bool) arr_44 [i_19 + 2] [i_0] [i_16 - 2]));
                        }
                        for (signed char i_20 = 4; i_20 < 10; i_20 += 3) /* same iter space */
                        {
                            var_40 += ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_20] [i_20 + 3] [i_20 - 1] [i_20 - 4] [i_16] [i_16 + 1])) + (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (short)7168)))))));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_18 [i_0] [i_14] [i_15] [(short)2] [i_14]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
                            arr_61 [i_0] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((arr_32 [i_16] [i_14] [i_0]) == (arr_0 [i_0] [5ULL]))))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_16 - 1] [i_0] [i_20 - 4])) ? (arr_22 [i_16 - 3]) : (arr_22 [i_16 - 1])));
                        }
                        var_43 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-65))));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_16] [(signed char)10] [(signed char)10] [i_16 - 3])) < (arr_10 [i_0])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
            {
                for (long long int i_22 = 1; i_22 < 11; i_22 += 3) 
                {
                    {
                        arr_69 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) - (((/* implicit */int) arr_45 [i_0] [i_0] [i_0]))));
                        var_45 = ((/* implicit */signed char) (~((((_Bool)0) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) arr_24 [i_14] [i_14] [8ULL]))))));
                        arr_70 [i_0] [i_0] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_65 [i_22] [6U] [i_14] [i_0])))) ? (((/* implicit */int) arr_59 [i_22 + 2] [i_14] [i_21] [i_22])) : (((/* implicit */int) arr_68 [i_22 + 1] [i_22 + 2] [i_21] [i_14] [7ULL] [i_0]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 13; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [(_Bool)0] [i_25] [i_25] [i_25] [i_25])) ? (((((/* implicit */_Bool) arr_52 [i_0] [i_14] [i_23] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_14] [i_14]))) : (arr_57 [i_0] [i_14] [i_23] [i_24] [i_24] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22563)))));
                            var_47 = ((/* implicit */signed char) arr_50 [i_0] [(signed char)10] [i_0] [3ULL]);
                            var_48 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_77 [(_Bool)1] [i_14] [4ULL] [10ULL] [(unsigned char)9]))))));
                            var_49 = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                var_50 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_14])) ? (((/* implicit */int) arr_19 [i_0] [i_14])) : (((/* implicit */int) var_0))));
                arr_78 [i_0] [i_14] [i_0] = ((/* implicit */unsigned long long int) ((short) (signed char)72));
            }
        }
        for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 1) 
        {
            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) 15315491849052982936ULL))));
            /* LoopSeq 1 */
            for (short i_27 = 0; i_27 < 13; i_27 += 1) 
            {
                var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) var_7))));
                arr_83 [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0]);
                arr_84 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_26] [i_27])) ? (2022026586U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                arr_85 [i_0] [i_0] [2ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_27] [i_26] [i_0])) + (((/* implicit */int) arr_39 [i_0] [(_Bool)1] [(short)1] [i_27]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned char)7] [(short)9]))))) : (arr_46 [i_0])));
            }
            var_53 *= ((/* implicit */_Bool) 3462158824178626281ULL);
        }
        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-65))));
    }
    var_55 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) (short)-131)) >= (((/* implicit */int) ((_Bool) var_4))))))));
    var_56 = ((/* implicit */unsigned long long int) var_6);
    var_57 = ((/* implicit */unsigned long long int) var_3);
    var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? ((~(((((/* implicit */int) var_9)) + (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_4))));
}
