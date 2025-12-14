/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145301
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-((+(((var_14) / (((/* implicit */int) var_15)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        arr_9 [i_3 - 3] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_6 [i_0] [i_0 - 1] [i_0 - 1])));
                        arr_10 [(unsigned short)5] [i_0] [i_2] [i_2] = ((((/* implicit */int) var_6)) >= ((-(((/* implicit */int) var_7)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = arr_6 [i_0] [i_1] [i_1];
                        /* LoopSeq 2 */
                        for (short i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            var_19 -= ((/* implicit */_Bool) (+(11635003294790793878ULL)));
                            arr_18 [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (1600487952) : (((/* implicit */int) arr_1 [i_4]))))));
                        }
                        for (short i_6 = 1; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_20 = (+(arr_19 [i_2 - 1] [(signed char)0] [i_2]));
                            arr_22 [i_0] [i_4] [i_2] [i_1] [i_0] = arr_20 [(short)10] [(unsigned short)3] [i_2 - 1] [i_4] [i_6 - 1] [i_0 + 1];
                            var_21 = ((/* implicit */unsigned char) var_11);
                        }
                        arr_23 [(unsigned short)11] [i_0] [10] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                        arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [2ULL] [i_1] |= ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0 - 1] [i_2]));
                        arr_25 [i_0 - 1] [i_1] [i_0] = (~(((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 + 1] [3ULL] [i_2] [i_2 - 1] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))));
                    }
                    for (signed char i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        arr_28 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) 11635003294790793878ULL);
                        arr_29 [i_0] [i_1] = ((/* implicit */long long int) var_4);
                    }
                    arr_30 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                    var_22 = ((((int) var_15)) % (((((/* implicit */int) var_4)) % (((/* implicit */int) var_16)))));
                    var_23 = ((/* implicit */unsigned short) var_11);
                }
                for (unsigned int i_8 = 4; i_8 < 15; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_24 *= ((/* implicit */unsigned char) (-(var_0)));
                        arr_37 [i_8 - 4] [i_8 - 4] [i_0] [i_8 - 1] [i_8] [i_8 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_16)))));
                    }
                    arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_33 [i_0] [i_8 - 4]) : (arr_33 [i_0] [i_8 - 3])))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_8])) : (((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_4))))));
                }
                for (unsigned int i_10 = 4; i_10 < 15; i_10 += 3) /* same iter space */
                {
                    var_25 ^= ((/* implicit */unsigned short) (signed char)-103);
                    var_26 ^= arr_19 [i_0] [i_0] [i_0 + 1];
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((short) 1600487955)))));
                }
                arr_43 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0 + 1])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (arr_20 [i_0] [i_1] [i_1] [i_1] [2ULL] [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))))));
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            {
                                arr_52 [i_0] [i_0 + 1] [i_0] [i_1] [i_11] [i_12] [(unsigned char)4] = ((/* implicit */unsigned short) (((-(arr_34 [i_0 + 1] [i_1] [i_11] [(_Bool)1]))) % (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_11]))))) ? (((((/* implicit */_Bool) arr_51 [i_0] [4] [11] [i_0] [i_13])) ? (((/* implicit */int) var_4)) : (1600487955))) : (((/* implicit */int) var_8))))));
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 647416282U)) : (8996512394079056590ULL))))));
                                arr_53 [i_0] [i_1] [i_1] [i_12] [i_11] = ((((/* implicit */_Bool) 6811740778918757738ULL)) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_5))))) : ((+(((/* implicit */int) arr_5 [i_11] [i_0 - 1] [i_11] [i_11])))));
                                var_29 = ((short) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)55432))), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)225)))));
                            }
                        } 
                    } 
                    arr_54 [i_0] [i_0 - 1] [i_0] [i_0 + 1] = ((_Bool) ((var_9) ^ (((/* implicit */int) arr_21 [i_1] [i_0] [i_1] [i_1]))));
                }
            }
        } 
    } 
    var_30 = (+(((/* implicit */int) ((unsigned char) (signed char)71))));
}
