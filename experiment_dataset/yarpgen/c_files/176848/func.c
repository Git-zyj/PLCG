/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176848
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))))), (((unsigned int) arr_0 [i_0] [i_0 - 1]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 6; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (arr_2 [i_1 - 3]) : (arr_2 [i_1 - 2])));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_12 = (~(((/* implicit */int) arr_6 [i_4])));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_1 + 3])))))));
                            var_14 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0])))));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) arr_2 [i_5])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_2] [(_Bool)1] [i_1 - 3])))))));
                        var_16 = ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1] [i_1 - 4] [i_1 + 1] [i_1] [i_1 + 1])) ? (arr_14 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_1] [9LL]) : (arr_14 [i_1] [i_1 - 3] [6] [(unsigned short)8] [i_1 + 2] [i_1 + 1] [i_1])));
                        var_17 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_0)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(min((min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_6] [i_7])), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (var_1)))))))))));
                                var_19 |= ((((/* implicit */_Bool) max((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (arr_16 [i_1] [i_1 + 4]) : (((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7] [i_6])) ? (arr_10 [i_0 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned short)5] [i_2]))))) : ((~(arr_5 [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_8 = 2; i_8 < 9; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) ((unsigned short) var_3))));
                        arr_24 [i_0 - 1] [i_1 + 1] [i_2] = ((/* implicit */long long int) (((((-(arr_15 [i_1] [i_1 + 3] [i_1 + 3] [i_1]))) < (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_4)) : ((-(arr_20 [i_0] [i_0 + 1] [i_8] [i_8 - 2] [i_8 + 1])))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 2; i_10 < 9; i_10 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned int) ((((arr_9 [i_1 + 4] [i_9] [i_1 + 4] [i_1 + 4]) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1 + 4] [i_2] [i_10 - 2])) || (((/* implicit */_Bool) arr_5 [i_1]))))) : (((((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_9] [7ULL] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
                            var_22 -= ((/* implicit */signed char) (+(((arr_8 [i_9] [(unsigned short)2] [i_0]) << (((((/* implicit */int) var_4)) - (78)))))));
                            var_23 = ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) arr_30 [i_0 - 1] [i_1 - 4] [i_2] [i_9] [i_10])) : (((((/* implicit */_Bool) arr_25 [i_1 + 1] [i_2] [i_9] [i_10])) ? (var_6) : (arr_14 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (int i_11 = 1; i_11 < 8; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */int) arr_6 [(unsigned char)8]);
                            arr_36 [i_0] [i_1] [i_2] [i_2] [4LL] [i_11] [i_11] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_18 [i_2] [(signed char)4] [i_11])) ? (arr_20 [i_0] [i_0] [i_1] [i_0] [i_11]) : (((/* implicit */int) var_9))))));
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_0] [i_0 - 1] [i_1 + 3] [i_9] [i_11 + 2]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_26 = (~(((/* implicit */int) arr_6 [i_0 - 1])));
                            arr_39 [i_0] [i_0] [i_1] [i_2] [7U] [i_12] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_27 [i_2] [i_2])) & (((/* implicit */int) var_9)))));
                        }
                        for (unsigned char i_13 = 1; i_13 < 9; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_20 [i_0] [i_1] [i_13] [i_9] [i_13]) <= (var_1)))) % (((/* implicit */int) var_5))));
                            var_28 = ((/* implicit */long long int) (+(((unsigned long long int) arr_21 [i_0 + 1] [i_1] [i_13] [i_9] [i_13]))));
                            var_29 &= (+((+(arr_40 [i_0] [i_1] [i_2] [i_9] [i_13]))));
                        }
                        arr_43 [i_0] [i_1 - 2] [i_2] [i_9] = ((((arr_28 [i_0 - 1] [(short)6] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]) / (var_3))) ^ (((/* implicit */unsigned long long int) (-(var_1)))));
                        var_30 += (-(arr_40 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1]));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */short) arr_0 [i_0] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */short) (~(var_1)));
                            arr_51 [i_14] [i_14] [i_2] [0U] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_14] [i_1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_10))))) : (((arr_4 [i_15]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            arr_52 [(signed char)8] [i_1 + 3] [i_1 + 3] [i_14] [i_15] = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) (-(arr_18 [1ULL] [i_1] [i_14])))), (min((((/* implicit */unsigned long long int) var_9)), (arr_0 [(unsigned char)7] [i_15])))))));
                            arr_53 [i_0] [i_14] [i_14] [i_0] = ((/* implicit */unsigned short) var_2);
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+((+(arr_18 [i_2] [i_14] [i_15]))))))));
                        }
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_2)), (arr_8 [i_0] [i_2] [i_14])))))) ? (((/* implicit */int) max((((unsigned short) arr_38 [i_0] [i_1])), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) ((_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1 + 3])))));
                        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [5ULL] [i_1 + 2])))))));
                    }
                    arr_54 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_41 [i_1] [i_1] [i_2]);
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_7 [i_0] [i_1 + 4] [(unsigned char)4] [i_2])))) ? ((~(var_1))) : ((~(((/* implicit */int) var_2))))))) & (max((((unsigned long long int) arr_23 [i_0 + 1] [i_0 + 1] [i_1] [i_2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) var_0);
    }
    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_9))))) ? ((-(var_6))) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (+(min((var_6), (((/* implicit */int) var_4))))))) : ((+(min((((/* implicit */long long int) var_7)), (var_8)))))));
}
