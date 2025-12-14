/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181774
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
    var_10 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 17916326248348296403ULL))))) != (1676416718)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(530417825361255220ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_12 = ((/* implicit */_Bool) var_7);
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [i_1] [i_2])))));
                }
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) var_7);
                    var_14 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) var_4)))) | (((/* implicit */int) min((var_7), (var_7))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= ((+(((/* implicit */int) var_1)))))))) <= (max((max((17916326248348296403ULL), (((/* implicit */unsigned long long int) -7725793632886969427LL)))), (((/* implicit */unsigned long long int) (short)-1883))))));
                }
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_14 [i_0] = var_3;
                    var_16 = ((/* implicit */unsigned int) var_1);
                    var_17 = ((((/* implicit */int) var_3)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) 17916326248348296395ULL))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    var_18 ^= ((/* implicit */_Bool) ((var_6) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))));
                }
                for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_1]))));
                    var_21 = ((/* implicit */int) max((((/* implicit */long long int) arr_10 [i_1])), (arr_3 [i_0] [11ULL])));
                }
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */short) var_2);
                        arr_29 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) && (var_0))) ? (((var_0) ? (((/* implicit */int) (_Bool)1)) : (var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5)))))));
                        arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_5))));
                        var_23 = var_7;
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = (~(((/* implicit */int) arr_27 [i_7 + 1] [i_7 + 1] [9LL] [i_9] [i_7 + 1] [i_9])));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_17 [i_0] [i_0] [i_7] [(short)10])));
                        arr_33 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) arr_25 [i_0] [i_1] [i_0] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((530417825361255210ULL) >> (((((/* implicit */int) (signed char)-2)) + (33)))))) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_0))))));
                        arr_37 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */short) var_5);
                        var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 530417825361255243ULL))))));
                    }
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((arr_32 [i_7 + 1] [i_7 + 1] [i_1] [i_7 - 1]) - (((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)114)))))))));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 11; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) var_3);
                                var_30 = ((/* implicit */long long int) arr_15 [i_12] [i_0] [i_0]);
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 333730285247574745LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_39 [i_11 - 1] [i_0] [i_7 + 1] [i_0] [i_7 + 1]))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (7725793632886969436LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_5))));
                                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -333730285247574745LL)) ? (-7725793632886969427LL) : (3584606677381083925LL))))));
                                arr_48 [i_0] [i_0] [(short)0] [(short)0] [i_0] [(short)0] [i_1] = ((/* implicit */_Bool) arr_3 [i_14] [i_14]);
                                arr_49 [i_0] [i_1] [i_0] [i_13] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (530417825361255211ULL)));
                            }
                        } 
                    } 
                }
                arr_50 [i_0] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */int) ((unsigned short) var_6)))))) ? (((((unsigned long long int) 1534242135)) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    arr_54 [i_0] = ((/* implicit */unsigned int) var_6);
                    var_34 |= ((/* implicit */unsigned short) arr_40 [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
            }
        } 
    } 
}
