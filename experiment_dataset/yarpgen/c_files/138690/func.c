/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138690
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
    var_10 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_1)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_3] = (-(((/* implicit */int) (short)4064)));
                        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_14 [i_4 + 2]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_13 -= ((/* implicit */unsigned long long int) ((signed char) (short)4075));
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_4 - 2] [i_4 - 1])) : (((/* implicit */int) ((unsigned char) var_6)))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_15 |= ((/* implicit */short) ((unsigned char) var_6));
                        arr_21 [i_6] [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4064)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4062))) : (4294967295U)));
                    }
                    var_16 = ((/* implicit */unsigned short) var_8);
                    var_17 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_5))))));
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95)))))));
        var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_7] [i_7]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)127))))))))));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) + (3U)));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_7] [i_8 - 1] [i_8 + 2] [i_7 - 1] [i_8])) ? (35184103653376ULL) : (((/* implicit */unsigned long long int) arr_9 [i_8] [(short)7] [i_8 + 1] [i_7 - 1] [i_7])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_7] [i_7] [i_8 + 2] [i_7])) & (((/* implicit */int) var_5)))))));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    var_23 ^= arr_16 [i_7] [i_7] [i_8] [i_8] [(signed char)8] [i_10] [11U];
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                }
            }
            var_25 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_8 + 2])))) && (((/* implicit */_Bool) max((var_5), (((/* implicit */short) arr_2 [i_7] [i_8]))))))))));
            arr_33 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5940)) && (((/* implicit */_Bool) ((unsigned int) var_8)))));
            var_26 &= ((/* implicit */unsigned long long int) 2);
        }
        var_27 *= ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */short) arr_8 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])), (var_5)))), ((-(((/* implicit */int) arr_30 [i_7 - 1] [i_7 + 1] [i_7 - 1]))))));
        var_28 -= ((/* implicit */signed char) arr_19 [i_7] [i_7 - 1] [i_7 + 1]);
    }
    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            arr_40 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_39 [i_12]))));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 15; i_13 += 4) 
            {
                arr_44 [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) arr_37 [(signed char)6] [i_12]);
                arr_45 [i_11] [i_13] [i_12] [(signed char)2] = ((/* implicit */long long int) (signed char)1);
                var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)97))));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    arr_48 [i_11] [i_12] [i_11] [i_13] = arr_46 [(short)8] [i_12] [i_13 - 1] [i_14];
                    arr_49 [i_13] [i_12] [i_12] [i_14] [i_14] [i_13] = ((/* implicit */unsigned char) arr_42 [i_11] [i_12] [i_11] [i_12]);
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) arr_35 [i_11])) ? (arr_38 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_11] [(unsigned short)6] [i_11]))))))))));
                    var_31 -= ((/* implicit */unsigned short) (short)-4064);
                    var_32 = ((/* implicit */signed char) (-(arr_37 [i_11] [i_13 + 2])));
                }
                for (int i_15 = 4; i_15 < 14; i_15 += 3) 
                {
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_3))));
                    arr_52 [i_11] [i_13] [i_12] [i_12] [i_13] [i_11] = ((signed char) arr_42 [i_11] [i_11] [i_15] [i_13]);
                }
                for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (((((/* implicit */_Bool) arr_37 [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (11U))))))));
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_54 [i_13 + 1] [i_13 + 2] [i_12] [i_11]))));
                }
                var_36 = ((/* implicit */unsigned int) ((arr_37 [i_11] [i_11]) != (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
            }
        }
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (((long long int) (!(((/* implicit */_Bool) var_5))))))))));
        arr_56 [i_11] = ((/* implicit */short) (-(4294967281U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            arr_60 [i_17] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                for (signed char i_19 = 2; i_19 < 16; i_19 += 3) 
                {
                    for (short i_20 = 2; i_20 < 16; i_20 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_58 [i_19 - 2] [i_19 - 1]))));
                            var_39 ^= ((/* implicit */int) ((((long long int) arr_54 [(unsigned char)1] [i_18] [(signed char)10] [i_20])) ^ (arr_67 [i_20] [i_20] [i_20] [i_20] [i_20 + 1])));
                            var_40 -= ((/* implicit */long long int) arr_61 [i_20 + 1]);
                        }
                    } 
                } 
            } 
            var_41 += ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4070))) | (arr_42 [i_17] [i_17] [(signed char)14] [i_11])));
        }
        arr_69 [i_11] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_66 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))) == (((/* implicit */int) (short)31935))));
    }
    var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((signed char) ((short) (signed char)-122))))));
    var_43 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) ^ (var_6)));
}
