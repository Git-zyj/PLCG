/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174508
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
    var_12 = ((/* implicit */signed char) var_9);
    var_13 -= ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_4))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) ((short) var_1));
                        var_16 = ((/* implicit */long long int) var_6);
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)23232)) ? (((/* implicit */long long int) arr_0 [11U])) : (-7372332148881078223LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)6] [i_0]))))) & (((/* implicit */long long int) ((unsigned int) 536608768)))));
                        var_18 = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_9 [i_2 - 2] [(short)8] [i_2 - 3] [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) var_9))));
                        var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                        var_20 = ((/* implicit */unsigned long long int) ((_Bool) (+(((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (signed char)41)) : (1889227490))))));
                        var_21 = ((/* implicit */int) min((((/* implicit */long long int) (-(((int) 7372332148881078222LL))))), (var_3)));
                    }
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_22 += ((/* implicit */long long int) max((max((((/* implicit */int) var_8)), (min((((/* implicit */int) var_4)), (var_2))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        /* LoopSeq 4 */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
                            arr_14 [i_0] [0U] [i_2] [i_5] [i_6] = ((/* implicit */short) ((int) ((short) max((((/* implicit */long long int) var_6)), (var_3)))));
                            var_24 ^= ((/* implicit */_Bool) var_5);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */short) var_8);
                            arr_17 [i_0] [9ULL] [i_2] [i_0] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_7 [i_1] [i_2 - 3] [i_2 + 1] [i_7])))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_5))));
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_7] [i_5] [i_2] [(_Bool)1]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */int) arr_6 [i_7]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [7LL] [i_0] [i_1] [i_2] [i_5] [i_8]))) ? (15532512713768077156ULL) : (arr_13 [i_0] [i_1] [i_2] [i_5] [(signed char)9])));
                            var_29 = ((/* implicit */long long int) var_10);
                            var_30 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8] [0LL] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_8])) : (arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] [i_5] [1U]))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 10; i_9 += 3) 
                        {
                            var_31 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18278465000654262964ULL)) ? (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */int) arr_21 [(signed char)9] [(signed char)6] [i_5]))))) : (arr_19 [i_0] [5LL] [(short)5] [i_0] [5ULL])))) ? (((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) var_2)), (-7372332148881078211LL))))) : (min((-7372332148881078233LL), (((/* implicit */long long int) ((_Bool) (signed char)-46)))))));
                            var_32 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_1] [i_2] [i_5] [i_9]), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) arr_6 [5ULL])) : (((/* implicit */int) var_0)))))));
                        }
                        var_33 ^= var_11;
                    }
                    arr_24 [i_0] [(unsigned short)2] [10ULL] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_16 [i_0])), (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_9 [i_0] [i_0] [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 1; i_12 < 8; i_12 += 4) 
                {
                    arr_35 [i_10] [i_12] [i_12] = ((/* implicit */unsigned int) var_5);
                    var_34 = ((/* implicit */signed char) min((var_34), (((signed char) ((((/* implicit */unsigned int) -248192046)) - (603048691U))))));
                }
                for (int i_13 = 1; i_13 < 11; i_13 += 4) 
                {
                    var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6431406702331664105LL)) ? (((/* implicit */int) arr_7 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_7 [i_13 + 1] [i_13 + 1] [i_13] [(signed char)4]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_13 + 1] [i_13 - 1] [(unsigned short)5] [10ULL]))) > (var_1))))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) - (min((arr_9 [i_10] [i_10] [5LL] [i_10]), (((/* implicit */long long int) var_8))))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_13] [i_13] [i_13 + 1] [i_13])) ? (7372332148881078233LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [8])))))) ? ((-(((/* implicit */int) arr_4 [(_Bool)1])))) : (((/* implicit */int) max((arr_4 [8]), (((/* implicit */unsigned short) (_Bool)0)))))));
                }
                arr_39 [i_10] = ((/* implicit */unsigned long long int) arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_10))));
            }
        } 
    } 
}
