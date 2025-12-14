/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144250
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)86))));
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) var_1);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_7))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */long long int) ((/* implicit */int) (signed char)86))) + (-9223372036854775802LL)))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) (+(136948921)));
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_15 [i_6] [i_7]);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((136948921) & (((/* implicit */int) (signed char)-82)))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 10; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_11 [i_3]))));
                            arr_30 [i_3] [i_5] [i_6] = ((((/* implicit */_Bool) arr_29 [i_8 + 1] [i_8 - 2])) ? (((/* implicit */int) var_10)) : (((arr_8 [i_3] [i_3] [i_3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-83)))));
                        }
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((var_8) % (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-24)))), (((/* implicit */int) var_10))))))))));
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */long long int) arr_23 [i_3] [i_4] [i_5] [i_6] [i_9])) <= (((long long int) 136948925)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) arr_20 [i_9] [i_6] [i_5] [i_4]))))) : (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) ((17) > (((/* implicit */int) (signed char)86)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) : (var_8)))))));
                        }
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1213428945U)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (3775887024U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))))) ? (((/* implicit */int) (unsigned short)50179)) : (((/* implicit */int) (unsigned short)15376)))) : (136948918)));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15385))))) && (((/* implicit */_Bool) max((-136948922), (((/* implicit */int) arr_20 [i_6] [i_5] [i_4] [i_3])))))));
                    }
                } 
            } 
            arr_35 [i_3] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) ((var_8) & (var_14)))))));
            var_28 ^= ((/* implicit */_Bool) var_5);
            arr_36 [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_3]));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            var_29 = ((/* implicit */long long int) (~(((arr_12 [i_3]) + (((/* implicit */unsigned long long int) var_11))))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), ((-(arr_7 [i_3])))));
        }
        arr_41 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_3] [i_3] [i_3]))))) ? ((-(arr_17 [i_3] [i_3] [i_3]))) : (((/* implicit */int) (unsigned short)50167))));
    }
    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_49 [i_13] [i_12] [i_13] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50150))) * (var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_47 [i_13] [i_12] [i_13] [i_12 + 2]))))));
                    var_31 = ((/* implicit */unsigned int) (~(6482419008836088891LL)));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [7U] [7U])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (unsigned short)15375)) : (((/* implicit */int) (signed char)23))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_46 [i_11] [i_12 + 1] [4ULL])) ? (arr_44 [i_13]) : (arr_46 [i_12 + 1] [i_12 + 1] [i_13])))))));
                    arr_50 [i_11] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12 + 3])) ? (arr_44 [i_12 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((1527021124U) >> (19)))) : (((((/* implicit */_Bool) arr_44 [i_12 + 1])) ? (arr_44 [i_12 + 3]) : (arr_44 [i_12 - 1])))));
                    arr_51 [i_11] [i_13] [i_12 + 1] [i_13] = ((/* implicit */signed char) ((min((arr_46 [i_13] [i_12] [i_11]), (((/* implicit */long long int) ((signed char) var_3))))) / (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))));
                }
            } 
        } 
        var_33 = ((/* implicit */int) ((var_14) & (((((/* implicit */_Bool) var_1)) ? (arr_44 [i_11]) : (arr_44 [i_11])))));
        arr_52 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_43 [i_11] [i_11])) ? (arr_47 [i_11] [(unsigned short)4] [(unsigned short)4] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) << (((/* implicit */int) ((((/* implicit */int) arr_42 [i_11])) > (((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11]))) - (arr_48 [i_11] [15ULL] [15ULL] [15ULL])))))))) : ((+(var_16)))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        arr_55 [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (arr_47 [i_14] [i_14] [i_14] [i_14])));
        arr_56 [7U] = ((/* implicit */unsigned long long int) ((-412959553) / (136948897)));
    }
    var_34 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                var_35 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15349)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 2) 
                        {
                            {
                                arr_70 [i_15] [i_18] [i_16] [i_18] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))));
                                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_17] [i_17])) ? (((var_2) ? (arr_60 [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_5 [i_17 + 2])) ? (arr_60 [i_15] [i_15]) : (arr_60 [i_19] [i_19]))))))));
                                arr_71 [i_15] [i_15] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (((arr_9 [i_16] [i_16] [i_16]) ? (arr_57 [i_17 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (max((arr_67 [i_16] [i_16] [i_18] [i_16]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50190))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_15])))));
                            }
                        } 
                    } 
                } 
                arr_72 [i_16] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15356)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_65 [i_15] [i_16]))))) < (((arr_6 [i_15] [i_15] [i_15]) >> (((var_8) - (5645965422732201671LL))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_16]))))) : ((((((+(var_16))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_5 [i_15])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)50179))))))));
            }
        } 
    } 
}
