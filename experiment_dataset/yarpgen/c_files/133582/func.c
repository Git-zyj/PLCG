/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133582
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) var_14);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_15 += ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_2 [i_0] [i_2])), (((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) arr_2 [i_2] [i_2])))))), (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 += (~(((((/* implicit */_Bool) (-(1215141311765127540ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2147483647)))) : (2897289208U))));
                                arr_17 [i_0] [i_1] [i_1] [(unsigned char)8] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_3 - 3] [i_3 + 1]) <= (((/* implicit */unsigned long long int) 13U)))))) : (((long long int) ((int) var_6)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((var_17), (var_9)));
                    var_18 = ((/* implicit */long long int) 28ULL);
                }
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((arr_19 [i_0] [i_5]), (((/* implicit */unsigned short) (unsigned char)0)))))) < ((-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                    var_20 -= ((/* implicit */long long int) (_Bool)1);
                    arr_20 [i_1] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) 313411901U)), (9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [2LL] = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_7]);
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 107800451811701284ULL)) ? (arr_5 [i_6] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((long long int) var_3)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10))))))));
                                var_22 = ((/* implicit */unsigned char) (-((-(arr_18 [i_0] [(unsigned char)9] [i_5])))));
                            }
                        } 
                    } 
                }
                arr_29 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)0);
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_26 [i_0] [i_1] [(unsigned char)3] [i_0])))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)14))))) : (min((-9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        for (unsigned char i_9 = 3; i_9 < 19; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_23 -= ((/* implicit */short) arr_41 [i_9 + 4] [i_9] [i_9] [i_10] [i_11 + 1]);
                        arr_44 [i_9] [i_9] [i_10] [i_11] [i_9 - 1] = var_1;
                        arr_45 [(short)22] [i_9] [(short)22] [i_11] = ((/* implicit */short) (((-(6312031314235901008ULL))) / (((/* implicit */unsigned long long int) (~(0U))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            arr_48 [i_8] [(short)7] [(short)7] [i_9] [i_12 + 1] = ((/* implicit */int) (((~(18338943621897850355ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_49 [i_8] [i_9] [i_10] [i_8] [i_9] [i_12 - 1] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_52 [i_9] = ((/* implicit */unsigned short) ((((_Bool) var_7)) ? (((/* implicit */int) (short)-32644)) : (((/* implicit */int) (unsigned char)106))));
                            arr_53 [i_9] [2LL] [i_10] [i_10] [6ULL] = ((/* implicit */unsigned long long int) ((unsigned short) arr_36 [i_9] [i_9] [i_9 + 3]));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_54 [i_11 + 1] [i_9] [i_8] [i_9] [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        arr_55 [20U] [i_9] [i_10] [i_11 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_11]))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8] [i_8]))))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10721056968538016711ULL)) ? (-2063831113) : (((/* implicit */int) (unsigned short)53924))));
                        }
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_6))));
                    }
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (unsigned short)46836))));
                    var_29 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_58 [i_8] [i_8] [i_9] [(unsigned short)0] [i_8] [i_8]))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)128)), (((long long int) (unsigned char)75)))), (((/* implicit */long long int) var_4))));
}
