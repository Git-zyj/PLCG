/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117100
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
    var_12 = var_3;
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_9))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) ((-1092152122) == (((/* implicit */int) (signed char)0))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_10 [i_2] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) 67108863ULL)))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [i_2] [i_2]))));
                    var_14 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [(unsigned short)2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1] [(unsigned short)6])))))) : (((((/* implicit */_Bool) (short)7703)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11024438543797148155ULL)))));
                    arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [8U] [i_0] [i_1] [i_2])))))) | (((int) arr_7 [i_0 - 1] [i_0] [(short)5] [i_2]))));
                    arr_12 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)-86);
                }
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    arr_15 [(signed char)9] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)22))));
                    arr_16 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_2]);
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_20 [i_0 - 3] [i_2] [i_2] [i_5] [i_0 - 1] [i_0 - 3] = ((/* implicit */short) ((unsigned int) arr_4 [i_0 - 2] [i_5] [3U]));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_5] [i_6 + 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0 - 3])) ? (arr_22 [i_5] [i_5] [i_6 - 2] [i_5] [i_6]) : (((/* implicit */unsigned long long int) 9223372036854775789LL))));
                        var_15 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_2)))));
                        arr_24 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_2] [i_2 - 2])) ? (-3987464732374200379LL) : (((/* implicit */long long int) arr_9 [i_0 - 2] [i_2] [i_2 + 1]))));
                        var_16 -= ((/* implicit */long long int) arr_19 [i_1] [i_2] [i_6 + 1]);
                    }
                    var_17 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */long long int) 1579172365U)) : (3987464732374200379LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 - 2])))));
                }
                var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14577)) * (((/* implicit */int) (unsigned short)0))))) ? (min((arr_5 [i_0]), (((/* implicit */int) (short)-14736)))) : ((-(((/* implicit */int) var_7))))))) / ((((!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))) : (-3987464732374200379LL)))));
                var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_18 [i_0 - 1] [i_2]))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) ^ (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1] [(unsigned char)7])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))))))));
            }
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_29 [i_8] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_7] [i_8]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] [i_1] [i_8] [i_8] = ((/* implicit */long long int) (unsigned char)148);
                            var_21 ^= ((/* implicit */long long int) (!(((((/* implicit */int) arr_26 [i_0 - 1] [i_1] [i_0 - 2])) > (((/* implicit */int) arr_26 [i_0] [i_1] [i_7]))))));
                            arr_33 [i_0] [i_0] [i_7] [i_8] [(signed char)8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9] [i_9 + 3] [i_9 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) + (((/* implicit */int) arr_19 [i_9] [i_9 + 2] [i_9 + 1]))))) : (min((((/* implicit */long long int) arr_19 [i_9] [i_9 - 1] [i_9 + 2])), (3987464732374200379LL)))));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 3) /* same iter space */
                        {
                            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_10 + 3])) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_19 [i_0 - 3] [i_0 - 3] [i_10 + 2])) ? (((/* implicit */int) arr_19 [i_0] [i_0 - 3] [i_10 - 2])) : (((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_10 - 1])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_4 [i_0] [i_0 - 3] [i_10 - 1]))))));
                            var_23 += ((/* implicit */int) (!((!(((/* implicit */_Bool) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20933))))))))));
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1018489258313570157LL))))), (min((var_4), (arr_1 [i_7]))))))));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) 1337553462520206598LL);
                            var_26 = ((((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_8]))) <= (((((arr_17 [i_11] [i_1] [i_7] [i_1]) + (9223372036854775807LL))) >> (((var_1) - (1143201436977527513LL))))))) ? (((/* implicit */int) (short)23448)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))));
                            arr_39 [i_0] [i_1] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_8] [i_11 + 3])) ? (((unsigned long long int) arr_25 [i_11])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0 - 2] [i_11 + 2] [8LL] [i_0 - 2] [i_11] [i_7] [i_11]))))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            arr_43 [i_0] [i_8] [i_0] [i_8] [i_7] = ((/* implicit */long long int) var_9);
                            var_27 -= (!(((((/* implicit */_Bool) 2132552430U)) || (((/* implicit */_Bool) (unsigned short)3378)))));
                            arr_44 [i_0] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */short) arr_19 [i_0] [i_1] [i_7]);
                        }
                        arr_45 [i_0] [i_0] [i_1] [i_7] [10U] [i_8] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) 2132552446U))));
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            var_28 = ((/* implicit */unsigned short) 9223372036854775807LL);
            var_29 = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 2])))), ((_Bool)1)));
            var_30 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
        }
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)127)))))));
        arr_49 [i_0] = ((/* implicit */short) var_9);
    }
    for (unsigned int i_14 = 3; i_14 < 10; i_14 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) var_9);
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_14])), (var_11))))))))))));
        var_34 = ((/* implicit */signed char) arr_22 [i_14] [(short)3] [i_14] [i_14 - 1] [i_14]);
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((arr_38 [i_14 + 1]) > ((-(((/* implicit */int) var_5)))))))));
    }
    for (unsigned int i_15 = 3; i_15 < 10; i_15 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            arr_58 [i_15] [i_15] [i_16] = ((/* implicit */unsigned short) (((-(360145015))) <= (((/* implicit */int) (unsigned short)23703))));
            /* LoopNest 2 */
            for (long long int i_17 = 1; i_17 < 10; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    {
                        arr_64 [i_15] [i_16] [i_16] [i_18] &= ((/* implicit */signed char) var_7);
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) (((-(min((((/* implicit */unsigned long long int) arr_56 [i_15])), (0ULL))))) <= (((/* implicit */unsigned long long int) (-(-1896112522))))));
                            var_38 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) : (-1LL)))) ? ((-(((/* implicit */int) arr_55 [i_15 - 3] [i_18])))) : (((/* implicit */int) arr_55 [i_15 + 1] [i_16]))));
                            arr_68 [i_15 + 1] [i_16] [i_18] = ((/* implicit */short) max((min((((/* implicit */long long int) arr_28 [i_17] [i_17] [i_17 + 1] [i_16])), (((((/* implicit */_Bool) arr_1 [(short)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-9223372036854775789LL))))), (((/* implicit */long long int) arr_56 [i_16]))));
                        }
                    }
                } 
            } 
            var_39 -= ((/* implicit */short) (+(((var_9) ? (arr_65 [i_15 - 3] [i_15 - 2] [i_15 - 2] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_15 + 1] [i_16] [i_15 + 1])))))));
        }
        for (long long int i_20 = 0; i_20 < 11; i_20 += 3) 
        {
            var_40 += ((/* implicit */signed char) max((((/* implicit */long long int) arr_14 [2U] [2U] [i_20] [i_20])), (((((/* implicit */long long int) ((/* implicit */int) arr_57 [i_15]))) / (arr_48 [i_15 - 1])))));
            arr_71 [i_15] = ((/* implicit */unsigned char) max((2029375161316967859LL), (((/* implicit */long long int) (short)16714))));
            arr_72 [i_15] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)37106))));
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                for (long long int i_22 = 1; i_22 < 8; i_22 += 2) 
                {
                    {
                        arr_78 [i_15] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)1)))) ^ (max((((/* implicit */int) var_10)), (arr_54 [i_22 + 2] [i_15 - 3])))));
                        arr_79 [i_15] [i_15] [i_15] [i_15] [i_15] [i_21] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_52 [i_15] [i_15 - 2]))))) | (arr_76 [i_22 - 1] [i_20] [i_15] [i_22] [i_15 - 1])));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (short i_23 = 2; i_23 < 10; i_23 += 4) 
    {
        for (short i_24 = 2; i_24 < 10; i_24 += 3) 
        {
            {
                var_41 = ((/* implicit */short) (!(((((/* implicit */int) (unsigned char)245)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (18446744073709551615ULL))))))));
                arr_84 [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14729))));
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 11; i_25 += 1) 
                {
                    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */short) ((((0LL) << (((6885742281250932288ULL) - (6885742281250932281ULL))))) * (((/* implicit */long long int) ((/* implicit */int) (short)-10425)))));
                            arr_89 [i_26] [i_25] [i_24] [i_23] [i_23] [i_23] = ((/* implicit */int) arr_31 [i_23] [i_24] [i_25] [i_26] [i_23] [i_24]);
                            arr_90 [i_25] [i_25] [i_25] [i_25] [i_26] = ((((/* implicit */_Bool) (unsigned short)55743)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -2716323139974232628LL))))));
                        }
                    } 
                } 
                arr_91 [i_23 - 2] [i_23 - 2] [i_23] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)14729))));
            }
        } 
    } 
}
