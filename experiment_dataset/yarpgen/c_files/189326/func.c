/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189326
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) max(((signed char)-113), ((signed char)120)))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_4))) << ((((-(((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1]))))))) - (2734129111U)))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_4] [i_3])) : (((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_3 [i_4] [i_3 - 2] [i_0 + 1]))))));
                                var_15 = (!(((/* implicit */_Bool) var_5)));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_4))));
                                arr_14 [i_3] [(_Bool)1] [i_3] [(signed char)7] [i_3] [2ULL] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_10)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 &= (-(var_1));
                        var_18 = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((short) arr_2 [i_0] [i_1] [i_0]))))), (((((/* implicit */int) arr_0 [i_0])) - (((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) (signed char)103)) - (80)))))))));
                        var_19 ^= ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)103)))) / ((-(((var_8) >> (((((/* implicit */int) (signed char)-121)) + (125)))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2] [i_2] [i_5]))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_9)))) == (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))))) : (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) arr_17 [i_0 + 2] [i_0 + 2] [4ULL] [4ULL] [i_0])) : ((-(((/* implicit */int) var_9))))))));
                    }
                    for (short i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        var_21 = (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (signed char)108))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2] [i_1])))))));
                        arr_23 [i_7] [i_7] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) (short)19718))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-36))))) : (arr_18 [i_0] [i_0 + 2] [i_0] [i_0]))) << (((((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) var_8))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)108))) : (var_5))) : (((/* implicit */long long int) ((var_3) << (((((/* implicit */int) (signed char)110)) - (106)))))))) - (72LL)))));
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [6LL] [i_0] [i_0 - 2] [i_0 + 2] [i_0] [i_0])))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [i_0 + 2])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_11 [i_2] [i_8])))))))))))));
                    }
                    var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) (signed char)-113)))))));
                    arr_26 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_1] [7U] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))))));
                }
            } 
        } 
    } 
    var_27 += (((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))) < ((+(((/* implicit */int) var_2)))));
    var_28 = ((/* implicit */unsigned int) (+(var_8)));
    var_29 = ((/* implicit */int) max((var_29), ((+(((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_9 = 2; i_9 < 16; i_9 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_9 + 1])) + (((/* implicit */int) arr_27 [i_9 + 1]))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9])) / (((/* implicit */int) arr_29 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((arr_31 [i_9]) + (9223372036854775807LL))) << (((var_3) - (1560818661U)))))));
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_9 - 2])) ? (((/* implicit */int) arr_28 [i_9 - 2])) : (((/* implicit */int) (signed char)-1)))))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9 - 1])) ? (((/* implicit */int) arr_27 [i_9 - 2])) : (((/* implicit */int) (signed char)-1))));
            arr_33 [i_9] [i_9] [i_10] |= ((/* implicit */unsigned short) (signed char)116);
        }
        for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((((/* implicit */_Bool) arr_41 [i_9] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_34 [i_11])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_30 [i_9 + 1]))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (var_8) : (((/* implicit */int) var_10))));
                        arr_43 [i_13] [i_11] [i_12] = ((/* implicit */unsigned short) ((var_9) && (((/* implicit */_Bool) arr_40 [i_9 - 2]))));
                        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-121))));
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) ((arr_37 [i_9] [i_9] [i_9]) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))));
            var_38 = ((/* implicit */long long int) var_7);
            arr_44 [i_9] [i_11] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_36 [i_11] [i_9])) ? (((/* implicit */int) arr_28 [i_11])) : (((/* implicit */int) var_9)))));
        }
        for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
            arr_47 [i_9] = ((((/* implicit */int) arr_27 [i_9 + 1])) + (((/* implicit */int) arr_27 [i_9 - 1])));
            var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_9 - 1])) != (((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_9 + 1] [i_14] [i_9]))));
        }
        /* LoopNest 3 */
        for (short i_15 = 1; i_15 < 14; i_15 += 1) 
        {
            for (short i_16 = 2; i_16 < 14; i_16 += 3) 
            {
                for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    {
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((unsigned int) ((unsigned short) arr_51 [i_17] [i_15] [i_17]))))));
                        var_42 *= ((/* implicit */signed char) ((_Bool) arr_30 [i_15 + 1]));
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (signed char)7))));
                    }
                } 
            } 
        } 
        var_44 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) % (arr_31 [i_9 - 2])));
        arr_57 [i_9] = ((/* implicit */int) (signed char)-121);
    }
}
