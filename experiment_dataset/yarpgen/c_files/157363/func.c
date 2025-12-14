/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157363
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 *= ((/* implicit */short) ((var_2) ? (max((((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))), (max((arr_2 [i_0]), (((/* implicit */long long int) arr_4 [i_0])))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_7 [13ULL]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)14] [i_2] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) arr_9 [i_1] [i_1] [i_3]))), (((((/* implicit */_Bool) min((73030461200896766ULL), (((/* implicit */unsigned long long int) (short)1024))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [2LL] [(unsigned short)9] [15ULL] [i_1]))) : (min((2395842113U), (((/* implicit */unsigned int) (short)-13685))))))));
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((((/* implicit */int) arr_12 [(short)5] [i_1] [i_1] [i_1] [i_2] [i_3])) & (var_0))) : (((/* implicit */int) var_10)))), (((((/* implicit */int) max((arr_6 [i_0]), (((/* implicit */unsigned short) (short)5701))))) << ((((-(((/* implicit */int) (signed char)90)))) + (102)))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_1])) : (arr_1 [i_1])))))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_2]) : (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) != (arr_3 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32)))))))));
                                var_14 = ((/* implicit */short) (+(((arr_15 [i_0] [i_0] [i_2] [19] [i_3] [i_2]) / (arr_15 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])))));
                                var_15 = ((/* implicit */unsigned char) max(((+(-1534321398))), (((/* implicit */int) var_10))));
                                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_11 [i_1] [i_2] [i_1] [i_1])))));
                            }
                            arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [15U] [i_2] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (arr_15 [i_0] [(short)13] [i_1] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) (+(var_0)))) : (arr_2 [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] = (-(((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (arr_18 [(signed char)4]))));
        var_18 = ((/* implicit */unsigned long long int) var_0);
        arr_21 [(_Bool)1] [i_5] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-20))))) ? (((/* implicit */int) (unsigned short)51270)) : ((+(var_0)))))));
        arr_22 [(signed char)9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)63201)), (max((((/* implicit */int) (unsigned short)9046)), (var_0)))))) + (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_5] [4] [i_5] [i_5]))))), (var_3)))));
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))), (max((((/* implicit */unsigned long long int) (~(arr_1 [i_6])))), (((unsigned long long int) var_9))))));
        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [(signed char)4] [i_6] [i_6] [i_6] [(signed char)12])) ? (((/* implicit */unsigned long long int) arr_24 [i_6])) : (arr_16 [i_6] [i_6] [i_6] [i_6] [(signed char)5] [i_6] [i_6]))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 2 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) (signed char)-32);
                var_23 += ((/* implicit */unsigned char) arr_5 [i_8] [(unsigned short)20] [i_6]);
            }
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
            {
                arr_35 [i_6] [i_7] [i_9] [i_9] = (short)-11734;
                var_24 -= ((/* implicit */unsigned char) arr_9 [i_6] [i_7] [i_7]);
                var_25 = ((/* implicit */_Bool) max((var_25), (arr_31 [i_6] [i_7] [i_6])));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                arr_39 [i_7] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-15481))));
                var_26 += ((/* implicit */unsigned int) arr_6 [i_6]);
                var_27 ^= -214643265;
            }
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
    {
        var_28 += ((/* implicit */int) arr_6 [i_11]);
        arr_42 [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_11 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) (signed char)125))))) ? (((/* implicit */unsigned long long int) var_7)) : (arr_11 [i_11] [i_11] [i_11] [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37944)) ? (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (short)-13480))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 33521664)) ? (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)43062))))))))));
        var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))), (((((/* implicit */_Bool) (unsigned short)19127)) ? (arr_16 [1ULL] [i_11] [16ULL] [i_11] [i_11] [(unsigned char)10] [i_11]) : (((/* implicit */unsigned long long int) var_7))))));
        var_30 *= ((/* implicit */long long int) arr_9 [i_11] [i_11] [i_11]);
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
    {
        var_31 = (unsigned short)20255;
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1244352063U)) ? (arr_7 [i_12]) : (arr_7 [i_12])));
    }
}
