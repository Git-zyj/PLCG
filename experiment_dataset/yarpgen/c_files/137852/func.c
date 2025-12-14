/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137852
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
    var_17 = ((/* implicit */_Bool) max((var_17), (var_13)));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-7080)) ? (((/* implicit */int) var_6)) : (469762048))), (min((((/* implicit */int) (unsigned char)210)), (-469762049)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_9);
        var_19 = ((/* implicit */short) ((unsigned short) arr_1 [i_0]));
        var_20 *= (!((!(arr_1 [(_Bool)1]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_21 *= ((/* implicit */unsigned char) -469762048);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)12288))));
            arr_7 [i_1] [i_2] = ((/* implicit */long long int) (short)12288);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)114))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) 9007199254740960LL))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */short) arr_15 [i_1 - 1] [i_1] [i_1 - 1] [i_2 + 1] [(_Bool)0] [i_4] [i_1]);
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) -469762049)) ? (14464012632935831759ULL) : (14464012632935831759ULL))))));
                        }
                    }
                } 
            } 
            var_27 += ((/* implicit */_Bool) arr_16 [i_2] [14ULL] [9LL]);
        }
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_28 = -469762049;
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_11 [(unsigned short)9] [i_8 + 3] [i_1 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 2; i_9 < 10; i_9 += 3) 
    {
        var_30 = ((/* implicit */long long int) max((arr_24 [i_9 + 3] [i_9 - 2] [i_9 + 3] [i_9]), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 14464012632935831759ULL))))))));
        var_31 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) max((var_15), ((_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((9007199254740965LL), (((/* implicit */long long int) (_Bool)0))))))))));
        var_32 = ((/* implicit */_Bool) max((((/* implicit */short) max((((/* implicit */unsigned char) arr_5 [i_9 + 3] [i_9 - 2])), ((unsigned char)114)))), (arr_16 [i_9 - 2] [i_9] [i_9])));
        var_33 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_15)) >> (((4975084749703012138LL) - (4975084749703012120LL))))) & (-566721927)))));
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 13; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((((arr_22 [i_9 + 1] [(unsigned char)19] [(unsigned short)0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((short)-32201), (((/* implicit */short) arr_5 [(short)18] [22ULL]))))))), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9 + 1] [i_10 - 2] [i_11]))) < (arr_29 [i_10 - 3] [i_10 - 3] [i_9])))) ^ (((/* implicit */int) (unsigned char)114))))));
                    var_35 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [(unsigned char)10] [(unsigned short)17] [i_10 - 2])) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) arr_16 [i_11] [i_11] [i_11]))))) ? (566721926) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned char) arr_32 [i_12] [i_12])))));
        /* LoopSeq 4 */
        for (short i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
        {
            var_37 = ((((((/* implicit */_Bool) -566721927)) || (((/* implicit */_Bool) arr_26 [i_12] [i_12])))) ? (4975084749703012154LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
            var_38 = ((/* implicit */unsigned int) var_14);
            var_39 = ((/* implicit */long long int) max((var_39), (((((/* implicit */_Bool) var_16)) ? (arr_21 [i_13] [i_12] [i_13] [i_12]) : (arr_29 [i_12] [i_13] [i_13])))));
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13] [i_12]))) & (9223372036854775807LL))))));
        }
        for (short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            arr_46 [i_12] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_14]));
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) var_0))));
            var_42 &= ((/* implicit */unsigned char) 469762048);
        }
        for (short i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_15])) << (((9223372036854775807LL) - (9223372036854775805LL)))))) - (18446744004990074880ULL)));
            arr_49 [(short)7] &= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_44 [i_12] [(unsigned short)0]))) ^ (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-32201))))));
        }
        for (short i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) arr_40 [i_12] [0LL] [i_16]))));
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        {
                            var_45 ^= ((/* implicit */unsigned long long int) ((arr_57 [i_12] [i_16] [i_17] [i_16] [i_19] [i_19]) ? (((var_13) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) arr_54 [i_12] [i_16] [i_16] [i_18] [i_16] [(_Bool)1])))) : (((/* implicit */int) arr_52 [i_12] [i_16] [i_12] [i_18]))));
                            var_46 = ((/* implicit */unsigned long long int) (~(arr_47 [i_12] [i_16] [i_16])));
                            arr_60 [i_18] [i_16] [i_17] [i_18] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_12] [i_16] [i_17]))));
                            var_47 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) + (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((unsigned long long int) arr_18 [i_12] [i_12])))));
        var_49 = ((/* implicit */long long int) ((unsigned short) arr_50 [i_12] [i_12]));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (int i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                {
                    var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)50294))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_20] [i_21]))) < (7928029760202679818LL)))) : (((/* implicit */int) arr_40 [i_12] [(unsigned short)1] [i_21]))));
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 2) 
                        {
                            {
                                var_51 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_12] [15ULL] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4228874142U))));
                                var_52 = ((/* implicit */_Bool) max((var_52), (((arr_68 [8ULL] [i_20] [i_23 - 1] [i_23 + 1] [i_23 + 1]) && (arr_68 [4LL] [i_23 + 1] [i_23 - 1] [i_23 - 1] [(unsigned short)2])))));
                                var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((arr_65 [i_12] [i_20] [i_12] [i_12] [i_21] [i_23 + 1]) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4749298518232146898ULL))) - (1ULL))))))));
                                arr_70 [i_23] [i_22] [i_21] [i_20] [i_23] = ((/* implicit */_Bool) arr_13 [i_20] [0LL] [i_23] [i_23 + 1] [i_23]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_24 = 1; i_24 < 6; i_24 += 3) 
                    {
                        for (unsigned short i_25 = 1; i_25 < 9; i_25 += 3) 
                        {
                            {
                                var_54 = ((/* implicit */unsigned char) arr_42 [i_12]);
                                var_55 = ((/* implicit */unsigned char) 24U);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
    {
        for (long long int i_27 = 4; i_27 < 17; i_27 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_28 = 1; i_28 < 18; i_28 += 4) 
                {
                    var_56 ^= ((/* implicit */short) 9007199254740936LL);
                    var_57 = ((/* implicit */int) ((_Bool) (unsigned char)255));
                }
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_58 = ((/* implicit */short) var_1);
                    arr_88 [i_27] [i_29] [(_Bool)1] [i_26] = ((/* implicit */unsigned long long int) (short)-1);
                    arr_89 [i_26] = ((/* implicit */unsigned int) arr_9 [i_26] [i_26] [i_29] [i_29]);
                }
                var_59 = ((/* implicit */unsigned long long int) min((max((arr_15 [i_27 - 4] [(unsigned char)0] [i_26] [i_27] [i_26 - 1] [i_27] [i_26]), (arr_15 [i_27 - 2] [(unsigned short)6] [i_26 - 1] [i_27 + 1] [i_26 - 1] [22U] [i_26]))), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_6 [i_27 + 1] [i_27 - 2] [i_26 - 1])))))));
            }
        } 
    } 
    var_60 &= ((/* implicit */long long int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (unsigned char)104))));
}
