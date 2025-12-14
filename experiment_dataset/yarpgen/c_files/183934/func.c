/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183934
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
    var_12 = ((/* implicit */int) max(((!(((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) > ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10)))))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 1]))))) ? (max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (arr_3 [i_0 - 1] [i_3] [i_4 - 1]))) : (((unsigned long long int) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [1] [i_0] [i_0]))))))));
                                var_14 = ((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_1] [1LL] [6LL]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_14 [i_5] [10] [8U] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4)))) ? (((unsigned long long int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)70)) ^ (((/* implicit */int) arr_8 [i_0 + 1] [(unsigned char)7] [i_0] [i_0 - 1])))))));
                        arr_15 [i_0 + 1] [(short)0] = ((/* implicit */unsigned short) ((short) (short)2973));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((arr_13 [2U] [10LL] [10LL] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) 8639331613208605130LL)))))));
                        var_16 = ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0 + 1] [i_5] [i_5])))) ? (((/* implicit */long long int) ((arr_10 [i_0] [i_1] [i_0 + 1] [i_5] [(unsigned char)0]) >> (((10327426076598454177ULL) - (10327426076598454169ULL)))))) : (((long long int) arr_10 [i_0] [(unsigned char)4] [i_0 + 1] [i_5] [i_1])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])) : (var_2)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_21 [i_7] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)6])) >> (((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (-4127093626120187065LL))) - (4127093626120187084LL)))));
                            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) 4596045722083250426LL)));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 4; i_8 < 10; i_8 += 3) 
                        {
                            arr_26 [1] [i_1] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_8 - 4] [i_2] [i_6] [i_8]), (arr_6 [i_0] [i_8 - 3] [i_2] [i_6] [i_8 + 1])))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_8 + 1] [i_2] [8ULL] [i_8 + 2])))) : (((/* implicit */int) (signed char)4))));
                            var_19 -= ((/* implicit */short) var_5);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) ((max((545593119U), (((/* implicit */unsigned int) -1481798622)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_1])) <= (((/* implicit */int) arr_24 [i_1]))))))))))));
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned short) (signed char)58)))));
                            var_22 = ((/* implicit */_Bool) arr_27 [i_0] [i_0] [(unsigned char)3] [i_0 + 1] [i_1] [i_2]);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_10 = 3; i_10 < 11; i_10 += 4) 
                        {
                            arr_31 [i_10] [i_10] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 8119317997111097439ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                            arr_32 [0ULL] [6ULL] [i_6] [i_2] [i_6] [i_6] [(signed char)2] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            arr_33 [i_10] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_24 [i_2]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_10] [i_10 + 1] [i_10 + 1] [i_6] [i_0 + 1] [i_0 - 1])))))));
                            arr_34 [i_10] [i_1] [i_10] [i_10] [1U] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) ((unsigned short) (signed char)127)))), (((max((arr_3 [i_0 - 1] [i_6] [i_10]), (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0] [i_6] [i_10 - 1]), (((/* implicit */short) (unsigned char)134))))))))));
                        }
                    }
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        arr_37 [(unsigned char)5] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37916)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62176))) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 7631809898914504365LL)) : (arr_13 [i_0] [i_0] [i_1] [0ULL] [i_11] [i_11 - 1])))) || (max(((_Bool)1), (arr_25 [(signed char)11] [(short)3] [i_2] [i_2] [i_2] [i_11] [i_11])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)55898))))));
                        var_23 *= ((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((max((arr_17 [i_0 - 1] [8ULL]), (arr_35 [i_0] [i_1] [i_2] [i_11]))), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_2])))))));
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-8221656035137907794LL), (((/* implicit */long long int) arr_24 [i_2]))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned short)10])) * (((/* implicit */int) arr_25 [11U] [9ULL] [i_1] [i_2] [(unsigned short)7] [5ULL] [i_11])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)40005), (((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_1] [i_2])))))) * (((unsigned long long int) (_Bool)1))))));
                        var_25 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_23 [2U] [i_1] [i_2] [i_11 + 2] [i_11])) + (((/* implicit */int) ((short) (_Bool)1))))), (arr_5 [i_0 - 1] [i_2] [i_2])));
                        var_26 = ((/* implicit */unsigned long long int) (~(((int) max(((short)1023), (((/* implicit */short) arr_0 [i_0])))))));
                    }
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31287))))))));
                        arr_40 [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_13 = 2; i_13 < 15; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)53293)));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_44 [(signed char)5])) ? (max((((/* implicit */int) (unsigned short)63785)), (arr_46 [15]))) : (arr_46 [i_13 - 1]))), (((/* implicit */int) (unsigned char)38)))))));
            }
        } 
    } 
}
