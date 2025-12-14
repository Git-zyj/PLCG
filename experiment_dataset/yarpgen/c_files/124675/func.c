/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124675
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_3] [i_1] = ((/* implicit */int) (!(var_4)));
                                arr_13 [i_1] [i_1] [i_2] [18ULL] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((14683389125095877448ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) % (((/* implicit */unsigned long long int) ((arr_3 [i_1]) << (((/* implicit */int) arr_6 [i_0] [(unsigned short)16] [i_2] [i_1])))))))) ? (arr_11 [i_4] [i_3] [i_0] [i_1] [i_0]) : (min((min((arr_11 [i_4] [i_4] [i_2 + 3] [i_4] [i_4]), (arr_5 [i_0] [i_1 + 2] [i_2]))), (((/* implicit */unsigned int) ((arr_3 [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
                            }
                        } 
                    } 
                    arr_14 [(signed char)4] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0 + 2])), (var_0)));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_15 [i_5]))))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 21; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                for (long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_26 [i_5] [i_6] [i_7] [i_8] [i_6 - 2] [i_5] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_23 [i_5] [i_6] [i_8] [i_8]))))));
                        arr_27 [i_5] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)16))))));
                        arr_28 [i_5] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_5] [i_6 - 1] [i_6] [i_7] [i_8 + 3])) < (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        arr_29 [i_5] [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_15 [i_5]);
        arr_30 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_25 [i_5] [(_Bool)1] [i_5] [i_5 - 1])))))));
    }
    for (int i_9 = 1; i_9 < 22; i_9 += 3) /* same iter space */
    {
        arr_33 [i_9] |= min(((~(1466553504U))), ((+(max((((/* implicit */unsigned int) arr_15 [i_9])), (2828413787U))))));
        arr_34 [(short)11] = ((/* implicit */unsigned int) arr_19 [i_9] [(short)4]);
    }
    for (int i_10 = 1; i_10 < 22; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_13 = 3; i_13 < 23; i_13 += 3) /* same iter space */
                    {
                        arr_46 [i_10] [i_11] [i_12] [i_10] = ((/* implicit */unsigned int) var_4);
                        arr_47 [i_10] [i_13] = arr_40 [i_10] [i_12] [i_13 - 3];
                        arr_48 [i_10] [i_11] [i_10] [i_13 - 2] = ((/* implicit */unsigned char) 2828413792U);
                    }
                    /* vectorizable */
                    for (signed char i_14 = 3; i_14 < 23; i_14 += 3) /* same iter space */
                    {
                        arr_51 [i_10] [i_10] [i_11] [i_12] [(signed char)10] [i_11] = ((/* implicit */unsigned char) 1514990874);
                        arr_52 [i_11] [i_10] [i_12] [i_10] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10]))) != (arr_17 [i_14] [(unsigned char)10])))) <= (((/* implicit */int) arr_24 [i_10] [(unsigned short)5] [i_10] [i_14] [i_10])));
                    }
                    arr_53 [i_10 + 2] [i_10 + 2] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_41 [8U] [(unsigned char)2] [(unsigned char)2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 1466553515U))) ^ (((/* implicit */int) arr_40 [i_10] [i_11] [i_11]))))) : (((unsigned int) max(((unsigned short)3861), (((/* implicit */unsigned short) arr_23 [8LL] [8LL] [i_10 + 1] [i_10 + 1])))))));
                }
            } 
        } 
        arr_54 [i_10] [i_10] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)22382))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 3; i_15 < 22; i_15 += 2) 
        {
            for (unsigned short i_16 = 2; i_16 < 23; i_16 += 3) 
            {
                {
                    arr_62 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [(unsigned char)17])) ? (((((/* implicit */_Bool) ((unsigned int) arr_40 [i_10] [i_15] [i_16]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (max((-6202378216393004017LL), (((/* implicit */long long int) arr_55 [i_10] [i_10] [i_10])))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) & (341132491U)))))));
                    arr_63 [i_10 + 2] [i_10] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))))), (max((-7518860299966691980LL), (((/* implicit */long long int) arr_25 [i_10] [(unsigned char)10] [(unsigned char)2] [(unsigned char)2])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_41 [i_10] [(signed char)14] [i_16])), (var_8)))))))));
                }
            } 
        } 
    }
    for (int i_17 = 1; i_17 < 22; i_17 += 3) /* same iter space */
    {
        arr_67 [i_17] [i_17] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_55 [i_17] [(unsigned short)10] [(unsigned short)10]), (((/* implicit */int) var_3)))))))), (arr_58 [6U])));
        arr_68 [i_17] = ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_39 [(unsigned char)2]), (((/* implicit */short) (_Bool)1))))), ((+(((/* implicit */int) arr_25 [(unsigned char)1] [i_17] [i_17] [i_17]))))))) ? (1466553500U) : (2828413796U));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 1; i_18 < 22; i_18 += 3) 
        {
            arr_71 [i_17] = ((/* implicit */unsigned char) var_0);
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_74 [i_19] [i_18] [i_19] = ((/* implicit */signed char) ((int) (+(((/* implicit */int) (!(arr_61 [i_19] [i_19] [i_19] [(unsigned short)4])))))));
                arr_75 [i_19] [3U] [3U] = (i_19 % 2 == 0) ? (((/* implicit */_Bool) (~(((((arr_19 [i_17] [i_18 - 1]) + (9223372036854775807LL))) << (((((min((arr_55 [15U] [i_19] [i_19]), (((/* implicit */int) (unsigned char)29)))) + (2037422633))) - (4)))))))) : (((/* implicit */_Bool) (~(((((arr_19 [i_17] [i_18 - 1]) + (9223372036854775807LL))) << (((((((min((arr_55 [15U] [i_19] [i_19]), (((/* implicit */int) (unsigned char)29)))) + (2037422633))) - (4))) - (2037422657))))))));
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        {
                            arr_82 [i_20] [i_18] = ((/* implicit */short) var_8);
                            arr_83 [i_21] [i_18] [i_19] [i_20] [i_17] [22U] = ((/* implicit */unsigned short) (((~(2828413775U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned short) arr_40 [i_19] [i_20] [i_20]))))))));
                            arr_84 [i_17] [i_18] [(unsigned char)2] [i_18] [i_18] [i_19] [i_19] = ((/* implicit */unsigned char) arr_25 [i_17] [i_17 + 1] [i_18 - 1] [i_20]);
                        }
                    } 
                } 
                arr_85 [i_17 - 1] [8U] [i_19] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */long long int) max((arr_81 [i_17 + 2] [i_18]), (arr_72 [i_18])))), (arr_31 [i_18]))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                arr_88 [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_18] [i_18 + 1] [i_22] [i_22] [i_18]))));
                arr_89 [i_17] [i_17] [i_22] [i_17] = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_64 [(unsigned short)13] [i_22])), (6380920163812763633ULL))));
            }
        }
    }
}
