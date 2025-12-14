/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173321
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62780)) | ((~(((/* implicit */int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(var_4))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_2))));
                var_12 &= ((/* implicit */short) min((((/* implicit */long long int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))), ((+(var_11)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)65511)), (-1))) << (((((/* implicit */int) ((unsigned short) min((((/* implicit */int) arr_2 [i_2])), (var_4))))) - (26137)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225)))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_6);
                            var_16 = ((/* implicit */long long int) ((unsigned int) var_11));
                        }
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_2 + 3] [6U] [i_0] [i_5] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))) : (var_7));
                            var_17 = 0U;
                            var_18 = ((/* implicit */_Bool) (+(var_5)));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_19 -= ((/* implicit */long long int) arr_1 [i_2 + 1] [i_2 - 1]);
                            arr_19 [10U] [i_1] [i_1] [(unsigned short)14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_13 [i_0] [i_0])))) ? (var_5) : (((int) var_6))));
                            var_21 = ((/* implicit */unsigned char) ((long long int) (unsigned short)55402));
                        }
                        var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [(short)4] [i_0])))) || (((((/* implicit */_Bool) 1533056738621834541LL)) || (((/* implicit */_Bool) (unsigned char)255))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_23 ^= ((/* implicit */long long int) ((535202243) == (((/* implicit */int) (short)-32766))));
                            var_24 = arr_29 [i_9] [i_0] [14] [i_0] [i_0];
                        }
                        arr_32 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned long long int) max((arr_29 [i_0] [i_0] [i_0] [i_0] [i_8]), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [0LL] [(unsigned short)15]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_2] [i_0]))) : ((-(((/* implicit */int) (short)7178)))))))));
                        var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) * (min((var_3), (((/* implicit */unsigned long long int) arr_23 [i_0] [6U] [(unsigned short)14] [i_8])))))))));
                        var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((((/* implicit */_Bool) arr_13 [i_8] [i_1])) ? (arr_13 [i_8] [i_8]) : (arr_13 [i_8] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_8] [i_8]))))))));
                    }
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((67108856ULL) <= (((/* implicit */unsigned long long int) 2713925169U))))) : (((((/* implicit */_Bool) 2957124293843263150LL)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (short)-6143))))));
                    var_29 = ((/* implicit */_Bool) min((var_5), (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (max((var_4), (var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                    var_30 = ((/* implicit */unsigned int) 6305381288176007938ULL);
                }
                var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (arr_30 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))))) : (max((((/* implicit */unsigned int) 2147483637)), (1U)))));
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8))))))) : ((-(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned int) ((short) (short)-31699));
                                var_34 = ((((/* implicit */_Bool) ((((/* implicit */int) max(((short)-19163), (((/* implicit */short) var_6))))) & (((var_4) << (((((/* implicit */int) (unsigned char)243)) - (243)))))))) ? ((~(20U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) arr_41 [i_10] [i_11] [20LL] [i_12] [i_10]);
                        var_36 = ((/* implicit */short) var_0);
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((3029448960U) >> (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_35 [i_12] [i_12] [i_12])))))));
                        var_38 &= ((/* implicit */unsigned char) ((var_9) >= (((/* implicit */unsigned int) arr_40 [i_10] [i_12] [i_12] [i_16]))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (min((var_3), (((/* implicit */unsigned long long int) arr_33 [i_10])))))) == (((/* implicit */unsigned long long int) ((long long int) var_3)))));
                        var_40 = ((/* implicit */unsigned int) (!(((arr_44 [i_10] [i_12] [i_17]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_41 |= (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)5)) ? (arr_51 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_12] [i_11]))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_12])))))));
                    }
                }
            } 
        } 
    } 
}
