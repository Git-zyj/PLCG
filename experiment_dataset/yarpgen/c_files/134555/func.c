/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134555
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) 18446744073709551609ULL);
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((0) != (((/* implicit */int) arr_7 [i_0] [i_1 - 4] [i_1 - 4]))))), ((+(arr_5 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_1] [i_1])) - (arr_5 [i_1 - 1] [i_1 - 4] [i_1 + 1] [i_1]))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)146)) << (((4294967291U) - (4294967274U))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_15 = (_Bool)0;
                    arr_18 [(short)12] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46))))) << (((((/* implicit */int) (short)11109)) - (11094)))))) ^ (max((4294967291U), (((/* implicit */unsigned int) (signed char)115))))));
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned char) arr_14 [(short)12]);
    }
    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_16 = ((/* implicit */_Bool) arr_21 [i_6]);
        arr_22 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((15671201715911835LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6])) && (((/* implicit */_Bool) (signed char)27)))))))))));
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_17 = ((/* implicit */int) max((var_17), ((~(((((/* implicit */int) arr_12 [i_7] [2U])) << (((((((/* implicit */int) arr_9 [(unsigned short)4] [i_7] [(short)16] [i_8])) ^ (((/* implicit */int) (unsigned char)67)))) - (61)))))))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)28139)))) | (((/* implicit */int) arr_9 [i_7] [i_7] [i_9] [i_10]))))) ? (((((/* implicit */int) arr_9 [i_7] [i_10 - 1] [i_10 - 1] [i_10 + 1])) | (((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_8]))) ^ (0ULL)))))))));
                        var_19 = ((/* implicit */short) arr_4 [i_8] [i_10] [i_10 + 1] [(unsigned char)3]);
                        arr_31 [i_7] [i_7] = ((/* implicit */unsigned char) 4294967291U);
                        arr_32 [i_7] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */short) (~(((((-5741068438569223241LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)9784))))) | ((~(arr_13 [i_8] [i_8])))))));
                        arr_33 [i_10] [i_10] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_10 + 1])) ^ (((/* implicit */int) (unsigned char)38)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_8] [i_10 + 1] [i_10 + 1] [i_10 + 1])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                for (signed char i_13 = 2; i_13 < 10; i_13 += 1) 
                {
                    {
                        arr_43 [i_13 + 1] [i_7] [i_12] [i_13] = ((/* implicit */unsigned long long int) (+(2147483638)));
                        var_20 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)12754))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)23063))))) % (arr_8 [i_13 - 2] [i_13 + 1] [i_13 + 1] [12LL] [i_13 - 1])));
                    }
                } 
            } 
            arr_44 [i_7] = ((/* implicit */short) (+(arr_14 [i_7])));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 4) 
            {
                arr_47 [i_7] [i_11] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_7] [i_11] [i_14]))));
                var_22 = ((/* implicit */unsigned short) (~(arr_34 [i_7] [i_14 - 2] [i_14 + 2])));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) (signed char)123);
                            var_24 -= ((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) 771313023))));
                        }
                    } 
                } 
            }
            arr_54 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(_Bool)1])) | (((/* implicit */int) arr_10 [i_11]))));
        }
        arr_55 [i_7] [i_7] = (!((!(((/* implicit */_Bool) arr_2 [i_7])))));
    }
    for (short i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            for (long long int i_19 = 4; i_19 < 10; i_19 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 3; i_20 < 9; i_20 += 3) 
                    {
                        for (signed char i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)212))));
                                arr_68 [i_21] [i_17] [i_19 - 1] [i_19 - 2] [i_17] [i_17] = (i_17 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_18] [i_18] [i_17])) << (((4278190080U) - (4278190079U)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) / (((1791544287373762123LL) - (((/* implicit */long long int) -2094688073)))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_48 [i_18] [i_18] [i_17])) + (2147483647))) << (((((4278190080U) - (4278190079U))) - (1U)))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) / (((1791544287373762123LL) - (((/* implicit */long long int) -2094688073))))))))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 771313006))));
                                arr_69 [i_17] [i_17] [i_17] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -771313008)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_20 + 1] [i_20 + 1] [i_20] [i_17] [i_20 + 1])) - (((/* implicit */int) arr_67 [i_20] [(signed char)7] [i_20] [i_17] [i_20 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                arr_75 [i_17] [9ULL] [i_19 - 3] [i_19] = ((/* implicit */_Bool) (short)12254);
                                arr_76 [i_17] [i_17] [8] [i_22] [i_23] = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-30048)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                arr_83 [8] [i_17] [i_18] [i_19 - 4] [(signed char)8] [8] |= ((/* implicit */unsigned long long int) ((((-7409505453057776271LL) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_19 - 4])) || (((/* implicit */_Bool) arr_1 [i_19 - 1])))))));
                                arr_84 [i_25] [i_25] [i_17] [i_17] [i_18] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) (short)5814)) + (((/* implicit */int) ((0) != (((/* implicit */int) arr_27 [i_17] [i_24] [i_17]))))))) << (((/* implicit */int) (_Bool)1))));
                                arr_85 [i_17] [i_18] [i_17] [i_25] = min((min((((/* implicit */long long int) arr_80 [i_19 - 4] [i_19 - 4])), (arr_78 [i_19 - 3] [i_19] [i_19 - 2] [i_19 - 3] [i_19 - 1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_19 + 1] [i_18] [i_25])) & (((/* implicit */int) arr_7 [i_19 - 1] [i_19 - 3] [i_19]))))));
                                arr_86 [i_25] [i_25] [i_17] [1ULL] [i_17] [i_17] [i_17] = ((/* implicit */long long int) arr_39 [(unsigned char)10] [i_19] [i_17]);
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) 0ULL)))) && (((/* implicit */_Bool) -257831006))))) <= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_26 = 1; i_26 < 7; i_26 += 4) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 4) 
            {
                for (unsigned int i_28 = 3; i_28 < 9; i_28 += 3) 
                {
                    {
                        var_28 = ((/* implicit */long long int) ((2305843004918726656ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)138))))) | (arr_63 [2LL] [i_28] [i_28 - 3] [i_26] [i_26] [i_26]))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((arr_16 [i_17] [i_26] [i_27] [i_28]) >= (((/* implicit */long long int) (-(((/* implicit */int) (short)7)))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) max(((~(18))), (((arr_62 [i_17] [i_17]) ? (((/* implicit */int) arr_62 [i_17] [i_17])) : (1481551930))))))));
    }
    /* LoopSeq 1 */
    for (short i_29 = 0; i_29 < 21; i_29 += 3) 
    {
        var_31 += ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (short)8192)) > ((~(((/* implicit */int) (_Bool)1))))))));
        arr_97 [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_95 [i_29]) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_95 [(short)3])) : (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_94 [i_29] [i_29])))));
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)117)) || ((_Bool)1))) && (var_3)))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (18446744073709551610ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))))));
}
