/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167170
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) (-(1969954683U)));
                        arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) ((signed char) var_8)))));
                    }
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 10; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_15 [i_2] [i_1] [i_2] [i_2] [i_5]))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775795LL))))) % (((/* implicit */int) (short)-8394)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_0 + 1] [i_0])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 2])));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((long long int) arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])))));
                    }
                }
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1])) < ((-(arr_2 [(signed char)8])))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) min((max((var_4), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_5))));
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) (-(var_1)));
        var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)0)))) : (var_7))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_7])), (2325012600U)))) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) min((arr_22 [i_7]), (arr_22 [i_7]))))))));
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2325012600U), (1969954683U)))) ? (((unsigned long long int) (short)18164)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8)) | (((/* implicit */int) (unsigned short)65533)))))))) ? (max((((/* implicit */unsigned int) (unsigned char)164)), (2402946684U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 30629314964321436LL)))))));
        var_26 = (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : ((~(var_12))))));
        var_27 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-18719)), (min((((/* implicit */unsigned int) (unsigned char)138)), (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7])))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned char) (~(var_5)));
        var_28 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)54159)))), (((/* implicit */int) (!(arr_21 [i_8] [i_8]))))));
        var_29 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((unsigned int) (unsigned char)28)), (((/* implicit */unsigned int) (unsigned short)65528)))))));
        arr_27 [i_8] [i_8] |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-8394)))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_9 = 3; i_9 < 14; i_9 += 2) 
    {
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */int) (short)-8)) & (((/* implicit */int) arr_23 [i_9 + 1])))))));
        arr_30 [i_9] = ((short) (signed char)63);
        var_31 &= ((/* implicit */short) ((((/* implicit */unsigned int) -293920901)) | (806101726U)));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (arr_33 [i_10]) : (((/* implicit */unsigned int) var_7)))) >> ((((~(((/* implicit */int) (signed char)(-127 - 1))))) - (117)))))) || (((/* implicit */_Bool) var_7)))))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41181)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)25))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)87)))))))) > (16497907783445118858ULL)));
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1416829568U)) / (arr_32 [i_10])))) ? (max((arr_31 [i_10]), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (arr_32 [i_10])))) ? (((/* implicit */unsigned long long int) (+(((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10])))))))) : (((((/* implicit */_Bool) 806101735U)) ? (3714224351837133510ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
        var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32758))));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        arr_37 [i_11] = arr_36 [i_11];
        arr_38 [i_11] [i_11] |= ((/* implicit */signed char) ((((int) var_4)) + (((/* implicit */int) ((unsigned char) (unsigned short)2)))));
    }
    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
}
