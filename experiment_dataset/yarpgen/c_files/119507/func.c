/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119507
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (arr_1 [i_0] [i_2])));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_2] [i_3])) || (((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_2] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                var_17 *= ((/* implicit */unsigned char) max((var_1), (((((((/* implicit */_Bool) arr_7 [4LL] [i_1] [9] [i_1])) ? (var_5) : (var_1))) >> (((((/* implicit */int) (short)-23365)) + (23381)))))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_5] [(unsigned short)8] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [0LL] [i_6]) >> (((2342344588U) - (2342344588U)))))) ? (((((/* implicit */_Bool) 2342344588U)) ? (927010429274920730ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_18 += ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                        arr_17 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_0] [6ULL] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned char)8] [i_5] [i_1]))));
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_20 [i_1] [i_5] [i_0] [i_1] = ((/* implicit */unsigned char) var_14);
                        var_19 = 997282124;
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) (unsigned char)0);
                    }
                    for (unsigned char i_8 = 3; i_8 < 9; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_5] [i_5] [(unsigned char)0] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (-1431801826) : (((/* implicit */int) (unsigned short)3584)))), (((/* implicit */int) min(((short)-25015), (arr_5 [i_0] [i_8] [i_8 - 1] [i_0]))))));
                        var_20 = ((/* implicit */unsigned int) -1159157735347800722LL);
                    }
                    arr_27 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25015))) : (2342344568U))), (((/* implicit */unsigned int) var_3)))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_1 [i_10] [i_1]);
                                arr_32 [i_10] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_36 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_0]);
                    arr_37 [i_11] [i_1] [i_11] = ((/* implicit */unsigned short) ((int) arr_9 [i_11] [i_1] [i_1] [i_1] [i_0]));
                }
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 2; i_13 < 11; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1952622727U)) ? (((/* implicit */long long int) arr_7 [i_14] [i_13] [i_0] [i_0])) : (6LL))) > (((/* implicit */long long int) arr_31 [i_14] [(unsigned char)3] [i_12] [i_1] [i_1] [(unsigned char)3])))))) > ((-(max((var_2), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_12] [i_13 - 1])))))))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_31 [i_13] [i_13 + 1] [i_13] [i_13 + 1] [i_13 - 1] [i_13 - 1])) ? (arr_31 [i_13 - 1] [i_13] [i_13 - 2] [i_13 + 1] [i_13 - 1] [i_13 - 1]) : (arr_31 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_13 - 1]))), (min((((/* implicit */int) (unsigned char)254)), (arr_31 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_13 - 1] [i_13 - 1]))))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned char) min((arr_31 [i_13 - 2] [i_13 + 1] [i_13] [i_13 - 1] [i_13] [i_13 - 1]), (arr_31 [i_13 - 1] [i_13 - 2] [i_13] [i_13 + 1] [i_13 - 2] [i_13 - 1])))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 3; i_15 < 10; i_15 += 1) 
                    {
                        for (long long int i_16 = 1; i_16 < 10; i_16 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_12] [i_15] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_16 + 2] [i_1] [i_1] [i_15 - 2])) ? (((/* implicit */int) (short)25018)) : (((/* implicit */int) (unsigned short)55045))))), (-5218042875493634225LL)));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_47 [i_0] [i_1] [i_12] [i_15] [i_16])) : (arr_28 [i_0] [i_0]))))));
                                arr_54 [i_0] [i_1] [i_12] [i_15 - 1] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (unsigned char)85)), (((arr_13 [i_0] [i_15 + 2] [i_15 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1]))))))) > (((/* implicit */unsigned int) ((int) 2124176718)))));
                                arr_55 [5U] [(unsigned short)0] [i_1] = ((/* implicit */unsigned short) (-(arr_44 [i_0] [i_1] [i_12] [i_15] [9ULL])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 1) 
                    {
                        for (int i_18 = 1; i_18 < 11; i_18 += 1) 
                        {
                            {
                                arr_61 [i_0] [i_0] [i_12] [i_17] [i_17] [i_18 - 1] [i_18] &= ((/* implicit */short) (-(((/* implicit */int) var_8))));
                                arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (4294967295U)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min((var_14), (((/* implicit */long long int) ((var_9) > (var_2)))))) : (var_13)));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_10))));
}
