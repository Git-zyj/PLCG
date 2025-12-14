/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135088
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [(signed char)11] [i_0] [i_1] [i_2] [8ULL] [i_3] = ((/* implicit */unsigned int) var_7);
                        arr_12 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31497))) : (arr_8 [(signed char)2] [i_1] [(signed char)2])))));
                        var_17 -= ((/* implicit */unsigned int) arr_9 [i_0] [i_0]);
                        arr_13 [i_1] [i_3] &= ((/* implicit */unsigned long long int) var_3);
                        arr_14 [(short)3] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)7] [i_1] [(signed char)7])) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 2147483627)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [i_1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) arr_10 [(signed char)15] [(signed char)15] [i_1] [i_2] [i_3] [i_3]))))));
                    }
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))))))))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (short)31497);
                    arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-31471))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0]))))) : (max(((-(2027743107583458720LL))), (((/* implicit */long long int) min(((unsigned short)27125), (((/* implicit */unsigned short) arr_9 [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_10);
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 + 1])) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-85)), (arr_17 [(short)14] [i_4 + 2]))))))), (max((max((((/* implicit */unsigned long long int) 455453018U)), (4087863928030231344ULL))), (((/* implicit */unsigned long long int) ((long long int) var_7)))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 17; i_6 += 2) 
            {
                {
                    var_20 = min((((((/* implicit */_Bool) max((arr_21 [i_4] [i_6 + 1]), (arr_17 [i_5] [i_6 - 3])))) ? (max((6939169878050495411ULL), (((/* implicit */unsigned long long int) (short)-31497)))) : (((/* implicit */unsigned long long int) arr_21 [i_4] [(signed char)9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31497)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17420)))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned short)57377))))));
                    arr_25 [i_4] [i_4] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)76)), ((unsigned short)4259)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_6])))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_21 [i_4] [15ULL]))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) != (arr_23 [i_4] [(unsigned short)11] [i_6] [i_5]))))));
                    arr_26 [i_4] [2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)231)) ? (arr_18 [i_4 + 1]) : (max((arr_18 [i_4 - 3]), (((/* implicit */int) var_7))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_33 [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)59))));
                                arr_34 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) >= (((((/* implicit */_Bool) arr_27 [i_5] [i_5 - 1] [i_6 - 1] [i_7] [(short)1] [i_6])) ? (arr_17 [i_5] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)38410)) : (((/* implicit */int) (unsigned char)177))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [13ULL]))) * (arr_21 [i_5 + 3] [i_4 - 1])))));
                                arr_35 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_5 + 2] [i_6] [(signed char)4] [i_8])) : (((((/* implicit */int) arr_29 [i_5] [i_5])) & (((/* implicit */int) arr_20 [(signed char)17]))))))) ? (((arr_30 [5U] [i_5] [i_5] [i_5] [i_8]) - (arr_30 [i_7] [i_5] [i_6 + 2] [i_5] [i_4 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) && (((/* implicit */_Bool) (unsigned char)198))))) << (((((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_17 [i_8] [i_7]))) - (99U))))))));
                                var_21 = ((/* implicit */unsigned int) ((1737889228U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38435)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) (+(2918953048814000479LL)))) * (((((/* implicit */unsigned long long int) 5210934848216239585LL)) % (14793096689209952542ULL)))))))));
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((var_15), (var_9))))));
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 8; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 3; i_11 < 10; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 2) 
                    {
                        for (int i_13 = 4; i_13 < 8; i_13 += 3) 
                        {
                            {
                                arr_51 [i_13 - 4] [i_10] [i_9] [i_11 - 1] [i_10] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_9] [i_10] [i_9] [i_12] [i_12] [i_12]))) ? (((arr_42 [i_9 - 1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)24482)))) : (((/* implicit */int) ((((/* implicit */int) arr_29 [i_10] [i_10])) >= (687903219))))))) ? (min((((/* implicit */unsigned int) ((short) var_16))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-69))))))));
                                var_24 &= arr_10 [(short)10] [i_12] [(short)10] [i_10] [i_9 + 3] [i_9];
                                arr_52 [i_10] [i_12] [7U] [i_11] [0] [i_9] [i_10] = ((/* implicit */unsigned int) ((((long long int) arr_22 [i_12] [i_12 - 3] [i_12 - 2] [i_12])) / (((/* implicit */long long int) (+(-687903219))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */int) min((max((arr_1 [i_9 + 1]), (((/* implicit */unsigned long long int) arr_50 [i_9 - 1] [i_9 - 1] [(unsigned short)10] [i_10] [i_14] [i_15] [i_15])))), (max((var_2), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)62)))))))));
                            arr_58 [5U] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((540368819U), (((/* implicit */unsigned int) (short)-17401))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 589121412U)))))) : (8796093022207ULL))) % (max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) var_4))))), ((+(arr_1 [(short)4])))))));
                            /* LoopSeq 1 */
                            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                            {
                                var_26 -= ((/* implicit */unsigned int) arr_2 [(unsigned char)14]);
                                arr_62 [i_10] [i_10] [i_16] = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_31 [19] [i_10] [i_14] [i_15] [i_16] [i_9 + 2] [14])))), (((((/* implicit */_Bool) var_11)) && (((((/* implicit */int) arr_60 [i_9] [i_14] [i_14] [i_14] [(signed char)6] [i_14] [i_16])) != (((/* implicit */int) var_7))))))));
                            }
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_15] [i_14] [i_10] [i_10] [i_10] [i_9 + 3] [i_9 + 1])) ? (((/* implicit */unsigned long long int) arr_50 [i_9 + 3] [i_9] [i_10] [i_9] [i_9 - 1] [(unsigned short)0] [(unsigned short)0])) : (5565546352595350613ULL)))) ? (arr_50 [i_9] [i_9] [i_10] [i_14] [i_14] [i_10] [i_15]) : (((/* implicit */int) ((arr_50 [i_15] [i_15] [i_10] [i_14] [i_10] [i_10] [i_9]) >= (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
