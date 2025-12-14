/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182540
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) (~(0U)));
        var_18 = ((/* implicit */long long int) max((3927132548U), (((/* implicit */unsigned int) (short)32767))));
        var_19 ^= ((/* implicit */signed char) arr_3 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_7 [i_0])), (((((/* implicit */_Bool) arr_5 [i_4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (3996474992U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_3]))))));
                                var_20 &= ((/* implicit */int) ((min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1])))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_1] [i_0]))))))))))));
                                var_21 = ((/* implicit */unsigned int) ((_Bool) (-(arr_4 [i_0] [i_0] [i_4]))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */long long int) ((signed char) var_6));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0]))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_0 [13U])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_17 [i_5] [i_6] [7LL]), (((/* implicit */unsigned short) min(((signed char)95), (((/* implicit */signed char) arr_9 [(short)4] [(short)4] [i_5] [10U]))))))))));
            var_25 ^= arr_1 [i_5] [i_6];
            var_26 = ((/* implicit */int) max((var_26), (var_0)));
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (int i_8 = 1; i_8 < 7; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_26 [6] [8U] [i_7] [i_7] [6] [i_9] &= ((/* implicit */short) var_6);
                            var_27 *= ((/* implicit */signed char) ((367834748U) | (4294967295U)));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) > (max((arr_16 [i_5] [i_5]), (((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_5]))))))) > (((/* implicit */int) ((short) (short)20791))))))));
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((unsigned char) arr_13 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))));
        var_30 = ((/* implicit */_Bool) arr_3 [(unsigned char)4]);
        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_10] [(short)0]))));
    }
    for (signed char i_11 = 3; i_11 < 15; i_11 += 4) 
    {
        var_32 ^= ((/* implicit */short) arr_4 [i_11] [i_11 - 2] [i_11]);
        var_33 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (short)20791)), (367834748U)))));
        var_34 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) 590820567)) ? (298492304U) : (4294967295U))), (arr_30 [i_11 - 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(_Bool)1] [1LL] [i_11] [(_Bool)1] [i_11] [i_11 - 2])))));
        /* LoopSeq 3 */
        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_10 [i_11])) : (min((min((((/* implicit */int) (_Bool)1)), (590820567))), (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (short)-20791))))))));
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((arr_11 [(_Bool)1] [i_11] [i_11] [(_Bool)1]) ? ((+(((/* implicit */int) arr_11 [(unsigned short)0] [i_12] [(unsigned short)0] [(unsigned short)0])))) : (((/* implicit */int) arr_12 [i_11] [i_11] [i_11 - 3] [i_11 - 2] [i_11] [i_11 - 1])))))));
            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_11] [i_11 + 1]))));
            arr_36 [i_11] = ((/* implicit */_Bool) (~((~(arr_1 [i_11] [i_11 - 3])))));
        }
        for (long long int i_13 = 1; i_13 < 15; i_13 += 3) 
        {
            var_38 ^= min((1028631786127090612LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_11] [i_13]))))));
            /* LoopNest 2 */
            for (signed char i_14 = 3; i_14 < 15; i_14 += 1) 
            {
                for (unsigned int i_15 = 3; i_15 < 14; i_15 += 2) 
                {
                    {
                        arr_44 [(unsigned char)7] [i_13] [i_11] [i_14] [i_11] [i_14] = (~((~(((/* implicit */int) var_11)))));
                        arr_45 [i_15] [i_11] [i_15] [i_11] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) max((var_9), (((/* implicit */unsigned char) (signed char)-75)))))), (((((/* implicit */_Bool) arr_35 [i_11] [i_11])) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_12))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) 1U))))) ? (((((unsigned int) (signed char)0)) | (1182715407U))) : (((/* implicit */unsigned int) ((arr_42 [i_11] [i_11] [i_13] [i_14] [i_11] [i_11]) | (((/* implicit */int) var_6)))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_13 [i_11] [i_11] [i_13] [i_11] [i_13 - 1] [i_13]))))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            var_41 ^= ((/* implicit */signed char) ((((/* implicit */long long int) arr_41 [i_16] [i_11] [i_16] [i_16])) > (min((arr_29 [i_11 + 1]), (((/* implicit */long long int) (short)-20799))))));
            /* LoopSeq 1 */
            for (unsigned char i_17 = 1; i_17 < 12; i_17 += 4) 
            {
                var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_12 [i_11] [i_11] [(signed char)2] [i_11] [i_17] [19ULL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (var_8)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)30082)))))));
                var_43 = ((signed char) (_Bool)1);
            }
            arr_50 [i_16] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)0), (((signed char) 3927132543U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_11 - 2] [i_11 - 2] [i_11 - 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)21542)))))));
            var_44 = ((/* implicit */signed char) ((_Bool) arr_4 [i_16] [(unsigned char)6] [i_16]));
        }
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            for (signed char i_19 = 1; i_19 < 14; i_19 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
                    {
                        var_45 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        arr_60 [i_11] = ((/* implicit */short) min((var_7), (((/* implicit */long long int) min((((/* implicit */int) max(((short)-28799), (((/* implicit */short) arr_9 [i_11] [i_18] [i_18] [(short)20]))))), ((+(((/* implicit */int) var_15)))))))));
                    }
                    for (unsigned long long int i_21 = 4; i_21 < 15; i_21 += 1) 
                    {
                        var_46 += ((/* implicit */long long int) var_5);
                        var_47 += ((/* implicit */signed char) (((_Bool)0) ? ((~(3645775812U))) : (var_1)));
                        arr_65 [(_Bool)1] [i_11] [i_21] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_55 [i_11 + 1] [i_11 - 1] [i_11])) ? (((/* implicit */int) arr_55 [i_11 + 1] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_55 [i_11 + 1] [i_11 - 1] [i_11]))))));
                    }
                    for (int i_22 = 1; i_22 < 14; i_22 += 1) 
                    {
                        var_48 = (+(((((/* implicit */_Bool) arr_31 [3U])) ? (((int) -1052019322)) : ((~(((/* implicit */int) var_5)))))));
                        var_49 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_53 [i_22 + 1]))))) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_57 [i_11] [1LL] [i_19 + 1] [i_19])) ? (((/* implicit */int) arr_53 [i_22 + 1])) : (((/* implicit */int) arr_57 [i_11] [i_19] [i_19 - 1] [(short)15]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_23 = 1; i_23 < 14; i_23 += 1) 
                    {
                        for (unsigned short i_24 = 1; i_24 < 15; i_24 += 3) 
                        {
                            {
                                arr_74 [i_11] [i_11] [i_18] [(signed char)4] [i_18] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_11 [i_18] [(unsigned short)4] [i_23] [i_23 + 1]), (arr_11 [i_18] [i_23 - 1] [i_23 + 1] [i_23 - 1])))), (((arr_11 [i_18] [i_23 - 1] [i_23 - 1] [i_23 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_18] [i_23] [i_23] [i_23 + 1]))) : (var_10)))));
                                var_50 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_11] [i_11] [i_18])) ? (((((((/* implicit */_Bool) var_10)) ? (arr_31 [i_11]) : (((/* implicit */int) var_6)))) | (((/* implicit */int) arr_11 [i_18] [i_18] [i_19 + 2] [i_19 + 2])))) : (((/* implicit */int) ((short) arr_58 [i_24] [i_18] [i_23] [i_19 - 1] [i_18] [i_11 - 3])))));
                                var_51 |= ((/* implicit */unsigned int) (+(((var_0) * (((/* implicit */int) (signed char)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_52 |= ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 590820567)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) > (((/* implicit */long long int) (+(0U)))))))) : (var_10));
}
