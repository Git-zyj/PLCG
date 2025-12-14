/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159608
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned long long int) -3536769893961863028LL))))))) ? (((/* implicit */unsigned long long int) 2935418000U)) : (max((min((((/* implicit */unsigned long long int) var_8)), (var_10))), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0])))))));
        var_13 = (-(min((var_0), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])))) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 6463262824821610419ULL))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_1] [i_3 + 1] [i_1] [i_3] [7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)7))));
                            arr_11 [i_1] [i_3 - 2] |= ((/* implicit */unsigned short) var_3);
                            var_17 ^= ((/* implicit */unsigned long long int) (-(var_8)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_5]))) ? (((/* implicit */int) arr_12 [i_0] [i_5])) : ((~(((/* implicit */int) arr_6 [i_0])))))), ((~(((/* implicit */int) max((arr_1 [i_5]), (((/* implicit */unsigned char) (signed char)-1)))))))));
            var_19 = ((/* implicit */int) var_1);
            var_20 *= ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0] [i_5] [i_5]))))) != (max((max((((/* implicit */unsigned long long int) (short)32767)), (var_10))), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_0] [i_5] [i_0] [i_0] [i_5])))))));
            arr_14 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        }
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) min((((unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned short) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0])))))))))));
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        arr_17 [i_6] &= ((/* implicit */unsigned int) var_0);
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) var_4))));
            arr_20 [i_7] [i_7] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_18 [i_7] [i_6])) : (((/* implicit */int) var_7))))), (arr_16 [1U]))))));
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6])) || (((/* implicit */_Bool) (~(var_6)))))))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_8])) || (((/* implicit */_Bool) (~(var_10)))))))));
                var_25 = ((/* implicit */unsigned int) min((var_25), ((+(arr_24 [i_8] [i_7] [i_6])))));
            }
            for (int i_9 = 2; i_9 < 24; i_9 += 3) 
            {
                var_26 *= ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_18 [i_9 + 1] [i_7])))), (((/* implicit */int) ((3851341750U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (_Bool)0)), (arr_24 [i_9 + 1] [i_9 - 2] [i_9 + 1])))));
                            arr_32 [i_11] [i_9] = ((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned short)44578)), (3)))));
                            var_28 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_29 [i_7] [i_7] [i_6] [(unsigned char)21] [i_9 - 1] [i_11])) : (((/* implicit */int) arr_25 [i_6] [i_7] [i_9 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_9 - 1] [i_9 - 1] [i_9 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_7] [i_7] [i_10])) ? (((/* implicit */unsigned int) 2147483647)) : (arr_19 [i_6])))))))));
                        }
                    } 
                } 
                arr_33 [i_9] [i_9] [i_9 - 1] [i_9 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_9] [i_9] [i_7] [i_6]))))) || (((/* implicit */_Bool) (~(262143U))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    arr_36 [i_7] [i_12] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                    var_29 = ((/* implicit */unsigned short) (-((+(348837772U)))));
                }
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    arr_39 [i_13] [i_9] [i_6] = ((/* implicit */_Bool) ((long long int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_23 [i_9 + 1] [i_9] [i_6])))));
                    arr_40 [i_6] &= ((/* implicit */signed char) -1553872314);
                }
                for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_11))));
                    var_31 ^= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) 612472919)))));
                    arr_44 [i_14] [i_7] [i_6] [i_7] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_30 [i_6] [12U] [i_7] [i_9 - 2] [i_14])) : (((/* implicit */int) arr_41 [i_9 - 1])))))));
                }
                for (short i_15 = 1; i_15 < 24; i_15 += 4) 
                {
                    var_32 = ((/* implicit */long long int) ((min((arr_45 [i_9 - 2] [i_15 - 1]), (arr_45 [i_9 + 1] [i_15 + 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        var_33 *= ((/* implicit */unsigned short) arr_46 [(unsigned short)6] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        var_34 = ((/* implicit */_Bool) max((var_34), (((((/* implicit */_Bool) ((unsigned int) var_10))) || (((/* implicit */_Bool) arr_51 [i_15] [i_15] [(unsigned short)20] [(_Bool)1] [i_15 - 1]))))));
                        var_35 = ((/* implicit */unsigned int) arr_49 [i_6] [i_6] [i_9] [i_9] [(_Bool)1] [i_9] [i_15]);
                        var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) 2147483647)) * (arr_24 [i_6] [i_7] [i_15]))))) ? (4291227872U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32699), (((/* implicit */short) (_Bool)1))))))));
                        var_37 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL)));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 23; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((arr_38 [i_6]) + (2147483647))) >> (((arr_26 [i_6] [i_9] [i_7] [i_6]) - (1566768162927209760ULL))))), (((/* implicit */int) arr_43 [i_17] [i_15 + 1] [i_9] [i_7] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_17] [i_15 - 1] [i_9 + 1])))))) : (arr_48 [i_6] [i_7] [i_15] [i_17 + 2])));
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((long long int) (short)-13053)))));
                        var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)13448))));
                        var_41 = ((/* implicit */_Bool) (-(((arr_54 [i_15 - 1] [i_9 - 1] [i_17 - 1] [22] [i_17]) & (arr_54 [i_15 + 1] [i_9 - 2] [i_17 + 1] [i_15] [i_17])))));
                    }
                }
            }
            var_42 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_19 [i_6]))), (((/* implicit */unsigned int) min((arr_35 [i_6] [i_6] [i_7] [i_7] [i_7]), (arr_35 [i_6] [i_7] [i_7] [i_6] [i_7]))))));
        }
        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) var_1))));
        var_44 = ((((/* implicit */int) max(((unsigned short)65528), (((/* implicit */unsigned short) (signed char)127))))) >> (((((unsigned int) min((-7707093336414173359LL), (((/* implicit */long long int) var_4))))) - (3359688517U))));
    }
    var_45 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), ((-(max((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL)))))));
}
