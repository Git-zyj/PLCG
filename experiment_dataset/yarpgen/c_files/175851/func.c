/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175851
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) max((((((/* implicit */int) var_11)) + (2047))), ((((_Bool)1) ? (((/* implicit */int) (short)-20179)) : (((/* implicit */int) (_Bool)1))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)99)) ? ((-2147483647 - 1)) : (-1861218440)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (179796409)))) : (var_16))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-7533478)))) ? (max((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) -3943692061079153545LL))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */long long int) arr_14 [i_1]);
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 3555603848U)) - (18446744073709551600ULL))), (((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_0] [i_2] [i_0]))))))) ? (((2734781265U) << (0LL))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2734781261U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (_Bool)1))))));
                                arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51633)) ? (arr_12 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2)))))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (-9008697721262247584LL)))))), (((8223108738168869642ULL) + (((/* implicit */unsigned long long int) -1))))));
                                var_23 += ((((/* implicit */_Bool) min((1480989435), (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((arr_19 [i_6] [(unsigned char)0] [i_2] [i_5] [4] [i_6]) && (((/* implicit */_Bool) 1833233341))))) : (((arr_0 [i_0] [i_1]) ? (((/* implicit */int) (signed char)127)) : (558196438))));
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((max((((/* implicit */unsigned int) (short)0)), (3095703487U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [i_1] [i_2] [i_5])))))), ((~((~(((/* implicit */int) arr_9 [i_0] [i_0]))))))));
                                arr_24 [i_0] [i_0] [i_2] [i_5] [i_0] = max(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((arr_14 [i_0]) && (((/* implicit */_Bool) ((8ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        arr_28 [i_0] [15] [i_0] [i_7] [i_7 + 1] [i_0] = arr_8 [i_2] [i_7 - 2] [i_7 - 1] [i_7];
                        var_25 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [(signed char)2] [i_7 - 1]))) : (2ULL)));
                    }
                    for (short i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) max((arr_14 [i_0]), (arr_0 [i_0] [i_8 - 1])));
                        arr_33 [i_0] [i_0] [i_1] [14] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)-106))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (unsigned int i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                for (int i_11 = 2; i_11 < 17; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)236)), ((short)-17767)))), (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (unsigned short)65514)))))) % (max((((((/* implicit */_Bool) -2857950137704135767LL)) ? (18446744073709551614ULL) : (15892173797094108334ULL))), (((/* implicit */unsigned long long int) (signed char)-57)))))))));
                        arr_41 [i_0] [i_0] [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-((~(2442523946U)))))), (arr_32 [i_11] [(unsigned char)8] [(_Bool)1])));
                        arr_42 [(_Bool)1] [i_0] [(unsigned char)10] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((unsigned char)109), (arr_6 [i_9] [i_11 + 2] [i_10 + 3] [(unsigned short)11])))), (4294967285U)));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? ((~(((/* implicit */int) (_Bool)0)))) : (max((((/* implicit */int) (short)-20176)), (-2147483637)))))), (max((((((/* implicit */_Bool) (unsigned char)15)) ? (arr_36 [16U] [i_9] [i_10 + 1] [16U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_9] [i_10] [i_11]))))), (((/* implicit */unsigned int) arr_31 [i_0] [i_9] [i_10] [(signed char)12])))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 16; i_12 += 1) 
    {
        for (unsigned short i_13 = 1; i_13 < 15; i_13 += 4) 
        {
            {
                arr_48 [i_13] = ((/* implicit */_Bool) (~(max((0ULL), (((/* implicit */unsigned long long int) arr_18 [i_12 - 2]))))));
                arr_49 [(unsigned char)15] = (!(((/* implicit */_Bool) min((arr_8 [i_12 + 1] [i_12 + 1] [i_13 - 1] [i_13 - 1]), (((/* implicit */int) (_Bool)1))))));
                arr_50 [(signed char)6] [i_12] [i_12] = ((((int) (signed char)0)) * (((((/* implicit */int) (unsigned char)1)) * (((((/* implicit */int) (unsigned char)76)) ^ (-1191390874))))));
                var_29 = ((/* implicit */int) min((((((3731389935U) <= (((/* implicit */unsigned int) 1480989442)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (min((13399102347736671755ULL), (((/* implicit */unsigned long long int) (unsigned char)15)))))), (((/* implicit */unsigned long long int) ((arr_18 [i_12 - 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))))));
            }
        } 
    } 
}
