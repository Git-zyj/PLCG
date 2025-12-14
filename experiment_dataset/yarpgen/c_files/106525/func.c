/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106525
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
    var_17 = ((/* implicit */short) ((((unsigned long long int) var_6)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0]))) && (((/* implicit */_Bool) (short)31621))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3])) ? (var_7) : (arr_7 [i_0] [3ULL] [i_2] [i_3])));
                            arr_14 [i_1] = ((((unsigned long long int) (_Bool)1)) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0]))))));
                        }
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] = var_9;
                            arr_19 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((arr_5 [i_5]) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((_Bool)1))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31599)))));
                        }
                    }
                } 
            } 
            arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) (-(arr_3 [i_0])));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 4) 
                {
                    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_1] [i_6] [8ULL] [i_7] [7ULL] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-31621))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(_Bool)1] [i_1] [i_1] [i_6] [i_6 + 3] [i_7] [i_8]))) : (8189882297536913132ULL))) : (((/* implicit */unsigned long long int) (~(arr_7 [i_7] [i_7] [i_7] [i_7 - 2]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (arr_4 [i_0] [i_0])));
                            arr_37 [i_0] [i_1] [i_9] [i_1] [i_10] [i_11] = (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31621))) : (arr_6 [i_0]))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [i_1] &= ((/* implicit */_Bool) var_16);
                            arr_42 [i_0] [i_1] [i_9] [i_10] [i_12] [i_1] = ((/* implicit */unsigned long long int) (+(1271983900U)));
                            arr_43 [i_0] [i_0] [i_9] [i_1] [i_12] = ((/* implicit */_Bool) (~((-(var_14)))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_0] [i_9])) ? (arr_7 [i_0] [i_1] [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))))))));
                        var_24 *= ((_Bool) (_Bool)1);
                        var_25 *= ((/* implicit */_Bool) 18446744073709551615ULL);
                        var_26 = ((/* implicit */unsigned long long int) ((arr_12 [i_1] [5ULL] [i_9] [i_9]) == (arr_12 [i_1] [i_1] [i_9] [i_10])));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_51 [i_15] [i_13] [i_13] [i_13] [i_15] [i_13] = ((/* implicit */_Bool) 4U);
                        var_27 = max((((/* implicit */unsigned long long int) ((short) ((arr_50 [i_13]) ^ (((/* implicit */unsigned long long int) 4294967285U)))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0]))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 3; i_17 < 11; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 2) 
                    {
                        {
                            arr_63 [i_17] [(short)9] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)31618)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))));
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            var_29 = ((/* implicit */_Bool) 117622876760376618ULL);
                            var_30 = ((/* implicit */short) arr_35 [i_0] [i_16] [4ULL] [i_18] [i_19]);
                            arr_64 [i_19] [i_17] [i_18] [i_17] [i_17] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_30 [i_0] [i_17] [i_19])) ? (((/* implicit */unsigned long long int) arr_22 [i_17] [i_16] [i_17])) : (arr_11 [i_16]))));
                        }
                    } 
                } 
            } 
            var_31 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)112)) ? (((((/* implicit */_Bool) arr_13 [i_0] [(short)0] [i_0] [i_0] [1U] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551600ULL))) : (((((/* implicit */_Bool) var_7)) ? (arr_15 [i_16] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        }
        arr_65 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) (_Bool)1))), (((arr_25 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((max((arr_24 [i_0] [i_0]), (18446744073709551615ULL))) >> ((((-(((/* implicit */int) var_4)))) - (11707))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
    }
}
