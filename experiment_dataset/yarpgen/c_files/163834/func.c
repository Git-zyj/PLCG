/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163834
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [12])))))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((10096679250200716300ULL), (((/* implicit */unsigned long long int) (signed char)-126))))) ? ((~(arr_3 [i_0]))) : (min((arr_3 [i_1]), (((/* implicit */int) (unsigned short)52950)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((signed char) min((((((/* implicit */_Bool) 1567997541)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52953))) : (9079256848778919936ULL))), (18446744073709551615ULL))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_11)), (arr_2 [i_2] [i_2])));
                        arr_18 [i_2] = ((/* implicit */short) arr_0 [i_2] [i_2 - 1]);
                        arr_19 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_5])) ? (arr_12 [i_5 - 1] [(unsigned char)0] [(unsigned char)0] [i_2 - 2]) : (arr_3 [i_2]))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */int) arr_17 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]);
        }
    }
    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */int) arr_23 [i_6 + 2] [i_6])) > (((/* implicit */int) arr_20 [i_6])))) || (((/* implicit */_Bool) (unsigned char)1)))))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_6 + 4] [i_7 - 1])))))));
            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_22 [i_6 - 1] [i_7 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 - 1]))) : (((((/* implicit */_Bool) arr_22 [i_6 + 3] [i_6 + 3])) ? (((/* implicit */unsigned long long int) 0)) : (12029854706387780189ULL)))));
            var_26 = ((/* implicit */unsigned char) arr_21 [i_6 + 4]);
        }
        arr_24 [i_6] = (~(((((/* implicit */_Bool) arr_22 [i_6 - 2] [i_6 + 1])) ? (((/* implicit */int) arr_20 [i_6 + 2])) : (((/* implicit */int) var_4)))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) var_14);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_22 [i_9] [i_8]))))))));
                        var_29 &= ((/* implicit */signed char) 1302119483);
                    }
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_6] [i_6 + 1])))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        var_31 = ((/* implicit */signed char) (((~(((/* implicit */int) var_10)))) > (((((/* implicit */int) ((arr_28 [i_11] [(unsigned char)11] [2ULL]) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)255))))))));
        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_5), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_11] [i_11]))) == (arr_17 [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]))))))), ((~(arr_33 [i_11])))));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            var_33 *= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)26032)) >= (((/* implicit */int) (short)-28409))))))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (arr_35 [i_11])));
        }
    }
    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        var_35 = ((/* implicit */_Bool) max((arr_41 [i_13]), (var_17)));
        var_36 = ((/* implicit */int) max((var_36), (((var_1) ? (((((/* implicit */_Bool) arr_41 [i_13])) ? (arr_41 [i_13]) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_41 [i_13])))))))))));
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */int) ((14833635036121216224ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_42 [i_13] [i_14])))))))) >> ((((-(((/* implicit */int) (signed char)42)))) + (48))))))));
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_38 |= ((/* implicit */int) var_3);
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    var_39 = ((/* implicit */long long int) var_0);
                    var_40 = ((/* implicit */signed char) var_17);
                    arr_49 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [18ULL] [18ULL] [18ULL] [i_16])) ? (min((((/* implicit */long long int) arr_46 [i_13] [i_14] [i_14] [i_14])), (var_14))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_45 [i_13] [i_14] [i_13]))))), ((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    for (unsigned char i_18 = 2; i_18 < 21; i_18 += 1) 
                    {
                        {
                            arr_55 [i_13] &= ((/* implicit */unsigned short) (-(2129947290)));
                            arr_56 [i_13] [i_14] [i_14] [i_14] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(20ULL)))) ? (((/* implicit */int) arr_48 [i_18 + 1] [i_18 + 2] [i_18 + 2] [i_18 + 1] [i_18 + 2])) : ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned char) arr_45 [i_13] [i_14] [i_15])))));
                        }
                    } 
                } 
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_13] [i_19])) / (var_9)))) ? (min((arr_39 [i_13]), (arr_46 [i_13] [i_13] [i_13] [i_13]))) : (((/* implicit */int) arr_60 [i_19] [i_14] [i_14] [i_13]))))) ? (min((arr_41 [i_13]), (((/* implicit */int) (unsigned char)47)))) : ((-(((/* implicit */int) (short)0))))));
                var_42 = ((/* implicit */short) ((((((/* implicit */int) arr_43 [i_13] [i_14])) * (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_17))))))) / (arr_39 [i_13])));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)63))))) ? (min((((((/* implicit */_Bool) (unsigned short)19237)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_13] [i_14] [i_14]))) : (arr_50 [i_13]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_13] [i_13])) ? (((/* implicit */int) (short)-15175)) : (((/* implicit */int) var_16))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_54 [13U] [i_14])), (((((/* implicit */_Bool) arr_57 [i_13] [i_13] [3] [3])) ? (((/* implicit */int) var_11)) : (2142497159)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_53 [i_13] [i_14] [i_14] [i_14] [i_20] [i_20])) * (((/* implicit */int) (signed char)-68)))))) : (min((((((/* implicit */_Bool) (short)14820)) ? (((/* implicit */int) arr_60 [i_13] [i_13] [i_14] [i_13])) : (((/* implicit */int) (unsigned short)19237)))), (((/* implicit */int) var_16))))));
            }
        }
        var_45 = ((/* implicit */unsigned short) var_7);
    }
}
