/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138149
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)136)) != (31)))) ^ (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)26)))))) % (((/* implicit */int) ((7823237574478503747LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))))));
                arr_8 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((unsigned char) min((0ULL), (((/* implicit */unsigned long long int) (short)15242)))));
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    arr_12 [i_2] [3] [i_0] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_20 [i_3] [i_2] [i_3 - 1] [i_2 - 1] [i_2] [11] [i_3] = ((/* implicit */unsigned long long int) min((15762598695796736LL), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_2))))))));
                                arr_21 [i_1] [i_1] [i_2] [16] [i_4] = ((/* implicit */unsigned long long int) var_7);
                                arr_22 [i_3] [(unsigned char)16] [i_2 + 1] [i_3] [i_4] = (~(((((/* implicit */int) arr_13 [i_3 - 1] [i_3 + 2] [i_2 - 4] [i_2])) >> (((arr_19 [i_4] [i_3] [i_3 + 2] [i_2 - 4] [i_2 - 3]) - (1347320832))))));
                                arr_23 [i_3] [i_1] [i_2] [i_3] [i_4] = (-(((/* implicit */int) arr_14 [i_1] [i_3 + 2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] |= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_6])) : (arr_16 [(short)2] [i_5] [i_2 - 1] [i_1 - 2]))) - (((/* implicit */unsigned long long int) ((int) (-9223372036854775807LL - 1LL))))))));
                                arr_30 [i_6] [i_1] [0] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1])) ? (arr_5 [i_1 - 2] [i_1 - 1]) : (arr_5 [i_1 - 2] [i_1 - 1]))))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 3; i_7 < 14; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_42 [i_7] [i_8] [i_7] [i_0] [i_0] [i_7] = ((/* implicit */int) min((min((arr_40 [i_1 - 2] [i_7] [i_7 + 3] [i_8] [i_7] [i_7 + 3]), ((unsigned char)21))), (min((arr_32 [i_7]), (arr_32 [i_7])))));
                                arr_43 [i_0] [i_1 - 2] [i_7] [i_8] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_7]))) < (min((arr_38 [i_1 + 1] [i_1 - 2] [i_7 - 3] [i_9] [i_1 - 2]), (((/* implicit */long long int) ((short) arr_25 [i_0] [i_1] [i_7] [i_8] [i_9])))))));
                                arr_44 [i_7] [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_6 [i_1 - 2])), (0U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1])))));
                                arr_45 [i_7] [i_7] [i_9] = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_7] [i_9]))) != (8257924171203979875ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))) : (min((((/* implicit */unsigned long long int) (signed char)-4)), (arr_16 [i_0] [i_7 - 2] [i_8] [i_9]))))) / (((/* implicit */unsigned long long int) var_6))));
                            }
                        } 
                    } 
                    arr_46 [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [(short)8])) ? (((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_7 + 2])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_7 - 2])))) : (((((/* implicit */_Bool) arr_16 [i_7] [i_0] [i_7 - 1] [i_0])) ? (-1773180499) : (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_0] [(signed char)15] [i_7] [i_0] [i_7] [i_1] [i_1])) && (((/* implicit */_Bool) arr_39 [i_1])))))))));
                }
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                arr_55 [i_0] [i_0] |= ((/* implicit */signed char) arr_19 [i_0] [i_1] [i_10] [i_11] [i_11 + 2]);
                                arr_56 [i_10] [i_10] [7ULL] [i_10] [i_12] [i_0] = ((/* implicit */long long int) (-2147483647 - 1));
                            }
                        } 
                    } 
                    arr_57 [i_10] [i_10] [i_0] = min((867944883596577832LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_52 [i_1 - 1] [i_1 - 1] [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (int i_13 = 1; i_13 < 16; i_13 += 4) 
                    {
                        arr_60 [i_0] [i_1] [i_10] [i_10] = -504355353;
                        arr_61 [i_0] [i_10] [i_10] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) ((short) 3632765445341684297LL)))))) / (arr_26 [i_10] [0LL] [i_0])));
                        arr_62 [i_0] [i_10] = ((/* implicit */short) min((614204136731368777LL), (((/* implicit */long long int) (-2147483647 - 1)))));
                    }
                }
                for (long long int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_15 = 4; i_15 < 16; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 1; i_16 < 13; i_16 += 4) 
                        {
                            {
                                arr_72 [i_16] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_0] = ((0) * ((~(((((/* implicit */int) (unsigned char)108)) >> (((arr_67 [i_1]) + (6723768744967541815LL))))))));
                                arr_73 [i_0] [i_1] [i_14] [i_15] [2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0LL)), (2079925391076190445ULL))))));
                                arr_74 [i_0] [i_1 - 1] [i_14] [i_15] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_54 [i_1 + 1] [i_15 - 2] [8LL] [i_16 + 4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0]))))))));
                            }
                        } 
                    } 
                    arr_75 [i_0] [i_1] [i_14] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2097151LL)), (2079925391076190445ULL)));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        for (long long int i_18 = 2; i_18 < 16; i_18 += 1) 
                        {
                            {
                                arr_81 [i_0] [i_1] [i_14] [i_17] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-23866)) ? (arr_49 [i_0] [i_0] [i_0] [i_18]) : (((/* implicit */unsigned long long int) 4U)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1 - 2])))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_76 [i_0] [i_17]))))), (7ULL)))));
                                arr_82 [i_1] [2ULL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), ((~(arr_51 [i_18 - 1] [i_1 - 2] [i_14] [i_17])))));
                            }
                        } 
                    } 
                    arr_83 [i_0] = ((/* implicit */int) arr_80 [2LL] [i_1 + 1] [i_1 - 1] [i_14] [i_1]);
                    arr_84 [i_0] [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1]))))) / (max((((/* implicit */int) ((((/* implicit */_Bool) (short)-18116)) || (((/* implicit */_Bool) arr_65 [i_0] [i_1] [i_14] [i_14]))))), ((+(((/* implicit */int) arr_36 [i_0] [i_0] [12] [i_14] [i_14]))))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 8572092046062893631ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_8) >> (((3783609118952791651LL) - (3783609118952791635LL)))))), (((24LL) & (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (var_8)))), (var_5)))));
    var_16 = ((/* implicit */unsigned int) 7LL);
}
