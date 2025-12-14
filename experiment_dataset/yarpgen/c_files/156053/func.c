/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156053
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
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1 - 1] [21]))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) > (var_6)))) / ((+(((/* implicit */int) var_4))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [20ULL] [i_0] [i_0] [i_0 + 2]))));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            arr_14 [i_3] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((135582219) * (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_12 [i_0] [i_4 + 1] [i_2] [i_3] [i_4] [i_1] [i_3]) : (((/* implicit */unsigned long long int) 2484557470U))));
                            var_21 ^= ((/* implicit */unsigned short) var_1);
                            arr_15 [i_0] [i_3] [i_1 + 3] [i_1 + 3] [i_3] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) var_7);
                        }
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 1])))))));
                            arr_18 [i_0] [i_3] [i_2] [i_3] [i_5] = ((((/* implicit */_Bool) 2346248303U)) ? (-577564732) : (-42883393));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 3])) ? (2479607158U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (signed char i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_30 [(_Bool)1] [(_Bool)1] [i_7] [i_8] [i_9] [(_Bool)1] = ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 - 3] [i_0 + 2])) ? (arr_12 [i_8] [i_8] [i_8] [i_8] [i_7] [i_6] [i_8]) : (((/* implicit */unsigned long long int) (-(2479607157U)))));
                            var_24 &= ((/* implicit */int) var_15);
                        }
                    } 
                } 
                arr_31 [i_0] [i_6] [i_7] = ((/* implicit */unsigned int) var_8);
            }
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                {
                    arr_36 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
                    arr_37 [i_10] [i_6] [i_0 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(9918363807905419133ULL))))));
                    var_25 = ((/* implicit */unsigned long long int) (unsigned short)56285);
                }
                for (short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [10] [i_10] [i_12] [1] = ((/* implicit */unsigned int) ((arr_16 [i_6] [i_6] [i_0 - 1] [i_6] [i_0 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 2])))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_6] [i_10] [i_12] [i_10])) ? (5417828558349700290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        var_27 = ((/* implicit */unsigned short) ((int) ((long long int) (short)4549)));
                    }
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0 + 3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)224))))) : (var_15)));
                        arr_47 [i_14] [i_6] [i_6] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_20 [i_6] [i_10]))))));
                        var_28 = ((/* implicit */int) (~(((var_16) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64577)))))));
                    }
                    arr_48 [i_0 - 1] [1ULL] [1ULL] [1ULL] [i_12] [i_12] = ((/* implicit */signed char) 16274713922359738442ULL);
                    var_29 += ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    var_30 = ((/* implicit */unsigned char) (~(var_15)));
                }
                for (short i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_6)));
                    arr_51 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_16 [i_10] [i_0 - 1] [i_10] [i_10] [i_10]) : (arr_16 [(_Bool)0] [i_0 + 1] [i_10] [i_15] [i_0])));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_0 + 3])) << (((var_11) - (15174658401663776896ULL)))));
                }
                var_33 = ((/* implicit */unsigned int) ((short) arr_23 [i_0] [i_0 - 4] [i_0] [(signed char)14]));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
            {
                for (long long int i_17 = 3; i_17 < 21; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            var_34 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_39 [i_18] [i_17 - 3] [i_16 + 1] [i_6] [i_0]) / (((/* implicit */int) (signed char)33))))), (var_5)));
                            arr_60 [i_16] = ((/* implicit */short) max((var_11), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (signed char)-29)), (var_16))), (((/* implicit */long long int) (-(((/* implicit */int) (short)231))))))))));
                            var_35 = ((/* implicit */short) arr_52 [i_18] [i_16] [i_16] [i_0 + 3]);
                        }
                    } 
                } 
            } 
            var_36 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))))), (((var_9) ^ (arr_27 [i_0] [22U] [i_0] [i_0 + 3] [i_0]))))))));
        }
        var_37 |= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))));
        arr_61 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0 - 3] [i_0])) ? ((~(16274713922359738456ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
    {
        for (unsigned char i_20 = 1; i_20 < 9; i_20 += 1) 
        {
            {
                var_38 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_20] [4U] [i_19] [i_19]))) | (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -6073895161139232084LL)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32360))) ^ (var_15)))))));
                arr_67 [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned short) var_8)), ((unsigned short)32362)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_21 = 0; i_21 < 14; i_21 += 4) 
    {
        for (unsigned int i_22 = 1; i_22 < 13; i_22 += 1) 
        {
            for (unsigned short i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                {
                    var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((int) -8351057109221699286LL))))));
                    var_40 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((arr_77 [11ULL] [i_23] [i_22] [i_21]) > (((/* implicit */int) arr_74 [i_23])))))))));
                }
            } 
        } 
    } 
}
