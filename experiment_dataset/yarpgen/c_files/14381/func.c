/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14381
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    var_13 = (-(arr_2 [i_0] [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 95802122U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))));
                        arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 379792198U))));
                        arr_11 [i_2] [i_1] = ((/* implicit */int) (~(arr_4 [i_0] [i_0])));
                    }
                    arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0U)) / (16384357761406812254ULL)));
                }
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_22 [i_5] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) <= (811746475U)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2789651221U)) ? (var_12) : (((/* implicit */unsigned long long int) var_3))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)-114)))) + (255))));
                                arr_23 [i_0] [i_0] [i_4] [i_5 - 1] [i_6] = ((/* implicit */short) ((unsigned int) arr_4 [i_6] [i_6]));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */unsigned long long int) (~((~(max((-1712587144), (((/* implicit */int) (unsigned char)129))))))));
                    var_15 = ((/* implicit */unsigned char) (~(0U)));
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) > (734138716U)));
                        arr_29 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) var_8))) : ((~(-1712587128))))) == (((/* implicit */int) ((signed char) ((unsigned char) var_0))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_9] [i_7] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) max((-1712587134), (((/* implicit */int) (_Bool)1)))))))) ? (var_12) : (max((((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_12)))));
                                var_16 = ((/* implicit */_Bool) (+(((unsigned int) var_1))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                        {
                            arr_43 [i_0] [i_0] [i_11] [i_12] [i_13] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25461)) ? (var_11) : (0)))));
                            arr_44 [i_13] [i_1] [i_11] [i_12 + 1] [i_13] = ((/* implicit */_Bool) 535818208U);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25460))) : (3398556933U)));
                        }
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_14] = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15750)))))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((((/* implicit */unsigned long long int) 1363562208U)) & (5299432506106047470ULL))), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) (short)2836)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) var_5)))));
                            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) var_2)) / (arr_7 [i_15] [i_12] [i_11] [i_1] [i_0])));
                            arr_50 [i_0] [i_1] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)35053))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) 13157092967041900770ULL))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((896410362U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                        }
                        arr_51 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */short) ((signed char) ((unsigned int) -1867696510)));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            arr_54 [i_0] [i_1] [i_11] [i_11] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_7 [i_12] [i_12] [i_12 - 1] [i_12] [i_12]) + (((((/* implicit */_Bool) (unsigned short)19861)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_12] [i_12]))) : (2283747795U))))))));
                            var_23 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524160U)) ? (var_3) : (var_8)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (268304384)))))));
                        }
                        arr_55 [0ULL] [i_1] [0ULL] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_26 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2164282148U))) < (max((((/* implicit */unsigned int) var_6)), (2164282143U)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 1; i_18 < 9; i_18 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((_Bool) ((short) 524163U)));
                                arr_60 [10U] [10U] [i_11] [i_17] [i_18 + 2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) (short)25461))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19202))) : (arr_37 [i_0] [i_0] [2ULL])))))), (117825230U)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)2836))))));
                }
                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (var_10)))), (var_5)));
                arr_61 [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_8)), (min((((unsigned long long int) (short)9149)), (((/* implicit */unsigned long long int) (+(2673235375U))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) (~(var_3)))))))));
}
