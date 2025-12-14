/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157496
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((var_15), (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_11)) - (36319))))))))));
    var_17 = ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_5)), (var_3))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (var_15)))))))) < (((/* implicit */int) var_0)));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((var_4), (((/* implicit */long long int) var_0)))), (max((var_8), (((/* implicit */long long int) var_1))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)21650)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_4] = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_3] [i_1] [i_4] [i_4]);
                                arr_17 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3]);
                                var_19 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)21650)))), (var_3)));
                                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)21650))))) > (((/* implicit */int) (unsigned short)21650)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1020)) ^ (((((/* implicit */int) (unsigned char)41)) ^ (((/* implicit */int) (signed char)33)))))))));
                                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))))) > ((-(((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_5])), (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) arr_3 [i_5]))))))) ? (max((arr_7 [i_6] [i_1] [i_1] [i_0]), (arr_5 [(_Bool)1] [i_6] [i_1]))) : (max((max((((/* implicit */long long int) (signed char)(-127 - 1))), (0LL))), (max((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_5 [i_2] [i_5] [i_1]))))));
                                arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) var_15)) == (((arr_22 [i_1 + 1] [(_Bool)1] [i_2 + 2]) % (arr_22 [i_1 + 1] [i_1 + 1] [i_2 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (int i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_7] [i_7] [i_0] |= min((((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_7]))) - (arr_22 [i_0] [i_1 + 1] [i_2 + 2]))) + (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_25 [i_0] [i_0]), (((/* implicit */signed char) var_13))))) && (((/* implicit */_Bool) var_3))))));
                            var_22 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_26 [i_8] [i_1] [i_2] [i_1] [i_0])))))) - (var_3)))));
                            var_23 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((+(var_10))))) * (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_10 [i_0] [4ULL] [i_7] [6LL])))) / (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_27 [i_0] [i_1] [i_0] [i_8])))))))));
                            var_24 += ((/* implicit */_Bool) var_14);
                            var_25 += ((/* implicit */unsigned long long int) max((var_4), (var_4)));
                        }
                        for (long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                        {
                            var_26 -= ((/* implicit */short) (~((((~(arr_19 [i_0] [2LL] [i_9]))) ^ (max((var_8), (((/* implicit */long long int) var_2))))))));
                            arr_33 [i_0] [i_1] [i_2] [i_1] [i_9] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 2] [i_1])))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_31 [i_1] [i_1] [i_2] [i_9] [i_9])), (arr_21 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [i_7])))))))) + (((((/* implicit */unsigned long long int) max((arr_22 [i_7] [i_1] [i_1]), (((/* implicit */long long int) var_0))))) / (min((14497683066231103251ULL), (arr_29 [(signed char)5] [i_1 + 1] [i_2] [12LL] [i_9])))))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
                        {
                            arr_36 [i_1] [i_1] [i_2] [i_7] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_7] [i_1])) + ((-(((/* implicit */int) var_9))))));
                            var_27 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)0))))), ((~(max((((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_1] [i_0])), (arr_35 [i_10] [i_7] [i_7] [i_7] [10ULL] [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_2] [10LL] [i_2 + 2] [i_2] [i_11])) % (((/* implicit */int) (unsigned char)206)))))), (((/* implicit */int) ((arr_3 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 2]))))))));
                            var_29 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_11]))));
                            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_2 + 1] [i_11]), (arr_9 [i_2 + 1] [i_7])))) ? ((+(arr_9 [i_2 + 1] [i_0]))) : (arr_9 [i_2 - 1] [i_0])));
                            var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_2 [(unsigned short)3])), (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [12LL]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) && (((/* implicit */_Bool) var_14)))))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 10; i_12 += 1) 
                        {
                            arr_42 [i_1] = ((/* implicit */_Bool) (+(((min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_3))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_9 [i_0] [i_1]))))))));
                            var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (((max((((/* implicit */unsigned long long int) arr_5 [(signed char)3] [i_2] [i_1])), (var_3))) >> (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_4 [i_1])))))))));
                        }
                    }
                    arr_43 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_32 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_2 + 2])) < (((/* implicit */int) arr_0 [i_2 + 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_15))));
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) ((arr_18 [i_1 + 1]) - ((-(var_15)))))) ? (((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_2] [i_2] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_13] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_37 [(unsigned short)5] [(unsigned short)5] [i_13])))) : (arr_29 [i_0] [i_0] [i_0] [i_2] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [(_Bool)1] [i_2 - 1] [i_13 - 1] [3ULL])) * (((/* implicit */int) var_14)))))))));
                        var_35 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)0)), (-8063734050459412671LL))), (((/* implicit */long long int) var_14))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned char)50))));
                    }
                }
            } 
        } 
    } 
}
