/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128994
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((var_6) / (((/* implicit */long long int) var_1)))))))));
                var_13 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)14411)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)31)))) + (((((/* implicit */int) arr_1 [i_0])) + (var_11)))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)14411)))) + (((((/* implicit */_Bool) 115558012648969297LL)) ? (-202532137) : (202532136))))) - (((((/* implicit */_Bool) 6623961950642769814ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)5845))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)101)) & (202532123)));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopSeq 3 */
                for (int i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned short) arr_11 [i_5 + 1] [i_3 + 2])))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((3845507394148033188LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)6931)))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_21 [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-13135)) : (var_1)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)62982)) : (((/* implicit */int) var_9))))));
                        var_17 = var_0;
                    }
                    for (unsigned char i_7 = 3; i_7 < 24; i_7 += 1) 
                    {
                        arr_24 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -202532125)) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) (unsigned char)0))));
                        var_18 = ((/* implicit */unsigned int) var_6);
                        arr_25 [i_7 - 1] [i_5 - 1] [i_2] [i_5] [i_3] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_2] [i_2 - 1])) + (((/* implicit */int) var_5))));
                    }
                    arr_26 [i_5] [i_4 + 1] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_3 - 2] [i_2 - 2])) <= (var_1)));
                }
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    arr_31 [i_2] [(short)20] [i_2] [i_2] = ((/* implicit */int) (((-(((/* implicit */int) var_9)))) > (((/* implicit */int) arr_9 [i_2 - 2]))));
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_8]))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_34 [i_9] [i_3] = ((/* implicit */unsigned int) var_12);
                    arr_35 [i_9] [i_3] [i_4 + 1] = ((/* implicit */int) var_10);
                }
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 22; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_40 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] = ((/* implicit */_Bool) var_10);
                            arr_41 [i_2] [i_2] [i_4] [i_2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_4 + 1]))) + ((+(4294901760U)))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-6)) == (((/* implicit */int) var_0)))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_30 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_10] [i_11] [(_Bool)1])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */int) var_4)) == (((/* implicit */int) var_4)))) ? (((/* implicit */int) var_9)) : (202532123)))));
            }
            arr_42 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((-(-8809500787840611009LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                for (signed char i_13 = 2; i_13 < 23; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_13 + 2] [i_13] [i_13] [i_13 - 2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_4))))));
                            var_23 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)23)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) var_5))));
                            arr_50 [i_2] [i_12] [i_12] [i_2] [i_14] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (var_6)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_15 = 2; i_15 < 24; i_15 += 4) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((var_2) * (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2 - 1] [i_2 - 2] [i_15 - 1] [i_2]))))))))));
            arr_53 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_15 + 1] [i_15 - 2] [i_2 + 1] [i_2 - 2])) + (((((/* implicit */_Bool) (short)6915)) ? (((/* implicit */int) arr_51 [i_2])) : (arr_8 [i_2 - 2])))));
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_11))), (((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */int) (short)16368)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_16])) : (var_1)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-101)) && (((/* implicit */_Bool) (signed char)94)))))))) : (min((((/* implicit */long long int) arr_29 [i_16])), (((((/* implicit */_Bool) var_5)) ? (-5069900830232026712LL) : (var_6)))))));
            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (var_2))) >> (((var_0) ? (((/* implicit */int) (_Bool)1)) : (var_11)))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)0))) >= (((/* implicit */int) (unsigned char)32))))) : (((/* implicit */int) var_5))));
        }
        var_27 = ((max((2589599856267680328LL), (((/* implicit */long long int) (-2147483647 - 1))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_43 [i_2] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_8)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-1)) : (-1164478063)))))));
    }
    var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_9)) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) -202532137))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_11)))))));
    var_29 = max(((((!(((/* implicit */_Bool) 6933115544922019638ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5852))) : (var_6))) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_3)))), (((((/* implicit */long long int) ((/* implicit */int) var_12))) < (8622068789623495265LL)))))));
}
