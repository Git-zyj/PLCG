/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109395
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
    var_10 |= ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_11 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) max(((short)-14605), ((short)14605)))))));
                var_12 = ((/* implicit */short) min(((~(min((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) > (var_3))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (2121528729887981868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_13 = ((2121528729887981868ULL) >= (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_3] [i_4] [i_4 + 3])));
                            var_14 *= ((/* implicit */long long int) ((_Bool) arr_11 [i_0] [i_5 + 1] [i_4 + 3] [(_Bool)1] [i_5]));
                            var_15 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) var_5);
                            arr_20 [i_7] [i_3] &= ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    arr_23 [i_0] [i_0] [i_3] [i_8] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_1] [i_1 - 4] [i_1 + 1]))));
                    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2121528729887981883ULL)))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 3])) ? ((~(488562102859560459LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 3])))));
                        var_19 = ((/* implicit */unsigned int) var_6);
                        var_20 = var_2;
                        arr_26 [(short)7] [i_1] [i_3] [i_8] [i_9] [i_9] = ((/* implicit */long long int) arr_24 [i_1] [i_1] [i_3] [i_8] [i_9]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 2] [i_0])) ^ (((/* implicit */int) arr_0 [i_1 - 1]))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1 + 1] [(unsigned short)1] [i_1] [i_10])) ^ (((/* implicit */int) arr_9 [i_1 - 3] [i_10] [i_1] [(signed char)6]))));
                        arr_30 [i_0] [i_1 - 1] [i_3] [i_8] [i_1] = ((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_8]);
                    }
                    var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_3 [i_1] [i_3] [9LL])))));
                }
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    var_23 ^= ((unsigned short) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_6))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [(unsigned char)7] [i_1 - 4]))));
                }
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (~(((/* implicit */int) var_4)))))));
            }
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                var_26 ^= ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-103)) + (132))))) + (((/* implicit */int) (signed char)-95))))) & (var_3));
                arr_36 [(unsigned char)8] [i_1 - 3] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) max(((~(((/* implicit */int) (short)14605)))), (((/* implicit */int) min(((unsigned short)15413), (((/* implicit */unsigned short) arr_2 [i_1] [i_1]))))))));
            }
            arr_37 [i_0] [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [i_0] [i_0])), (17566335903396187018ULL)));
            var_27 = ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (2121528729887981868ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)34))))))) == (((/* implicit */unsigned long long int) var_3)));
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)102)) / (((/* implicit */int) var_4))))))))));
        }
        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 2) 
        {
            var_29 = ((/* implicit */signed char) min((((/* implicit */int) var_0)), (((((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (short)10530)) : (((/* implicit */int) (short)-12342)))) >> (((/* implicit */int) (_Bool)1))))));
            arr_41 [i_13] [i_13] = ((/* implicit */signed char) 3860563912U);
            var_30 = ((/* implicit */unsigned char) (unsigned short)53705);
            var_31 = ((/* implicit */signed char) -652293282417958638LL);
        }
        for (short i_14 = 3; i_14 < 13; i_14 += 1) 
        {
            arr_46 [i_0] [(short)11] [(unsigned char)10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) (signed char)-102))))) / (var_7))))));
            arr_47 [i_0] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11805)) - (((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((2121528729887981868ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))))))));
        }
        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            var_32 += ((/* implicit */_Bool) max((((/* implicit */long long int) min((((unsigned char) var_3)), (((/* implicit */unsigned char) arr_40 [i_0]))))), (((long long int) (+(((/* implicit */int) (signed char)-86)))))));
            var_33 = ((/* implicit */unsigned char) (signed char)-108);
            var_34 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) var_6)), (var_7))));
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0] [i_15] [i_0] [i_0] [(unsigned short)9]))))), (var_7))))))));
        }
        var_36 = (((+(min((((/* implicit */unsigned long long int) arr_45 [i_0] [13LL] [1U])), (arr_24 [i_0] [i_0] [6LL] [(_Bool)1] [(signed char)6]))))) * (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) 
    {
        arr_54 [i_16] [i_16] = ((/* implicit */short) ((var_6) ? (((488562102859560480LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_53 [(unsigned char)20])))))));
        var_37 += ((unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_52 [i_16])) : (((/* implicit */int) arr_52 [i_16]))));
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (signed char)103))));
        var_39 += ((/* implicit */long long int) ((unsigned char) arr_52 [i_16]));
    }
    var_40 -= ((/* implicit */long long int) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)16328)))), (var_2))))));
    var_41 = ((var_6) && ((!(((/* implicit */_Bool) (signed char)-1)))));
}
