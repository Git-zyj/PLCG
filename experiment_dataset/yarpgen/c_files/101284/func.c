/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101284
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((unsigned char) (~(arr_6 [i_0] [i_0] [(unsigned char)8] [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_12 [7] [i_1] [7] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned char)1)) : (825906027)))) ? (((/* implicit */int) var_7)) : (((2147483633) - (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)2636)) : (((/* implicit */int) arr_11 [(unsigned short)1]))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [(unsigned short)7]);
                        var_19 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [i_3]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_5))));
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            arr_19 [i_0] [8] [i_2] [(unsigned short)0] [i_5] &= ((/* implicit */unsigned char) (+((~(arr_15 [i_2] [i_4] [i_5])))));
                            var_21 |= ((/* implicit */unsigned short) arr_6 [i_5] [i_4] [i_1] [i_0]);
                            var_22 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned char)1)) : (arr_1 [i_0]))), ((~(((/* implicit */int) (unsigned char)100))))))) ? (max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (-987673077) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)7])))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_7 [i_4] [i_1]) : (arr_21 [i_0] [(unsigned char)4] [(unsigned char)6]))))) : (arr_1 [i_0]))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((arr_20 [i_2] [i_6 + 2] [i_6 + 3] [i_6] [i_6]) | (arr_20 [i_6] [i_6 - 1] [i_6 - 1] [(unsigned short)1] [i_6]))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)95)) <= (332080444)))))))));
                            var_25 = ((/* implicit */unsigned short) var_2);
                            arr_22 [i_0] [i_0] [(unsigned char)8] [(unsigned char)8] = arr_2 [i_0];
                        }
                        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 2) 
                        {
                            arr_27 [i_7] [i_4] [i_2] [(unsigned char)10] [(unsigned char)10] = max((((((/* implicit */_Bool) max((arr_21 [i_2] [0] [(unsigned short)7]), (var_2)))) ? ((+(var_15))) : (((((/* implicit */int) (unsigned char)112)) - (arr_2 [i_7]))))), ((~(var_3))));
                            var_26 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_7 - 1]))) != (max((((/* implicit */int) arr_11 [i_7 - 1])), (arr_7 [i_7 + 2] [i_7 - 1])))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_27 = ((int) arr_26 [i_0] [i_0] [i_1] [i_1] [i_2] [(unsigned char)7] [i_8]);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_0))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (arr_40 [i_9] [i_10] [i_11] [i_11] [i_13]) : (arr_37 [i_10] [i_10] [i_12] [i_13]))) & (((((/* implicit */_Bool) (unsigned short)5020)) ? (arr_36 [(unsigned short)13] [i_10] [(unsigned short)9]) : (arr_33 [i_11]))))), (((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_11])) ? (arr_36 [i_9] [i_13] [i_11]) : (-987673077)))));
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12781))))) ? (arr_40 [i_9] [i_10] [i_11] [18] [i_13]) : (((/* implicit */int) (unsigned char)186))))) ? (-1521105204) : (arr_41 [i_9] [i_13] [i_11] [(unsigned short)0] [i_13])));
                                var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned char)235))));
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 192842134)) ? (arr_37 [i_9] [i_11] [i_12] [i_13]) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) (unsigned short)16229)) : (((/* implicit */int) arr_31 [i_9] [i_10]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_39 [i_13] [i_9] [i_11] [(unsigned char)5] [i_9]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62899)) ? (2147483627) : (((/* implicit */int) (unsigned char)224))))) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) arr_45 [(unsigned short)19] [(unsigned short)19] [i_11] [i_14] [i_14] [i_14]))));
                                var_34 ^= arr_35 [i_9] [i_10];
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) ((int) max((((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */int) arr_34 [i_9])) : (arr_32 [i_10] [i_9]))), (min((((/* implicit */int) arr_31 [7] [i_11])), (var_1))))));
                    var_36 = ((/* implicit */unsigned char) arr_37 [i_11] [i_9] [i_11] [i_9]);
                }
            } 
        } 
    } 
    var_37 &= ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)5)) ^ (((/* implicit */int) var_7))))));
    var_38 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (var_8)))) ? (((var_15) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_3))))) : (((/* implicit */int) var_5)));
}
