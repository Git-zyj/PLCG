/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115917
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_8 [(short)6] [i_0] [i_2] [i_2 - 1] = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_2 [i_1])))))), (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))) ? (max((-6109448839388360187LL), (((/* implicit */long long int) 4071974414U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13685431434159904657ULL))))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)70)))))));
                    arr_10 [i_0] [i_2 - 2] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_3 [i_0] [i_1]))))));
                }
                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)127))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned char) (short)-1))) : (min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                {
                    var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_1] [i_1] [i_3]))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_10))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (int i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
                    {
                        var_15 |= ((/* implicit */short) ((222992881U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4071974414U)) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) << (((((/* implicit */int) (unsigned char)190)) / (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_19 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_10)))));
                    }
                    for (int i_6 = 2; i_6 < 9; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_0] [8LL] [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (arr_1 [i_4])))), (((unsigned long long int) 4761312639549646958ULL))))) ? (((/* implicit */int) max((arr_2 [i_6 + 1]), ((unsigned char)192)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (855304216U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767)))))) && (((/* implicit */_Bool) ((unsigned char) var_3))))))));
                        /* LoopSeq 4 */
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) var_4));
                            var_17 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_6] [i_7])))))))) + (9223372036854775807LL))) << (((((var_8) + (6023210100401612384LL))) - (47LL)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_18 += ((/* implicit */long long int) (unsigned char)154);
                            var_19 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) -444565648)) && (((/* implicit */_Bool) (short)1536)))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(arr_14 [i_0] [i_4] [i_6 + 1])));
                            arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)3);
                            var_20 = ((/* implicit */unsigned int) var_10);
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_6 + 1] [i_6 + 1] [i_6] [i_4] [i_6 + 3]))))) ? (min((((/* implicit */long long int) ((146620734U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */int) ((short) var_2))) / (((/* implicit */int) min((arr_31 [i_9] [i_6] [i_4] [i_0] [i_0]), (((/* implicit */short) arr_18 [(unsigned char)3] [i_1] [i_4] [i_6 + 2] [i_4] [i_9])))))))))))));
                            arr_34 [i_0] [i_1] [i_4] [i_6] [i_0] = ((unsigned char) (~(((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1]))));
                            var_22 = ((/* implicit */unsigned short) var_2);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_23 += ((/* implicit */unsigned short) arr_20 [i_1] [i_10]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (~(arr_32 [i_0] [i_10]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 9; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)151))));
                            var_26 = ((/* implicit */unsigned short) var_0);
                            var_27 = ((/* implicit */long long int) var_5);
                        }
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned long long int) (~(arr_41 [i_0] [i_1] [i_4] [i_11 - 2] [i_11 - 2] [i_11 - 2])));
                            arr_45 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_11 + 3] [i_11 + 3] [i_11 + 1] [i_11 + 3] [i_11 - 1])) && (((/* implicit */_Bool) arr_36 [i_11 - 1] [i_11 + 2] [i_11 - 2] [i_11 - 1] [i_11 - 1]))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_11 - 2] [i_11 + 3] [i_11] [3LL] [i_11 - 2] [i_13])) && (((/* implicit */_Bool) arr_36 [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                        }
                        var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_4] [i_4] [i_11 + 3])) ? (arr_35 [i_0] [i_4] [i_1] [i_4] [i_4]) : (((/* implicit */long long int) 4071974414U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_11] [i_4] [i_1] [i_0] [i_0]))))) : (arr_27 [i_11 + 3] [i_11] [i_11] [i_11] [i_11 + 2])));
                    }
                    for (int i_14 = 2; i_14 < 9; i_14 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 2; i_15 < 9; i_15 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-19676)))) ? ((~(((/* implicit */int) (unsigned short)8192)))) : (((/* implicit */int) ((arr_17 [(short)7] [i_1]) >= (((/* implicit */unsigned int) arr_46 [i_0] [i_1] [i_0] [i_15]))))))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)184))) ? (((long long int) arr_12 [i_15] [i_15 - 1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_15] [i_15 - 2] [i_15])))))))))));
                            arr_51 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (short)-1)))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)17)) && (((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((780702690U) << (((((/* implicit */int) var_10)) + (7693)))))))) : ((((!(((/* implicit */_Bool) (short)32767)))) ? (536870911ULL) : (((/* implicit */unsigned long long int) ((855304216U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))))))))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((arr_20 [i_1] [i_15 - 2]) << (((1553498652178231348ULL) - (1553498652178231339ULL))))))));
                        }
                        arr_52 [i_1] |= ((/* implicit */unsigned char) var_2);
                        var_34 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (4243410169909186012LL)))) ? (-741513219) : ((~(((/* implicit */int) arr_13 [i_4] [i_0]))))))));
                        var_35 += ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))));
                    }
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_4])) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-30507)) : (((/* implicit */int) arr_36 [i_4] [i_0] [i_1] [i_0] [i_0]))))))) ? (arr_44 [i_0] [i_4]) : (max((((((/* implicit */_Bool) 4634094554937737708LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11021))) : (855304216U))), (((/* implicit */unsigned int) ((unsigned char) 9223372036854775806LL)))))));
                    arr_53 [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((12ULL), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4])))), (((unsigned long long int) var_8))))) ? (((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [5])))) : (((/* implicit */int) var_11))));
                    var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_13 [i_1] [i_0]))))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) min((((/* implicit */short) var_4)), ((short)-2111)));
}
