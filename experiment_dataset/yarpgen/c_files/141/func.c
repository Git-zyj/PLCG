/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141
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
    for (long long int i_0 = 3; i_0 < 6; i_0 += 1) 
    {
        arr_2 [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [(short)2])) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) != (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56827))) : (1028142125U))))))));
        arr_3 [i_0] = (~(((((((/* implicit */int) arr_1 [i_0 + 2] [i_0])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) - (27193LL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_6 [(unsigned short)8] [(unsigned short)8] = ((/* implicit */short) ((10) <= (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))));
            arr_7 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((1028142114U) >> (((((/* implicit */int) arr_5 [i_0] [i_0 + 3] [i_1])) - (2614)))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) % (var_3));
            arr_11 [i_0] [i_0] [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))));
            arr_12 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 6; i_3 += 1) 
            {
                arr_15 [i_0] [i_3] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned int) max(((-((+(((/* implicit */int) arr_9 [i_0] [i_2] [i_0])))))), (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_2] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_3]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_4 = 3; i_4 < 8; i_4 += 2) 
                {
                    arr_19 [i_0] [i_2] [i_3 + 1] [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) (~(3266825163U)));
                    arr_20 [i_0] [i_0] [i_3 - 1] [i_3] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0 - 2]);
                }
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    arr_25 [i_0] [i_5] [i_3 + 3] &= ((/* implicit */signed char) arr_14 [i_2] [i_2] [i_2] [i_2]);
                    arr_26 [i_0] [i_2] [i_2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned long long int) var_8);
                }
                arr_27 [0U] [i_3] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3266825182U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 2])))))) ? (((/* implicit */int) min((arr_18 [i_3] [i_3] [i_3 + 2] [i_3 - 2] [i_3 + 3]), (var_12)))) : (((((/* implicit */int) arr_18 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 - 2] [i_3 - 2])) * (((/* implicit */int) arr_18 [i_3] [i_3] [i_3 - 2] [i_3 + 2] [i_3]))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_6 = 4; i_6 < 8; i_6 += 2) 
            {
                arr_30 [i_0] [i_6] [i_6 - 3] [i_6 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2515703393U)))))) ? (((((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_2] [i_2] [i_6]) / (((/* implicit */unsigned long long int) 3732818075U))))) ? ((+(((/* implicit */int) (unsigned char)215)))) : (((/* implicit */int) (signed char)112)))) : (((/* implicit */int) (signed char)107))));
                arr_31 [7U] [2U] [2U] [7U] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))))))), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_6]))) - (4294967295U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                arr_32 [i_0] [i_2] = ((/* implicit */int) var_7);
            }
        }
        for (signed char i_7 = 3; i_7 < 9; i_7 += 1) 
        {
            arr_36 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) (short)-25)) || (((/* implicit */_Bool) (short)32764))))), (((((/* implicit */_Bool) arr_35 [i_0])) ? (((((/* implicit */_Bool) -987104079)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_29 [i_0] [i_0])))) : ((-(2147483647)))))));
            arr_37 [i_0] [i_0 + 1] [i_7] = ((/* implicit */signed char) var_7);
        }
        arr_38 [i_0 + 1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) arr_9 [i_0] [i_0 + 3] [i_0]))))));
    }
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_41 [i_8] [i_8] = ((/* implicit */unsigned int) (~(2147483647)));
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            arr_51 [i_8] [(unsigned short)23] [i_10] = ((/* implicit */int) (signed char)126);
                            arr_52 [i_10] [i_9] [i_10] [i_9] = ((/* implicit */int) (unsigned short)20300);
                        }
                        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            arr_56 [(short)7] [i_9] [i_10] [i_11] [i_13 - 1] [(short)18] [i_13 - 1] = ((/* implicit */signed char) arr_39 [i_8] [i_8]);
                            arr_57 [8] [i_9] [i_8] [i_11] [i_13 + 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_55 [i_9] [i_9] [i_13 + 2] [i_11] [8])) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (5509936661620308927LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)4)))))));
                            arr_58 [i_9] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_8] [(unsigned short)21] [(short)0] [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_13]))))))))) : ((-(((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8]))) : (arr_39 [i_9] [i_9])))))));
                            arr_59 [i_10] [i_10] = ((/* implicit */unsigned short) var_3);
                        }
                        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 2) /* same iter space */
                        {
                            arr_62 [i_14] [i_10] [23U] [i_10] [i_8] = ((/* implicit */_Bool) (signed char)90);
                            arr_63 [i_10] [i_10] [i_9] = ((/* implicit */_Bool) arr_49 [i_14] [i_10] [i_14 + 3] [i_10] [i_14 + 1]);
                            arr_64 [i_10] [i_8] [(signed char)23] [i_8] [i_10] = ((/* implicit */long long int) max((((665282754U) / (3266825162U))), (((/* implicit */unsigned int) arr_55 [i_14] [(signed char)15] [i_8] [i_9] [i_8]))));
                        }
                        for (unsigned int i_15 = 2; i_15 < 21; i_15 += 2) /* same iter space */
                        {
                            arr_67 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) -893918952);
                            arr_68 [i_8] [i_10] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_60 [i_8] [i_11] [(unsigned short)13] [i_8] [(signed char)0] [i_8] [i_8])) <= (((/* implicit */int) (signed char)-126)))))));
                        }
                        arr_69 [i_10] [i_9] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1923664986)) && (((/* implicit */_Bool) 1ULL)))) || (((/* implicit */_Bool) (signed char)-115))));
                    }
                } 
            } 
        } 
        arr_70 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55375)) ? (arr_39 [i_8] [i_8]) : (arr_39 [i_8] [i_8])))) && (((/* implicit */_Bool) ((arr_39 [i_8] [i_8]) % (arr_39 [i_8] [i_8]))))));
        arr_71 [i_8] |= ((/* implicit */signed char) (((((~(var_11))) >> (((((((/* implicit */int) (unsigned short)17)) + (((/* implicit */int) arr_60 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [22ULL])))) - (92))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119)))));
        arr_72 [i_8] [i_8] = ((/* implicit */int) var_6);
    }
    for (int i_16 = 1; i_16 < 23; i_16 += 3) 
    {
        arr_75 [i_16] [i_16] = ((/* implicit */short) ((int) max((arr_61 [i_16 - 1] [i_16 - 1] [i_16]), (arr_61 [i_16 + 1] [i_16 + 1] [i_16 + 1]))));
        arr_76 [i_16] = ((/* implicit */unsigned int) min(((_Bool)1), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)109))))) && (((/* implicit */_Bool) (-(arr_61 [i_16] [i_16 - 1] [(unsigned char)23]))))))));
    }
}
