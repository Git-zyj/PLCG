/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111422
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) var_5)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), ((short)-11))))) / (min((1433182068771027719ULL), (1433182068771027719ULL)))))));
    var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (var_2)))), (min((var_3), (var_13))))), (max((min((var_13), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned char) var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [19])))))), ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) ^ (arr_3 [i_0] [i_0]))))))));
                var_19 = ((/* implicit */unsigned int) max((min((min((arr_4 [i_0] [i_0]), (((/* implicit */long long int) arr_5 [i_1] [5LL] [i_1])))), (min((arr_4 [i_1] [i_1]), (arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1]), (((/* implicit */long long int) arr_0 [i_0] [i_1]))))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) min(((~(max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (arr_3 [i_1] [i_0]))))), (max((arr_4 [i_0] [i_1]), (arr_3 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((max(((-(arr_12 [i_0] [i_1] [i_3]))), (((arr_12 [i_0] [i_0] [i_2]) >> (((arr_5 [i_1] [i_1] [i_4]) + (1989691892))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])))))))));
                            var_21 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) min((arr_14 [i_0] [i_2] [i_2]), (((/* implicit */unsigned short) arr_1 [(unsigned char)13]))))), (max((((/* implicit */long long int) arr_5 [4] [i_2] [i_3])), (arr_4 [i_0] [i_0]))))), (((/* implicit */long long int) arr_0 [i_2] [i_2]))));
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_13 [i_0] [i_1] [i_1] [14U] [i_0] [i_2]), (arr_13 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2]))))));
                            var_23 ^= ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_11 [i_4 + 1] [i_4 + 2] [i_4 - 1]), (arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 2])))), (arr_8 [i_0] [i_0])));
                            var_24 |= ((/* implicit */int) max((min((min((((/* implicit */unsigned int) arr_13 [i_1] [i_3] [16LL] [16LL] [i_1] [i_1])), (arr_10 [0LL] [0LL] [i_2] [i_0]))), (((/* implicit */unsigned int) min((arr_14 [12] [i_1] [i_4]), (arr_0 [i_0] [(unsigned short)15])))))), (((/* implicit */unsigned int) arr_11 [(unsigned char)0] [i_2] [i_2]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_2] [5] [(unsigned char)0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_5])) ? (arr_4 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [(short)3] [i_0] [i_3] [i_2]))))), (arr_3 [i_2] [i_2]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_3] [i_5])), ((unsigned char)82))))));
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (arr_0 [i_3] [i_3])))), ((-(arr_3 [0] [i_1]))))), (min((min((arr_4 [i_1] [i_2]), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_2])))), (((/* implicit */long long int) max((arr_5 [i_1] [i_2] [i_2]), (((/* implicit */int) arr_14 [i_1] [i_5] [(signed char)16])))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [(unsigned char)21] [i_3] [i_5] [i_3] [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] [i_1])), (arr_8 [15LL] [i_1])))) : (min((arr_10 [i_0] [i_1] [i_3] [i_2]), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1]))))))) && (((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                        }
                        var_26 = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [22ULL]))))), (max((arr_3 [i_0] [(_Bool)1]), (((/* implicit */long long int) arr_5 [i_3] [i_1] [i_0])))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                        var_27 ^= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_0] [19U] [17U])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (arr_8 [i_1] [i_3])))) || (((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_2] [i_3]))))))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_1])), (arr_0 [i_0] [i_0]))))))));
                    }
                    for (short i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_6 + 1] [(signed char)21] [i_6 + 2]))))) << (((/* implicit */int) min((((/* implicit */short) arr_17 [i_1] [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1] [i_6 + 1])), (arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1])))))))));
                        var_29 = ((/* implicit */unsigned char) max((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((min((arr_10 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_2] [i_6])))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0])), (arr_8 [i_0] [i_2])))))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((((((/* implicit */_Bool) max((arr_15 [i_0] [i_1] [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0])), (arr_3 [i_1] [i_0])))) : (max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_6])), (arr_15 [(_Bool)1] [i_2] [i_1] [(unsigned char)18] [i_0]))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_11 [i_0] [i_1] [17])))), (((arr_22 [i_0] [i_0] [i_0]) + (((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))))))))))));
                    }
                    arr_25 [6] [i_2] [i_2] [i_0] = ((/* implicit */short) max((max((((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_2])) | (((/* implicit */int) arr_14 [i_0] [i_2] [i_2])))), (((/* implicit */int) min((arr_23 [i_2] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_14 [21ULL] [i_2] [i_2])), (arr_3 [(signed char)9] [(signed char)9])))) != (min((arr_15 [18] [21U] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_21 [i_2] [i_0] [22] [i_0])))))))));
                }
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
                {
                    var_31 |= ((/* implicit */short) min((max((arr_12 [i_7 - 1] [i_7] [i_7 - 1]), (arr_12 [i_7 - 1] [i_7] [i_7 + 1]))), (arr_12 [i_7 + 1] [i_7] [i_7 + 1])));
                    var_32 = max(((!((!(((/* implicit */_Bool) arr_1 [i_1])))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_7 + 1])))) / (((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_7] [i_7] [i_7 - 1] [i_0] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (16400721306087439781ULL)));
                                var_35 = ((/* implicit */_Bool) min((min((((/* implicit */short) arr_9 [i_7] [i_7 + 1] [13LL])), (min((arr_27 [i_0] [i_0] [i_8] [i_7]), (((/* implicit */short) arr_21 [i_7 + 1] [i_1] [i_7] [i_8])))))), (((/* implicit */short) max(((!(((/* implicit */_Bool) arr_24 [i_9] [i_7] [i_7] [i_0])))), (((arr_10 [i_7] [(signed char)15] [i_1] [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)1] [(unsigned char)19] [i_9] [i_7]))))))))));
                                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [2] [i_0] [i_0]))))) ^ (((/* implicit */int) arr_11 [i_7 + 1] [i_7 - 1] [i_7 + 1]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_14 [i_0] [i_7] [i_7]), (((/* implicit */unsigned short) arr_34 [i_7] [(_Bool)1] [i_9] [i_8] [i_7] [i_1] [i_7]))))), (max((((/* implicit */unsigned long long int) (unsigned char)73)), (0ULL))))))));
                            }
                        } 
                    } 
                    var_37 -= ((/* implicit */unsigned char) max((min((arr_15 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7]), (arr_15 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))), (arr_15 [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7])));
                }
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [16U] [i_1] [i_1] [16U] [i_1] [i_1] [i_1]))))) ^ (((/* implicit */int) min((arr_26 [i_0] [i_1] [i_10] [(_Bool)1]), (((/* implicit */unsigned short) arr_38 [i_1] [i_1] [i_11] [i_12]))))))) >= (arr_8 [4LL] [i_1])));
                                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_27 [i_0] [i_10] [i_11] [i_10])), (arr_22 [i_0] [i_0] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12] [i_10] [i_10] [i_1]))) + (arr_30 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_24 [i_0] [i_1] [i_1] [(signed char)2]), (((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_0]))))))))) ? (max((max((157425802U), (((/* implicit */unsigned int) (short)21)))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-17)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [10U] [i_1]))))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_10] [i_0])), (min((((/* implicit */unsigned long long int) arr_18 [8ULL] [i_1] [i_1] [i_10] [i_10] [i_1])), (min((18127335164009396137ULL), (2046022767622111839ULL)))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) max((arr_41 [i_0] [(_Bool)1]), (((/* implicit */short) arr_43 [i_0] [i_1] [i_13]))))), (min((((/* implicit */unsigned int) (unsigned char)68)), (4294967272U))))), (((/* implicit */unsigned int) arr_28 [i_0] [i_1] [i_13])))))));
                    var_42 &= ((/* implicit */unsigned short) ((((arr_15 [i_0] [i_0] [i_1] [i_1] [i_0]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [2] [16U] [i_13] [(unsigned char)1] [(unsigned char)16] [i_13] [i_13])) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_13] [i_0])) : (arr_33 [i_0] [i_1] [i_13] [i_13] [i_0])))))) && (((/* implicit */_Bool) min((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) max((arr_30 [i_13] [10LL]), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0]))))))))));
                    var_43 = ((/* implicit */int) min((arr_16 [i_1] [i_1] [i_13] [i_13] [i_1] [i_13]), (arr_36 [i_0] [i_0] [18U] [i_0])));
                }
            }
        } 
    } 
    var_44 ^= max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_8))))))), (max((max((((/* implicit */unsigned long long int) var_1)), (var_13))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_14)))))));
}
