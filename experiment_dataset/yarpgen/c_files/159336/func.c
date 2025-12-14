/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159336
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = max(((+(((((/* implicit */_Bool) -5665545580699577333LL)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29453))))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 737557815)) : (var_6))), (((/* implicit */long long int) var_1)))));
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))) && (((/* implicit */_Bool) ((signed char) var_1))))))) + (max((max((var_4), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_3)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_9 [i_2 - 1] [i_2 + 1]), (((/* implicit */int) arr_8 [i_2]))))), (var_8)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [(_Bool)1]) + (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1]))) / (18446744073709551594ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (arr_13 [i_4] [i_3])))) : (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) arr_8 [i_3]))))))));
                    var_14 |= ((/* implicit */int) arr_8 [i_4 - 1]);
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) <= (max((var_8), (((/* implicit */unsigned long long int) arr_16 [i_3] [i_4] [i_3] [i_3] [i_2 - 2])))))))) & (((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_5])) ? (((/* implicit */long long int) arr_16 [i_2] [i_3] [i_2 + 1] [i_2 - 2] [i_5])) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                        arr_17 [i_3] [i_4] [i_3] = ((/* implicit */int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 - 1] [i_3] [i_4 + 1] [i_5]))) : (var_4))), (((/* implicit */long long int) ((unsigned int) var_4)))));
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_4 + 1])) + (((/* implicit */int) arr_19 [i_2 + 1])))), (((/* implicit */int) var_3)))))));
                        var_17 *= ((/* implicit */_Bool) ((((arr_11 [10LL]) == (((((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_2])) * (((/* implicit */int) var_1)))))) ? (((/* implicit */int) max((((arr_9 [i_3] [(unsigned char)18]) >= (((/* implicit */int) var_7)))), (var_3)))) : (((/* implicit */int) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min(((+(arr_20 [(unsigned char)2] [i_4 + 1] [(unsigned char)2]))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (302709856) : (((/* implicit */int) (unsigned short)36083))))) && (((/* implicit */_Bool) ((signed char) (unsigned short)29447)))))))))));
                            var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) 1437350294394264319LL))), (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_12 [i_4]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_14 [i_2] [i_3] [i_3] [i_2])), (arr_15 [i_7] [i_3] [i_3])))), (min((((/* implicit */unsigned short) var_7)), ((unsigned short)36088)))))) : (((/* implicit */int) max((((short) var_1)), (((/* implicit */short) (signed char)0)))))));
                        }
                        for (short i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_8 + 1] [i_3])), (var_8)));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_2] [i_2 - 1] [i_3] [i_3] [i_2 - 1]) < (((/* implicit */unsigned int) var_5)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29453)) > (arr_20 [i_2] [(unsigned char)0] [14LL])))), ((-(1ULL))))))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((max((((/* implicit */unsigned int) var_5)), (((unsigned int) arr_25 [i_6] [i_6] [i_3] [i_4 + 1] [i_3] [i_2])))), (((/* implicit */unsigned int) ((unsigned short) arr_24 [i_2] [i_4 + 1] [i_4 + 1]))))))));
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 4) 
                        {
                            var_23 = (-(((int) max((((/* implicit */long long int) var_9)), (var_6)))));
                            arr_32 [(unsigned char)18] [i_9] |= ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [i_9] [i_3] [(_Bool)1])) : (((/* implicit */int) arr_14 [4] [i_9] [(unsigned short)0] [(unsigned short)0])))), (((((/* implicit */int) (unsigned char)0)) - (var_5))))), (((/* implicit */int) var_2))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_24 [i_10 - 3] [(unsigned short)11] [i_2 - 2])))) ? ((~(((/* implicit */int) ((unsigned short) var_6))))) : (((((/* implicit */int) arr_12 [i_2 - 2])) & (((/* implicit */int) arr_12 [i_2 + 1]))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2] [i_3] [i_2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29445)))))) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_14 [i_2 - 1] [i_4 - 1] [i_10 - 2] [i_10]))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_26 [i_10 - 2] [i_4] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28183)) ? (var_6) : (var_4)))) : (var_8)))));
                        }
                        var_26 += ((/* implicit */unsigned char) max((min((min((127LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_10 [16LL]))))))), (((/* implicit */long long int) var_2))));
                    }
                    arr_33 [9U] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (signed char)-4))) ^ (((/* implicit */int) ((short) (~(((/* implicit */int) arr_14 [i_2] [i_3] [i_4 + 1] [i_4 - 1]))))))));
                }
            } 
        } 
        arr_34 [9] = ((/* implicit */_Bool) var_0);
        arr_35 [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)28179))) ? (arr_30 [i_2 - 2] [i_2 - 2] [i_2 + 1] [(_Bool)1] [i_2 + 1] [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))) ? (min((((/* implicit */unsigned int) var_1)), (arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (((var_3) ? (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [3] [i_2 - 1])) : (((/* implicit */int) (unsigned short)36091)))) : (min((423776938), (arr_21 [i_2] [i_2] [3] [i_2 - 2]))))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
        {
            for (unsigned int i_12 = 3; i_12 < 19; i_12 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (var_8)));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((max((arr_30 [i_2] [i_2 - 1] [i_2 + 1] [2ULL] [12U] [i_12]), (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-19421))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((5353786836881952799ULL), (((/* implicit */unsigned long long int) var_6)))))))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (short i_14 = 2; i_14 < 18; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-15))))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)207)) + (((/* implicit */int) (_Bool)0))))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
                                var_30 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_2 - 1] [i_2 - 1])) ? (arr_27 [i_2] [i_2 + 1] [2LL] [i_2] [2LL]) : (arr_11 [i_13])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((unsigned short) var_5)))))));
                                var_31 &= ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (arr_27 [i_2] [i_2] [i_2] [i_2 + 1] [i_2]))) / (((/* implicit */int) ((signed char) var_8))))));
                                var_32 |= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)25262)) : (((/* implicit */int) (signed char)-47))))), (arr_30 [i_12] [i_12] [(_Bool)1] [i_13] [i_12 + 1] [i_12])))));
                                var_33 += ((/* implicit */unsigned char) max((max((var_4), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_26 [(short)16] [1U] [i_13] [i_14 + 1]))))), (((/* implicit */long long int) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_34 -= ((/* implicit */unsigned short) var_0);
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 11; i_16 += 3) 
        {
            for (unsigned char i_17 = 4; i_17 < 10; i_17 += 1) 
            {
                {
                    var_35 = max((max((-1LL), (((/* implicit */long long int) arr_43 [12LL] [i_17 - 1] [i_16 + 1] [i_15] [(unsigned char)12])))), (((/* implicit */long long int) arr_20 [i_15] [i_16] [i_15])));
                    arr_54 [i_15] [0LL] [i_16] [i_17] &= ((/* implicit */int) ((long long int) (short)0));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_3)))))))), (((((((/* implicit */long long int) ((/* implicit */int) (short)-1))) == (var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) : (max((((/* implicit */long long int) (unsigned short)31744)), (var_6)))))));
    var_37 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((_Bool)0), (var_2)))) : (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) var_3)), (var_0)))))));
}
