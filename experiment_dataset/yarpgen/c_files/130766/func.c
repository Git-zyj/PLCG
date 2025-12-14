/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130766
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            arr_4 [7] = ((min((arr_1 [i_1 - 2]), (arr_1 [i_0]))) & (max((1146609005), (1146609005))));
            arr_5 [1] = ((int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) & (arr_1 [i_0])))) + (var_8)));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            var_13 = min((((/* implicit */unsigned long long int) ((int) arr_2 [i_0 + 2] [i_0 + 2] [4]))), (((((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) 213569010)))) ? (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_2]))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0])) - (6088668579061407361ULL))))));
            var_14 = ((/* implicit */long long int) arr_3 [i_0]);
        }
        var_15 = ((/* implicit */int) (-(2305843009213693952LL)));
        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) var_0))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            {
                arr_12 [i_3 - 1] [(unsigned short)2] [i_3 + 1] = min((arr_11 [i_4 - 1] [i_4 + 1] [1ULL]), (((/* implicit */unsigned long long int) (((-(arr_9 [i_3]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                /* LoopSeq 3 */
                for (int i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    arr_17 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [11LL] [13ULL])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4 + 1])) || (((/* implicit */_Bool) var_10))))) : (var_11)))), (((long long int) arr_14 [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((arr_9 [i_4]), (((/* implicit */int) (((+(-17))) <= (((((/* implicit */_Bool) var_7)) ? (var_11) : (var_2))))))));
                        var_18 -= max(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (5289831760883243448ULL)))))), (((/* implicit */int) ((arr_9 [i_6 - 2]) != (((arr_13 [i_3]) | (arr_13 [i_4])))))));
                    }
                }
                for (int i_7 = 2; i_7 < 15; i_7 += 3) /* same iter space */
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1) | (-1473192686)))) ? ((+(arr_13 [i_3]))) : (((((-213569025) + (2147483647))) >> (((((-1845297515) ^ (((/* implicit */int) (unsigned short)59429)))) + (1845356911)))))));
                    var_20 = max((((/* implicit */long long int) max((arr_14 [i_4] [i_7 + 1] [i_4 + 2] [i_3 + 2]), (arr_14 [i_7 - 1] [i_7 - 2] [i_4 + 2] [i_7])))), (((((/* implicit */long long int) arr_14 [i_3] [i_7 + 1] [i_4 - 1] [i_7 + 1])) + (var_8))));
                    arr_24 [i_3 - 1] [i_4 + 2] [8] [8] = ((/* implicit */long long int) min((max((arr_11 [i_3 + 1] [i_4 - 1] [5]), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])))), ((-(arr_23 [i_3 - 1])))));
                    arr_25 [i_3] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) 1146609005)) ^ (9223372036854775807LL)));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        arr_30 [9] [9] [i_7] [i_7] = arr_13 [i_8];
                        /* LoopSeq 1 */
                        for (int i_9 = 2; i_9 < 13; i_9 += 3) 
                        {
                            arr_33 [(unsigned short)3] [(unsigned short)13] [(unsigned short)3] [i_8] [1] = ((/* implicit */unsigned short) ((arr_28 [i_8 + 2] [i_4 + 3] [i_4 + 1] [i_3 + 2] [i_3 + 2] [i_3]) >= (((/* implicit */int) ((((/* implicit */long long int) arr_26 [i_3] [i_3])) < (min((((/* implicit */long long int) var_4)), (var_8))))))));
                            var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) var_4))))) ? (((((/* implicit */int) arr_32 [i_3] [i_3] [i_7] [i_3] [i_9 + 2])) % (arr_26 [i_4 + 2] [i_4 + 2]))) : (arr_31 [i_3] [i_3] [i_3] [4] [i_3] [i_3 + 2] [i_3])))));
                            var_22 ^= ((unsigned long long int) (((-(((/* implicit */int) (unsigned short)57170)))) <= (var_12)));
                        }
                    }
                    for (unsigned short i_10 = 2; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        arr_36 [4] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_3] [i_4 + 1] [i_7 - 1])) ? (arr_11 [i_3] [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned long long int) arr_9 [i_7 - 1])))) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        var_23 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) 1473014639)) && (((/* implicit */_Bool) var_11)))))))) == (((((/* implicit */_Bool) arr_34 [i_4] [i_4])) ? (((/* implicit */long long int) 8)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10 + 1]))) : (var_6)))))));
                        arr_37 [i_3 + 2] [0] = ((/* implicit */int) max((((arr_22 [i_4] [i_4 + 3] [i_3 - 1]) > (arr_22 [i_4 + 2] [i_4 + 2] [i_3 - 2]))), (((arr_22 [i_4 + 3] [i_4 + 3] [i_3 - 2]) <= (arr_22 [i_3 + 1] [i_4 + 1] [i_3 + 1])))));
                    }
                }
                for (unsigned short i_11 = 2; i_11 < 15; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 2; i_12 < 15; i_12 += 3) 
                    {
                        arr_44 [i_3] [i_11] [i_3] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))));
                        arr_45 [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_27 [i_11] [i_12]);
                    }
                    for (int i_13 = 4; i_13 < 14; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(213569009)))))) ? (((/* implicit */unsigned long long int) arr_34 [i_4 + 1] [i_4 + 1])) : (((((/* implicit */unsigned long long int) arr_9 [i_11])) - (((arr_38 [i_11] [i_11] [i_11 + 1]) - (arr_38 [i_3] [i_3] [i_11])))))));
                        arr_48 [i_13] [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_2))))));
                        arr_49 [i_13 - 4] [i_3] [i_3] [i_3] [i_3 - 2] [i_3] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1845297512)) / (var_8)))) ? (min((arr_27 [i_3 - 1] [i_4]), (((/* implicit */long long int) arr_15 [7LL] [i_3] [i_3] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_11 - 1] [i_13])) ? (arr_40 [i_13 - 2] [i_11] [i_4] [i_3]) : (((/* implicit */int) var_0)))))))) ? (arr_35 [i_3] [i_4 + 2] [i_3] [i_4 + 2] [i_11] [14ULL]) : (((/* implicit */long long int) var_3))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 2; i_14 < 13; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 1; i_15 < 15; i_15 += 3) 
                        {
                            {
                                arr_55 [i_3] [i_3] [i_11] [i_3] [i_15 - 1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (~(var_8)))), (((arr_11 [i_3] [i_3] [i_15]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_3] [i_4] [(unsigned short)7] [i_14] [(unsigned short)7]))))))), (((/* implicit */unsigned long long int) ((var_5) / (arr_35 [i_14 - 2] [i_14] [i_14 - 2] [i_15 - 1] [i_15 - 1] [i_15]))))));
                                arr_56 [14LL] [i_4] [i_3] [i_14] [10LL] [i_3] &= ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) -1845297515)) | (arr_23 [i_4 + 3]))), (arr_50 [i_3] [i_11 + 1] [i_3] [i_15 - 1] [i_3] [i_15])));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_3] [8LL] [8LL] [i_3] [i_3 - 2] [i_3 + 2] [i_3])) && (((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_14 - 2] [i_15 + 1]))))) & (((0) - (arr_40 [(unsigned short)14] [i_4 + 3] [i_3 + 2] [(unsigned short)14]))))))));
                            }
                        } 
                    } 
                    var_26 &= (-(((((/* implicit */int) ((arr_54 [i_3 + 2] [i_3 + 2] [i_3 + 2]) == (arr_13 [i_11])))) << (((((long long int) 1989752382824895607ULL)) - (1989752382824895598LL))))));
                }
            }
        } 
    } 
    var_27 = 134216704;
}
