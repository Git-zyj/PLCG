/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173468
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
    var_15 = var_13;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) arr_8 [i_0]);
                    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (arr_2 [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -4544077478127095319LL))) ? (((unsigned long long int) arr_3 [i_0 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4544077478127095319LL)) ? (-4544077478127095319LL) : (((/* implicit */long long int) arr_6 [i_0] [8] [i_0]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_17 *= ((/* implicit */unsigned char) var_8);
            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_4])) ? (-4544077478127095299LL) : (((((/* implicit */_Bool) max(((unsigned char)38), ((unsigned char)214)))) ? ((+(4544077478127095299LL))) : (((/* implicit */long long int) arr_13 [(short)8] [i_4]))))));
        }
        /* vectorizable */
        for (long long int i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 6; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 7; i_7 += 3) 
                {
                    {
                        arr_26 [i_7] [i_6 + 1] [i_7] [i_7] = ((/* implicit */short) (unsigned char)180);
                        var_19 = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_8);
                            var_21 += ((/* implicit */unsigned long long int) 549619694671101309LL);
                            var_22 *= ((/* implicit */_Bool) (+(var_1)));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15148869768734075132ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)26))));
            var_24 -= ((/* implicit */short) (+(arr_29 [4LL] [i_5 - 2] [i_5] [i_5])));
        }
        for (long long int i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                arr_40 [i_3] [i_3] [i_11] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_11 - 2] [i_11])) ? (((/* implicit */int) (unsigned short)55967)) : (((/* implicit */int) var_9)))))));
                arr_41 [i_3] [i_11] = ((/* implicit */signed char) arr_39 [i_3] [i_3] [i_12] [i_12]);
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 2; i_14 < 9; i_14 += 1) 
                {
                    var_25 *= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_11 - 2] [i_11]))));
                    arr_48 [i_3] [i_3 - 1] [i_11] [i_11] [i_3] = ((/* implicit */unsigned short) -6495220745546422269LL);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        {
                            arr_55 [i_3] [i_3] [i_11] [i_16] [6ULL] &= ((/* implicit */unsigned char) (-(var_1)));
                            arr_56 [i_3] [i_11] [i_15] [4ULL] [i_16] = ((/* implicit */_Bool) arr_15 [i_11] [i_15] [i_16]);
                        }
                    } 
                } 
            }
            arr_57 [i_11] [0LL] = ((/* implicit */unsigned short) var_6);
            var_27 = var_13;
            var_28 *= ((/* implicit */long long int) max(((unsigned char)214), ((unsigned char)211)));
            /* LoopSeq 3 */
            for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_18 = 1; i_18 < 9; i_18 += 3) 
                {
                    for (unsigned short i_19 = 2; i_19 < 6; i_19 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) -549619694671101310LL);
                            arr_67 [i_3] [i_3 - 1] [i_11] = ((/* implicit */signed char) arr_24 [5LL] [6LL] [i_11] [i_11 - 3] [i_3]);
                        }
                    } 
                } 
                arr_68 [i_3] [i_11] [i_17] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 549619694671101282LL))) && (((/* implicit */_Bool) ((((long long int) var_0)) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)77))) + (-549619694671101283LL))))))));
            }
            /* vectorizable */
            for (unsigned char i_20 = 1; i_20 < 8; i_20 += 1) 
            {
                var_30 ^= ((/* implicit */long long int) (signed char)-1);
                var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_21 [i_11] [i_11] [1] [i_11]))) ? (2950440994U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_20] [i_3 - 1] [i_20] [i_3 - 1])))));
                arr_71 [i_11] [i_11 + 1] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)11891)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)206))))) : (arr_12 [i_3 - 1])));
            }
            /* vectorizable */
            for (unsigned int i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    for (long long int i_23 = 2; i_23 < 8; i_23 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) (-((~(9115333085802633982LL)))));
                            arr_82 [i_11] = ((/* implicit */short) arr_33 [i_3] [i_11] [i_22]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 2; i_24 < 8; i_24 += 3) 
                {
                    for (unsigned int i_25 = 1; i_25 < 6; i_25 += 1) 
                    {
                        {
                            var_33 *= ((/* implicit */long long int) (-(((/* implicit */int) (short)-1262))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_65 [i_24 + 1] [i_11] [i_21] [i_24 + 2] [i_25 + 2])) > (((/* implicit */int) arr_65 [i_24 + 2] [i_11] [(unsigned char)7] [i_24 - 2] [i_25 + 1]))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3]);
            }
        }
        /* LoopNest 2 */
        for (signed char i_26 = 1; i_26 < 8; i_26 += 2) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 10; i_27 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) ((short) 0));
                    var_37 = var_1;
                    /* LoopSeq 4 */
                    for (unsigned char i_28 = 2; i_28 < 6; i_28 += 3) 
                    {
                        arr_97 [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_32 [i_28 - 1] [i_27] [i_26] [i_26] [i_3] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((+(arr_59 [i_26])))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_28] [i_27] [i_26 + 2] [i_3] [i_3]))))) ? (((2211155470U) >> (((var_13) + (2930401083040562219LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)4), (((/* implicit */unsigned char) arr_96 [i_26])))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_26 + 1] [i_26 + 1] [i_26 + 2])) - (((/* implicit */int) arr_33 [i_26 + 2] [i_26 + 2] [i_26 - 1])))))));
                        var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65459)) ? (-54782642) : (((/* implicit */int) (unsigned char)80))))) ? (arr_16 [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3 - 1])))))))) / (((/* implicit */unsigned long long int) var_5))));
                        /* LoopSeq 2 */
                        for (long long int i_29 = 1; i_29 < 9; i_29 += 3) /* same iter space */
                        {
                            arr_100 [i_27] [(signed char)0] [i_27] [i_26] [(signed char)0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (min((arr_0 [i_29 + 1]), (arr_0 [i_29 - 1]))) : (arr_0 [i_29 - 1])));
                            arr_101 [i_26] = ((/* implicit */unsigned short) (short)-1276);
                            arr_102 [i_26] [i_27] [i_27] [i_28] = ((/* implicit */signed char) ((((/* implicit */int) min((var_3), (((/* implicit */short) arr_69 [i_3 - 1]))))) == (min((arr_92 [i_26] [i_28 + 2]), (arr_92 [i_26] [i_28 - 2])))));
                        }
                        /* vectorizable */
                        for (long long int i_30 = 1; i_30 < 9; i_30 += 3) /* same iter space */
                        {
                            var_39 = ((/* implicit */short) var_11);
                            arr_107 [i_26] [i_26] [i_27] [i_26] [i_28] [i_28] [i_30] = ((/* implicit */long long int) arr_34 [i_3] [i_26] [i_30]);
                        }
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_2), (arr_65 [i_3] [i_26] [i_26] [4LL] [i_31]))))))) ? (min((((9007199254740991LL) & (((/* implicit */long long int) ((/* implicit */int) arr_81 [3ULL] [i_26 + 1] [7] [i_26 + 1] [i_31]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_44 [i_3] [(signed char)9] [(signed char)9] [i_27])) : (((/* implicit */int) (unsigned char)214))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_26 + 2])) : (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_27])))))));
                        var_41 = ((((_Bool) (short)25827)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_76 [i_26] [i_26] [i_27] [i_31] [i_27])) : (((/* implicit */int) (unsigned short)38592)))) : (((/* implicit */int) (signed char)-1)));
                    }
                    for (int i_32 = 0; i_32 < 10; i_32 += 3) 
                    {
                        arr_114 [i_3] [i_26 + 2] [i_26] [i_26] [i_32] [i_26] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)50)) / (((/* implicit */int) (unsigned short)26943))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_33 = 1; i_33 < 9; i_33 += 2) 
                        {
                            var_42 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_112 [i_33 + 1] [(short)8] [(short)8] [i_26]))));
                            var_43 = ((/* implicit */short) ((arr_16 [i_33 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1843)))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_34 = 0; i_34 < 10; i_34 += 3) 
                    {
                        var_44 = ((/* implicit */long long int) ((arr_28 [i_26] [i_26] [i_3 - 1] [i_26 - 1]) ^ (((/* implicit */int) arr_43 [i_26 + 1] [i_26 - 1] [i_26] [(short)8]))));
                        var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1262)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) var_7)))))));
                        var_46 = ((/* implicit */long long int) var_5);
                        var_47 = ((/* implicit */short) (+(((((/* implicit */int) (unsigned short)26943)) / (((/* implicit */int) (signed char)-3))))));
                    }
                    var_48 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_13 [i_3 - 1] [i_26 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))), (min((((/* implicit */unsigned int) ((var_13) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))))), (((((/* implicit */_Bool) arr_13 [i_26] [i_3])) ? (arr_11 [i_26 + 2]) : (arr_49 [i_27] [i_27] [6ULL] [i_3] [i_3])))))));
                }
            } 
        } 
    }
}
