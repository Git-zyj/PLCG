/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133757
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
    var_20 = var_13;
    var_21 = (+((-(max((((/* implicit */int) var_5)), (var_19))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_18);
                        var_22 *= ((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_3]);
                        var_23 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [(unsigned short)10] [i_3]);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)103))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_6 [i_0 - 1] [i_1] [i_1 + 2]));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)6)) <= (((/* implicit */int) arr_10 [i_5] [i_4] [i_1] [i_0]))));
                            var_26 += ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 - 1])) > (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1 - 2]))));
                        }
                        var_27 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_1] [i_0]))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_2 - 2])) ? (((/* implicit */int) (unsigned short)3998)) : (var_13)));
                            arr_21 [i_0] [i_1] [i_1] [i_6] [i_7] [(unsigned short)6] [i_7] = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)124));
                            arr_22 [i_7] [14] [i_7] [i_1] [i_7] = var_6;
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_4 [i_1 - 1]))));
                        }
                        var_30 ^= 0U;
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            arr_25 [i_0] [15U] [3U] [17] [i_8] [12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) == (max((((((/* implicit */_Bool) (signed char)8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))))), (((/* implicit */unsigned int) arr_10 [i_1 - 2] [i_2 - 1] [i_8 - 1] [i_8 + 2]))))));
                            arr_26 [i_0] = ((/* implicit */unsigned short) (signed char)0);
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((158622043U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62667)) * (((/* implicit */int) (unsigned char)228)))))))) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) ((unsigned short) max((var_4), (((/* implicit */unsigned char) (signed char)-124))))))));
                            var_32 = ((/* implicit */int) ((unsigned int) var_9));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 2; i_10 < 21; i_10 += 3) 
                        {
                            arr_33 [i_0 - 1] [i_2] [6] [i_6] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [(unsigned short)5] [(unsigned short)5] [i_10] [i_10] [16] [i_6])))))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_2 + 2])) & (((/* implicit */int) (unsigned char)249))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (((+(var_10))) >= (((((/* implicit */_Bool) arr_10 [i_10] [i_6] [(unsigned char)8] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [10] [10] [i_0])) : (((/* implicit */int) var_4)))))))));
                            var_35 = ((/* implicit */unsigned int) (signed char)-16);
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 3) 
                    {
                        arr_36 [i_0] [i_0] [i_0 - 1] [i_0] [16U] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_2 + 1] [i_11] [i_11])) ? (((/* implicit */unsigned int) var_1)) : (4011111689U))) < (((/* implicit */unsigned int) (~(arr_35 [i_11 + 2] [i_11 - 1] [i_11 + 2] [i_11]))))));
                        arr_37 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_35 [i_2 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1])));
                    }
                    var_36 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_1] [i_1 + 1] [i_2] [i_1] [i_1 + 1] [14] [8U])), (arr_14 [i_1]))))))), (1911847809U)));
                    arr_38 [i_0 - 1] [20U] [i_0 - 1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [15U] [i_2] [i_2 - 1] [i_1 - 1])), (((int) 158622043U))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) >= (469762048U)))) ^ (((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (unsigned char)255))))));
        var_38 = ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned char)48)) == (((/* implicit */int) arr_39 [1]))))));
        var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
    }
    var_40 = ((/* implicit */unsigned int) var_2);
}
