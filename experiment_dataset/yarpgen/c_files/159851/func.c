/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159851
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_2))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_11 -= ((_Bool) var_8);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (arr_8 [i_0]) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned int) (+(var_7)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) var_8)))))))))));
                    var_13 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) (((+(((arr_3 [i_0] [i_1] [i_0]) >> (((arr_1 [i_0] [i_0]) - (1014021301U))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))))))) : (((/* implicit */unsigned char) (((+(((arr_3 [i_0] [i_1] [i_0]) >> (((((arr_1 [i_0] [i_0]) - (1014021301U))) - (1892835081U))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_1), (var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_0] [i_0 + 1] [i_1] [i_0]) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (arr_1 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) % (var_5)))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_2 - 1])))) : ((+(((/* implicit */int) var_1)))))) : (((((/* implicit */int) (signed char)-94)) / (837606392)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_3])) ? (((/* implicit */int) var_4)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (var_9) : (arr_9 [(signed char)0])))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_9))))));
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)122))));
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_9 [i_3]) : (((/* implicit */long long int) var_8)))) & (((((/* implicit */_Bool) arr_9 [i_3])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_15 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_3] [i_4]) : (((/* implicit */unsigned long long int) arr_11 [i_3]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3])) : (((arr_14 [i_4] [i_3] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (var_5) : (((/* implicit */long long int) arr_13 [i_3] [i_4] [i_4])))) | (((((/* implicit */_Bool) var_2)) ? (var_2) : (var_2)))));
            arr_16 [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (arr_13 [i_4] [(_Bool)1] [i_3]) : (((/* implicit */unsigned int) var_7))))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                {
                    var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_21 [i_3] [i_3] [i_6] [i_7]))))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_17 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_6]))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((_Bool) (+(var_7)))))));
                    var_22 = ((/* implicit */unsigned short) ((((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((unsigned long long int) 1403053767U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [12ULL]) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_6] [9LL])))))) ? (((unsigned int) arr_23 [i_3] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8])) && (((/* implicit */_Bool) arr_14 [i_3] [i_5] [i_6]))))))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) || ((!(((/* implicit */_Bool) var_2))))));
                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_6] [i_6] [i_6]))))) * ((~(arr_20 [i_6] [i_5] [i_3])))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_7))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))));
            }
            arr_26 [i_3] [i_5] = ((/* implicit */unsigned char) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_9] [i_3] [i_3])) ? (arr_14 [i_3] [i_3] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_20 [i_3] [i_9] [i_3]))))));
            var_28 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) != ((~(var_5)))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                arr_36 [i_11] [i_10] [i_11] [i_11] |= ((/* implicit */unsigned int) var_8);
                var_29 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_5)));
                var_30 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_4)))));
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_31 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_3] [3] [(unsigned char)8]))) : (var_9)))) | (((unsigned long long int) var_5))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    for (short i_14 = 1; i_14 < 13; i_14 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_14] [i_13])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_25 [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) (-(var_7)))) : (((unsigned int) arr_33 [i_12]))));
                            arr_46 [i_3] [i_12] [i_12] = ((/* implicit */int) var_3);
                            arr_47 [i_3] [i_10] [0] [i_10] [i_14 + 1] [i_14] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_42 [10U])))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_29 [i_10] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_13] [i_12] [i_12] [i_13]))))))));
                            arr_48 [i_3] [i_10] [i_12] [i_12] [i_10] = ((/* implicit */unsigned long long int) var_7);
                            arr_49 [i_3] [i_3] [i_12] [i_12] [i_14] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_17 [i_14] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_38 [i_12] [i_10] [i_12]) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_2))))) : ((~(arr_11 [i_16]))))))));
                            var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-7))));
                            var_35 = ((/* implicit */short) ((((((/* implicit */int) arr_31 [i_12] [i_10] [i_3])) * (((/* implicit */int) var_4)))) & (var_7)));
                        }
                    } 
                } 
            }
            var_36 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_3] [i_10] [3U] [i_3] [i_10] [i_3])) ? (arr_17 [i_3] [i_3]) : (((/* implicit */unsigned int) var_7)))))));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 12; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) arr_20 [i_3] [i_10] [i_17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_18] [i_17] [i_3] [i_3])))))) : (((((/* implicit */_Bool) arr_20 [i_3] [(unsigned short)13] [i_18])) ? (arr_51 [i_18] [i_3] [i_17] [i_17 + 2] [i_10] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_3] [(short)8] [i_19])) && (((/* implicit */_Bool) arr_42 [i_18]))))) ^ (((/* implicit */int) ((signed char) arr_27 [i_19] [i_18] [i_17])))))));
                            arr_62 [i_3] [i_10] [i_17 + 1] [(unsigned char)13] [i_3] = ((/* implicit */unsigned long long int) (-((~(var_9)))));
                        }
                    }
                } 
            } 
            var_39 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))));
        }
    }
    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_21 = 1; i_21 < 19; i_21 += 1) 
        {
            for (long long int i_22 = 1; i_22 < 20; i_22 += 4) 
            {
                {
                    var_40 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((arr_66 [(_Bool)1] [(_Bool)1]) / (((/* implicit */int) arr_69 [i_21 - 1] [i_21] [i_21 + 1]))))))), (arr_63 [i_20])));
                    var_41 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))))) && (((/* implicit */_Bool) min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_0))))))))));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (~(var_5))))));
    }
    var_43 -= ((/* implicit */_Bool) var_4);
    var_44 = ((/* implicit */int) (-(((((var_9) + (9223372036854775807LL))) >> ((((~(var_5))) - (2230842141443245360LL)))))));
}
