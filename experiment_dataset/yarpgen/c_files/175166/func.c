/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175166
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [(unsigned short)5] [(unsigned short)5] [i_2] [i_3] [i_3] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) (short)-27827))))) ? (((((/* implicit */int) (unsigned short)24917)) | (((/* implicit */int) (unsigned short)16814)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_3])))))));
                                var_15 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) + (2147483647))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_1])), ((unsigned short)27034)))) - (59654)))));
                                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 951164145)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)-113))))) ? (min((((/* implicit */int) ((((/* implicit */int) arr_6 [(unsigned short)2] [(unsigned short)2] [i_0] [i_3])) < (((/* implicit */int) var_1))))), (((arr_11 [i_0] [i_1] [(unsigned short)6] [(unsigned short)6] [i_0]) ? (((/* implicit */int) (unsigned short)3049)) : (((/* implicit */int) (signed char)-112)))))) : (var_8)));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_2] = ((/* implicit */unsigned short) 951164145);
                }
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_4 [i_0] [i_1])))) / (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_5])) < (((/* implicit */int) arr_16 [i_0] [i_1]))))) * (((/* implicit */int) arr_11 [i_1] [i_5 - 1] [i_5] [i_5 + 1] [i_0])))))));
                    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4087858341U)))))));
                }
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max(((unsigned short)2361), (arr_4 [i_0] [(short)0]))))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_21 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) (unsigned short)33525);
                    var_21 -= ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_8 [i_0] [i_0])))))) ? (((/* implicit */int) arr_20 [(unsigned short)8] [i_1] [(unsigned short)8])) : (((/* implicit */int) min((arr_8 [i_0] [i_6]), (((/* implicit */unsigned short) ((var_3) < (((/* implicit */int) var_5))))))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0] [i_6]))))) * (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned short)15225))))));
                }
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) (~((((+(((/* implicit */int) (unsigned char)30)))) >> (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_7]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((unsigned short) (unsigned short)30689))))));
                                var_25 = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                }
                for (int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 3; i_12 < 13; i_12 += 3) 
                        {
                            var_26 |= ((/* implicit */unsigned short) ((int) arr_18 [i_10 + 2] [i_10 + 2]));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (arr_5 [i_0] [i_0] [i_0])));
                            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned short)38509))))) ? (((/* implicit */int) arr_8 [i_10 + 3] [i_10 + 3])) : (arr_2 [i_12 - 3])));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((signed char) var_1)))));
                        }
                        arr_40 [i_0] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)20462)) == (((/* implicit */int) (unsigned short)15225))))) << (((((/* implicit */int) arr_3 [i_11])) - (29113)))));
                        var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)50191)) : (((/* implicit */int) (unsigned short)27025))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        arr_44 [i_10] [i_1] [i_10 + 1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(signed char)6] [(signed char)6] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-11637)) : (((/* implicit */int) (unsigned short)27027)))) : (258290809)));
                        arr_45 [i_0] [i_1] [i_10 + 2] [i_10] = ((/* implicit */signed char) ((short) arr_11 [i_10] [i_10] [i_10] [i_10 + 3] [i_10]));
                        var_31 = ((/* implicit */short) ((var_10) ? (((/* implicit */int) arr_12 [i_13] [i_13] [i_13] [i_0] [(unsigned short)11] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_32 += ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_10 + 1] [i_10])) > (((/* implicit */int) (unsigned short)27025))))), (min((arr_30 [i_10 + 1] [i_10 + 1]), (arr_30 [i_10 + 1] [i_10 + 2])))));
                        arr_48 [i_0] [i_0] [i_0] [i_1] [6U] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)20328)))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) << (((((((-951164145) + (2147483647))) >> (((/* implicit */int) var_6)))) - (1196319499)))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)59558))) : (((/* implicit */int) ((short) (unsigned short)18551))))))));
                    }
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-81)) ? ((~(((/* implicit */int) (unsigned short)55562)))) : (((/* implicit */int) (signed char)-50))));
                    var_35 = ((/* implicit */unsigned char) (((_Bool)0) ? (var_3) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
    {
        var_36 = ((/* implicit */short) max((var_36), (arr_51 [i_15])));
        var_37 -= ((/* implicit */signed char) arr_51 [8]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        arr_54 [i_16] = ((((/* implicit */_Bool) (unsigned short)57507)) ? (((/* implicit */int) (unsigned short)5150)) : (((/* implicit */int) (unsigned char)67)));
        arr_55 [(unsigned short)8] [i_16] = ((/* implicit */signed char) var_7);
    }
}
