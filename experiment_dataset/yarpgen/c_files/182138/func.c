/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182138
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (signed char)-51)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((-1354344822) + (2147483647))) >> (((var_1) + (1313955827))))))))));
    /* LoopSeq 1 */
    for (int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_16 -= ((/* implicit */unsigned int) (signed char)-12);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 4; i_3 < 13; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_4 - 3] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (signed char)-47);
                            arr_15 [i_1] [i_1 + 3] [i_1] [i_1 + 3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_2] [i_5]) : (arr_10 [i_3] [i_4 + 1])));
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((_Bool)0) ? (arr_13 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1]) : (((/* implicit */int) arr_9 [i_1 + 2]))));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_3 + 1] [i_1 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_3 + 1] [i_1 + 1] [i_1]))) : (-2730976274534877676LL)));
                var_17 -= ((/* implicit */short) (-(((((/* implicit */int) var_0)) | (((/* implicit */int) (signed char)-97))))));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            arr_23 [i_3] [i_2] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (int i_8 = 3; i_8 < 13; i_8 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                {
                    arr_31 [i_1] [i_2] [i_2] [i_9] [i_2] [i_9] = ((/* implicit */unsigned long long int) ((5830464077572006073LL) < (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0)))))));
                    arr_32 [i_1] [i_1] [i_8] [i_9] [i_2] &= ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (16260984494941945490ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_29 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1] [i_1 - 2])) : (((/* implicit */int) (unsigned char)176)))))))) ? (25ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14336))));
                    arr_33 [i_1] [i_9] [i_2] [i_1] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_12)) ? (-2730976274534877676LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        arr_37 [i_9] [i_9] [i_8 - 3] = ((/* implicit */_Bool) var_7);
                        arr_38 [i_9] [i_9] [i_9] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (-2098032114) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_1] [i_1] [i_11 - 2] [i_8 + 1] [i_8] [i_1 - 1]))))) ? (((arr_5 [i_8 - 2]) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_11 - 1] [i_8 - 2] [i_11] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_8 - 3])))) : ((~(((/* implicit */int) (signed char)-97))))));
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(274877906943LL)))) ? (((((/* implicit */int) var_4)) >> (((arr_20 [i_1] [i_2] [i_1] [i_9] [i_1] [i_1] [i_2]) - (3459027047U))))) : ((~(((/* implicit */int) arr_36 [i_11] [i_9] [i_8] [i_2] [i_1] [i_2] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((12309248184936104404ULL) & (((/* implicit */unsigned long long int) -1115667920))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (signed char)97))))))) : (((((/* implicit */unsigned long long int) var_1)) + (var_6)))));
                    }
                    arr_41 [i_9] [i_9] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (8529342429999434712LL)))));
                }
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                {
                    arr_44 [i_12] [i_1] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_2] [i_2] [i_1 + 1] [i_2]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [i_8] [i_8 + 1] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8 + 1]))))));
                    var_20 *= ((/* implicit */short) (-((-(((/* implicit */int) arr_12 [i_8] [i_8 - 3] [i_8] [i_2] [i_1 + 2]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_47 [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 420053529U)) * (4611686018427379712ULL)));
                        arr_48 [i_1] [i_12] [i_1 - 2] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) ((short) arr_39 [i_12] [i_12] [i_12] [i_8] [i_2] [i_1])));
                        arr_49 [i_1] [i_2] [i_12] = ((/* implicit */long long int) ((_Bool) var_9));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        arr_52 [i_1] [i_1] [i_1] [i_1] [i_14] [i_1] [i_1] &= ((/* implicit */unsigned short) ((min((((((((/* implicit */int) (signed char)-50)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_22 [i_2] [i_12] [i_8] [i_2] [i_1])))) * (((/* implicit */int) ((short) arr_2 [i_1 - 2] [i_8 + 1])))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3928627977771315033LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_45 [i_1] [i_2] [i_8] [i_2] [i_14])))) ? (((/* implicit */int) arr_35 [i_1 + 3] [i_2] [i_2] [i_12] [i_12] [i_14])) : (max((var_1), (arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] [i_14]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1]))))) <= (arr_19 [i_8 - 2] [i_8 - 1] [i_8 - 3] [i_8 - 3]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_1) <= (((/* implicit */int) var_2))))))));
                        var_23 += ((/* implicit */unsigned char) arr_0 [i_1 - 2] [i_8]);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        arr_56 [i_1] [i_1] [i_1 + 3] [i_1 - 2] [i_12] [i_1] [i_1 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [i_8 - 3] [i_1 + 1] [i_8] [i_1 + 3] [i_1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_36 [i_8 - 2] [i_8 - 3] [i_8] [i_1 + 3] [i_1 + 1] [i_1] [i_1 - 2])) : (((/* implicit */int) var_12)))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_29 [i_1] [i_2] [i_8 + 1] [i_8 + 1] [i_1] [i_15]))))));
                        var_24 ^= ((/* implicit */unsigned short) var_11);
                        var_25 -= ((/* implicit */unsigned char) ((var_13) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)39))))));
                    }
                }
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), ((+((((!(((/* implicit */_Bool) 2254100913822714621ULL)))) ? (arr_27 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (arr_26 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63952))))))))))));
                    arr_60 [i_16] [i_2] [i_8] [i_16] [i_16] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((short) var_10)))))));
                    arr_61 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) (short)32740);
                }
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    arr_65 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max(((~(arr_19 [i_17] [i_1 - 1] [i_8 - 3] [i_1 - 1]))), (((/* implicit */unsigned int) var_3))));
                    arr_66 [i_1] [i_1] [i_8 - 3] [i_1] [i_8 - 3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 17389451283389451281ULL))))))) : ((~(((((/* implicit */_Bool) (unsigned short)58488)) ? (var_1) : (((/* implicit */int) (unsigned short)28141))))))));
                }
                var_27 = ((/* implicit */unsigned char) 952946554);
            }
        }
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (-((+(7521091753229978754ULL))))))));
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                for (unsigned int i_20 = 1; i_20 < 11; i_20 += 4) 
                {
                    {
                        arr_74 [i_1] [i_1] [i_19] = ((/* implicit */int) (short)-1);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (~(min((((/* implicit */long long int) (short)-12377)), (var_11))))))));
                        var_30 = ((/* implicit */short) (signed char)-84);
                    }
                } 
            } 
        } 
    }
}
