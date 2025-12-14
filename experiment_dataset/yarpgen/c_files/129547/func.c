/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129547
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
    var_12 += ((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((((+(((/* implicit */int) var_11)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) -4LL)) ? (3898118984U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)5693)) != (((/* implicit */int) (short)127)))))) : (var_2))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((3810681691U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))));
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)98)) << (((((((/* implicit */int) (signed char)-48)) + (79))) - (19)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) var_11))))) : (var_7)));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_14 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (5720148651379809017ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((((/* implicit */int) var_6)) << (((var_0) - (1827350683U)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_18 &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_7)));
                            var_19 = ((/* implicit */signed char) (+(var_7)));
                        }
                        for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_6)))) < (((/* implicit */int) (signed char)29))));
                            var_20 = ((/* implicit */int) var_0);
                            arr_23 [i_0] [3U] [i_0] [(signed char)13] [i_1] = ((/* implicit */int) var_9);
                        }
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (var_0)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    {
                        arr_33 [(short)12] [i_8] [i_7] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)));
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 19; i_10 += 4) 
                        {
                            arr_36 [i_0] [(signed char)1] [(_Bool)1] [9U] [i_10] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)12561)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-5))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */int) var_6)) << (((var_10) - (205024251073571582LL)))));
                        }
                    }
                } 
            } 
            arr_37 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (var_5)));
            arr_38 [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) / ((+(var_4)))));
        }
        for (short i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_45 [(short)6] [(short)6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) < (262016U)));
                arr_46 [i_12] [i_11] [14U] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
            }
            for (signed char i_13 = 1; i_13 < 20; i_13 += 2) 
            {
                arr_50 [i_13] [i_11] [3ULL] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) + (2147483647))) << ((((((-(((/* implicit */int) var_8)))) + (31302))) - (21)))));
                arr_51 [i_0] [i_0] [i_11] [i_0] = ((/* implicit */long long int) ((var_0) >> (((((/* implicit */int) var_8)) - (31260)))));
                arr_52 [i_0] [i_11] = ((/* implicit */signed char) ((var_2) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_0))))));
            }
            var_23 = ((/* implicit */short) var_6);
        }
        var_24 = ((/* implicit */unsigned int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned int i_16 = 1; i_16 < 20; i_16 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_17 = 1; i_17 < 22; i_17 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) (~(4294705300U)))) ? (((2430871020U) >> (((((/* implicit */int) (short)6430)) - (6421))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)127))) / (719889184U)));
                        arr_64 [i_14] [i_15] [i_16 + 2] [i_15] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_3))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_68 [i_15] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((var_10) >> (((/* implicit */int) ((((/* implicit */int) var_3)) < (var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        arr_69 [i_18] [i_15] [i_16] [i_15] [i_15] [i_14] = var_9;
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_4)) < (var_0)))) : (((((/* implicit */int) var_11)) >> (((/* implicit */int) var_3))))))) ? (max((((/* implicit */long long int) var_3)), (max((var_10), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7)) ? (-207685227) : (-1647967849))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        for (unsigned int i_20 = 1; i_20 < 22; i_20 += 3) 
                        {
                            {
                                arr_77 [i_15] [12] [i_19] [i_14] [i_15] [i_15] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (var_4) : (var_4)))));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-104)))) + (((/* implicit */int) var_3)))))));
                                arr_78 [i_14] [i_14] [i_14] [i_14] [i_14] [i_15] = var_4;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_79 [i_14] = ((/* implicit */signed char) (-((~(((/* implicit */int) ((8019731701263714512ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6993))))))))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
    {
        arr_83 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) var_1))))));
        /* LoopSeq 3 */
        for (signed char i_22 = 0; i_22 < 24; i_22 += 4) 
        {
            var_29 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (short)-6984)), (5416273749182243718LL)))));
            arr_86 [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_11))))));
        }
        for (unsigned int i_23 = 3; i_23 < 23; i_23 += 2) /* same iter space */
        {
            arr_90 [i_23] [i_23] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-6454)) : (((/* implicit */int) (_Bool)0))))) / ((+(var_7))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) && (((/* implicit */_Bool) var_11))))))));
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) / (max((var_4), (((/* implicit */int) var_3))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_8)))))));
        }
        for (unsigned int i_24 = 3; i_24 < 23; i_24 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) > (((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_8)) - (31261))))))))) & (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-98)))))))));
            var_32 = ((/* implicit */int) var_8);
        }
        /* LoopNest 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (long long int i_26 = 0; i_26 < 24; i_26 += 2) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) var_5);
                        var_34 -= ((/* implicit */unsigned long long int) var_0);
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_10))))) < (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) var_10))))));
                    }
                } 
            } 
        } 
        var_36 -= ((/* implicit */int) ((((/* implicit */long long int) var_0)) < (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    }
    for (unsigned int i_28 = 0; i_28 < 22; i_28 += 3) 
    {
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_3)), (var_5))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_9)) ? (((var_5) >> (((((/* implicit */int) var_8)) - (31281))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        var_38 = ((/* implicit */_Bool) var_2);
        /* LoopSeq 1 */
        for (unsigned char i_29 = 0; i_29 < 22; i_29 += 1) 
        {
            arr_105 [i_29] [i_29] [i_28] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (var_0)))) << (((((/* implicit */int) (signed char)-98)) + (117)))));
            /* LoopSeq 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                var_39 = ((/* implicit */unsigned int) max((((10427012372445837103ULL) >> (((/* implicit */int) (unsigned char)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_1)))))));
                var_40 = ((/* implicit */unsigned int) min((var_40), (max((((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-101), ((signed char)-41))))) / (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_8))))))))))));
            }
            for (unsigned int i_31 = 3; i_31 < 20; i_31 += 2) 
            {
                var_41 *= ((/* implicit */unsigned int) var_2);
                var_42 &= ((/* implicit */short) var_1);
            }
        }
    }
}
