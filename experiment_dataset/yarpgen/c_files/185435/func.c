/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185435
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                                var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_2 + 2]) * (arr_3 [i_0 + 4] [i_2 + 3])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0 + 1]))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6550))) ^ (arr_2 [i_1] [i_2 - 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) var_2)) : ((~(((((/* implicit */int) var_8)) / (-1))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)73)) >> (((1608626310) - (1608626292)))))))))));
        var_16 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (unsigned short)25792)) * ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) (((~(((arr_17 [i_5] [i_5]) >> (((((/* implicit */int) (unsigned short)25779)) - (25721))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5])))));
        var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_15 [i_5])))) | (max((arr_15 [i_5]), (arr_15 [i_5]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -4400380406637225334LL)) ? (((/* implicit */int) (short)31004)) : (((/* implicit */int) (unsigned char)254)))))))));
                    var_19 &= ((/* implicit */int) ((((((/* implicit */int) arr_21 [(unsigned char)8])) + (((/* implicit */int) arr_14 [i_6] [i_6] [i_7] [i_8] [6U] [6U])))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_8] [i_6])) ? (((/* implicit */unsigned long long int) arr_0 [(signed char)2] [i_7])) : (arr_17 [i_6] [(unsigned short)3])))) ? (((/* implicit */int) arr_29 [i_6])) : (((/* implicit */int) arr_27 [(unsigned char)14] [(unsigned char)14]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_2 [i_6] [i_9]);
                            var_20 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_31 [i_6])) || (((/* implicit */_Bool) (short)3756)))));
                            arr_35 [i_10] [i_6] [i_10] [i_6] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)104)))) & (arr_9 [i_6] [i_6] [i_6] [i_9 - 1]));
                        }
                        for (unsigned int i_11 = 2; i_11 < 18; i_11 += 2) 
                        {
                            arr_38 [(unsigned short)8] [i_8] [i_8 + 1] [i_6] [17ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_32 [16] [i_9 + 3] [i_8 - 1] [i_9 + 3] [i_11 - 2] [i_9] [i_8 - 1])))));
                            var_21 |= ((/* implicit */signed char) min((max((((/* implicit */int) (unsigned short)5)), (1608626310))), (((/* implicit */int) ((((/* implicit */int) arr_27 [i_11] [(unsigned short)14])) != (((/* implicit */int) arr_1 [i_8])))))));
                            var_22 -= ((/* implicit */unsigned int) arr_8 [i_6] [i_6] [i_6] [(unsigned char)2]);
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) arr_16 [(signed char)6]);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) arr_6 [(signed char)2] [(signed char)2] [i_9])) : (((/* implicit */int) arr_10 [i_8 + 1] [i_9] [i_9 + 3] [i_9] [(unsigned char)14] [i_9])))))));
                            var_25 += ((/* implicit */unsigned long long int) 0U);
                        }
                        var_26 = ((/* implicit */unsigned long long int) arr_10 [i_8] [i_8] [i_8] [(unsigned char)9] [i_6] [(signed char)2]);
                    }
                    var_27 -= ((/* implicit */unsigned int) 1608626300);
                }
            } 
        } 
        arr_42 [(signed char)0] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)12] [i_6]))))) + (((/* implicit */int) arr_29 [i_6]))));
    }
    for (int i_13 = 2; i_13 < 12; i_13 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_13] [i_13] [i_13]))));
        var_29 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)30638))));
    }
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_5)))))));
    var_31 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))));
    var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (28001491U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((((/* implicit */int) (signed char)-54)) + (2147483647))) >> (((/* implicit */int) (unsigned char)2))))));
}
