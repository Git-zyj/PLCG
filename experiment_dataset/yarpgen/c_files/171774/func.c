/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171774
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
    var_17 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_18 -= ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                        arr_10 [i_2] [i_2] = ((/* implicit */signed char) 2047U);
                        arr_11 [i_2] [i_2] = ((/* implicit */long long int) (((+(4294967276U))) / ((~(4294967276U)))));
                        arr_12 [i_2] [i_2] [i_1] [i_2] = arr_0 [i_1] [2LL];
                    }
                } 
            } 
            var_19 -= ((/* implicit */int) (-(((long long int) (unsigned short)39045))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(14U))))));
            arr_15 [i_4] [i_4] [7ULL] = ((/* implicit */_Bool) (unsigned short)65535);
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        }
        for (short i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            var_22 &= ((/* implicit */unsigned int) ((signed char) (unsigned short)65535));
            var_23 -= ((/* implicit */short) ((1054101741U) << (((((/* implicit */int) (short)-26354)) + (26369)))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_24 = (+(6U));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) arr_8 [i_6] [i_6] [i_6] [(signed char)3] [(short)4]);
            var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 - 1])) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0]))));
        }
        /* LoopNest 3 */
        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (short i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    {
                        arr_33 [i_9] [i_9 + 3] [i_10] [i_11] = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_0 - 1] [(unsigned char)8] [i_0] [(short)5] [i_9 + 2] [i_0 + 2])) - (((/* implicit */int) var_6))))) + ((~(4294967272U))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) 4294967276U)) : (((arr_30 [i_9] [10ULL] [i_10] [i_11 + 1]) % (((/* implicit */unsigned long long int) arr_9 [6U] [i_9] [i_10] [i_12] [i_12]))))));
                            arr_36 [i_12] [i_11 - 1] [i_9] [i_9] [(_Bool)1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)-48))))));
                            arr_37 [i_9] = ((/* implicit */_Bool) ((arr_16 [i_9 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))));
                        }
                        arr_38 [i_0 + 1] [i_9] [(signed char)1] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_11 - 1] [i_0 + 1]))));
                    }
                } 
            } 
        } 
        var_29 = ((((((/* implicit */_Bool) arr_9 [i_0] [0U] [i_0] [i_0] [(short)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(unsigned short)2] [(unsigned short)6] [(unsigned short)2]))) : (arr_31 [i_0] [i_0] [(signed char)6]))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [4U] [i_0 - 1]))));
        var_30 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_0 + 2]))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_42 [i_13] [i_13] = ((/* implicit */unsigned short) max((arr_40 [i_13]), ((!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) (_Bool)0)))))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 3; i_14 < 13; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        arr_51 [i_13] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)103)) && (((/* implicit */_Bool) 12320094660894292775ULL))));
                        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4683526620807315685ULL) > (((/* implicit */unsigned long long int) 38U)))))) ^ (((arr_49 [i_13] [i_14] [i_15] [i_15] [i_15] [i_16]) / (arr_49 [i_13] [i_13] [i_14] [i_15] [i_16] [i_16])))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_41 [i_13] [(signed char)14])))) || (((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-62)))))));
                        var_33 = ((/* implicit */_Bool) max((var_33), ((!((!(((/* implicit */_Bool) arr_41 [i_13] [i_14 - 1]))))))));
                        var_34 = ((/* implicit */unsigned long long int) 22U);
                        var_35 |= ((/* implicit */long long int) var_6);
                        var_36 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | ((~(20U)))));
                    }
                    arr_54 [(short)4] [i_14 + 2] [i_15] [(_Bool)1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((_Bool) arr_43 [(_Bool)1] [i_15])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 3; i_18 < 11; i_18 += 2) 
                    {
                        for (int i_19 = 1; i_19 < 13; i_19 += 4) 
                        {
                            {
                                arr_59 [i_14] [i_19] = max((min((0U), (((/* implicit */unsigned int) (signed char)116)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)44)), (14ULL)))) ? (((((/* implicit */int) (signed char)-48)) ^ (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                                var_37 = ((/* implicit */short) ((max((max((arr_45 [i_13] [i_15] [i_18 - 2] [i_19]), (((/* implicit */unsigned int) arr_46 [i_13])))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))))));
                                arr_60 [i_13] [i_19] [i_15] [i_19] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) ((unsigned short) (unsigned short)2))), ((~(((/* implicit */int) (unsigned char)53)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_20 = 1; i_20 < 13; i_20 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 3) 
                        {
                            var_38 -= ((/* implicit */int) arr_50 [i_15]);
                            arr_68 [1LL] [i_20] [i_20] [i_14] = ((/* implicit */short) min((519497769), (954567122)));
                        }
                        var_39 = var_8;
                        var_40 = ((/* implicit */unsigned char) arr_66 [4ULL] [i_14] [i_14 - 2] [(unsigned char)2] [i_14]);
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 2) 
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1613540852))));
                        arr_71 [i_22] [i_14 + 1] [i_15] [i_15] [i_14] = ((/* implicit */short) ((((((/* implicit */int) arr_64 [i_15] [i_14] [i_14 + 2] [i_15])) < (((/* implicit */int) var_6)))) ? (arr_52 [i_13] [i_14] [i_15] [i_22]) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9203)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((long long int) (signed char)96)))));
                            var_43 = ((/* implicit */short) (~(max((var_2), (((/* implicit */unsigned int) arr_70 [i_14 - 1] [i_14] [i_15] [i_22]))))));
                            var_44 = ((/* implicit */unsigned short) 13LL);
                            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3368343844954178632LL)) % (max((arr_49 [i_14 - 1] [(_Bool)1] [i_14 + 1] [i_14 - 1] [i_14] [i_14]), (var_5))))))));
                        }
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (((+(arr_47 [i_14 - 3]))) / (18446744073709551602ULL))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned char) ((((long long int) 18446744073709551602ULL)) <= (((/* implicit */long long int) ((/* implicit */int) ((short) min((829204922), (((/* implicit */int) (unsigned char)163)))))))));
                        arr_76 [(short)6] = ((/* implicit */signed char) arr_65 [i_13] [i_24] [(_Bool)1] [i_14] [(signed char)10] [i_15] [i_24]);
                        arr_77 [(signed char)11] [i_15] [i_15] [(unsigned short)9] [i_14 - 3] [i_13] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) 33U)) / (((197717590269957511LL) / (((/* implicit */long long int) -829204917))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 1) 
    {
        for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 2) 
        {
            for (int i_27 = 0; i_27 < 10; i_27 += 4) 
            {
                {
                    arr_89 [i_27] [8] [i_25] = ((/* implicit */int) max((((/* implicit */unsigned int) -1634646167)), ((~(4294967273U)))));
                    arr_90 [(short)3] [i_25] [i_27] = arr_83 [i_25] [i_26] [i_27];
                    /* LoopNest 2 */
                    for (unsigned long long int i_28 = 1; i_28 < 8; i_28 += 4) 
                    {
                        for (long long int i_29 = 0; i_29 < 10; i_29 += 4) 
                        {
                            {
                                arr_98 [i_25] [(unsigned char)8] [i_27] [i_27] [i_27] [i_28] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)56309), (arr_6 [i_27] [i_26] [i_27])))) ? (arr_30 [i_27] [i_26] [i_27] [i_28]) : (((/* implicit */unsigned long long int) (+(arr_79 [i_25]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_27] [i_29]))) : (arr_74 [i_25] [i_26] [i_27] [i_29])));
                                var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_66 [i_28 - 1] [i_28 + 2] [i_28] [i_28 + 1] [i_28 + 2])))) || ((!(((/* implicit */_Bool) arr_66 [i_28 + 1] [i_28 - 1] [i_28] [i_28 + 2] [i_28 + 1])))))))));
                                var_49 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_32 [i_26] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) max((arr_52 [i_25] [(short)10] [i_28] [i_29]), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (var_3)))), (var_4)))));
                            }
                        } 
                    } 
                    arr_99 [i_25] [4ULL] [i_26] [i_27] |= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_20 [i_25])) : (-3368343844954178602LL)))))))));
                    arr_100 [i_25] [7U] [i_27] = ((/* implicit */unsigned long long int) ((unsigned short) 2968019484U));
                }
            } 
        } 
    } 
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(var_10)))), (max((3368343844954178620LL), (((/* implicit */long long int) 4294967290U))))))) ? (((((4294967275U) > (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */long long int) var_0)))) + (((/* implicit */long long int) min((var_0), (var_10)))))))));
}
