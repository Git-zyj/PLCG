/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178518
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
    var_16 *= ((/* implicit */unsigned short) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)0))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 2146435072U)) : (var_5)));
        arr_4 [i_0] = (short)-11835;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 14; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_16 [i_1 - 1] [i_3] = ((/* implicit */unsigned long long int) 2367296802U);
                        var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_3])) == (((/* implicit */int) arr_5 [i_4] [9LL]))))) / (((/* implicit */int) arr_11 [i_1] [(unsigned short)1] [i_1 - 1] [i_3 - 1]))));
                        arr_17 [i_1 - 1] [i_2] [i_2] [i_3 + 1] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)1] [(unsigned short)1] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) 32767U)) ? (((/* implicit */unsigned long long int) 1927670494U)) : (var_5)))));
                        arr_18 [i_3] = (+(((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_3 + 1] [i_4])));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(_Bool)1])) == ((~(((/* implicit */int) (signed char)-1))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6 + 1] [i_1 - 1]))) - (var_0)));
                        arr_25 [i_1] [i_5] = ((/* implicit */signed char) 2367296802U);
                        arr_26 [i_6 + 1] [i_5] [i_5] [12LL] = ((/* implicit */unsigned long long int) var_6);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6669178222695256926LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (-6034983301428032833LL)));
                        arr_27 [i_1 - 1] [i_1] [i_1] [(unsigned short)4] [i_1 - 1] |= arr_15 [i_5] [i_5] [i_5] [i_5];
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (int i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))));
                            var_22 = ((/* implicit */signed char) arr_5 [i_9] [i_2]);
                            arr_34 [i_1 - 1] [10ULL] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1]))) : (arr_21 [i_7] [i_7] [i_7 + 1] [i_7 + 4])));
                            arr_35 [i_1] [i_2] [i_2] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_7 + 3] [i_7 + 2] [i_7 + 3])) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
                arr_36 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_29 [10ULL] [i_7 + 3] [i_7 + 1]))));
                arr_37 [i_1] = ((/* implicit */_Bool) var_5);
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_23 *= ((/* implicit */_Bool) (unsigned char)91);
                arr_41 [8LL] [i_2] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_10 - 1] [i_10] [i_10 - 1] [i_10]))));
                arr_42 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_40 [i_1] [i_10] [i_10]) >> (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [9])) || (((/* implicit */_Bool) var_0)))))) : (var_5)));
            }
            for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                arr_46 [i_11] [10ULL] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                arr_47 [i_1] [i_11] = var_7;
            }
        }
        arr_48 [i_1 - 1] = ((/* implicit */unsigned int) (-(max((arr_31 [i_1]), (arr_31 [(_Bool)0])))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
            {
                {
                    arr_54 [i_1] [i_1] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) arr_20 [i_12] [i_12] [i_12] [i_12]))))), (arr_28 [i_1 - 1])))) ? (((((((/* implicit */_Bool) var_5)) ? (var_1) : (var_2))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7172)) + (((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) || (((/* implicit */_Bool) arr_31 [i_13 - 1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (((+(arr_30 [i_1 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                                var_25 = ((/* implicit */unsigned long long int) arr_24 [i_13 - 1] [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1]);
                                arr_60 [i_15] [i_14] [i_13 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        for (int i_17 = 1; i_17 < 13; i_17 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) ^ (var_2)));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_7))));
                }
            } 
        } 
    }
    for (int i_18 = 0; i_18 < 13; i_18 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) arr_40 [i_18] [i_18] [i_18]);
        arr_67 [i_18] = ((/* implicit */short) var_5);
    }
    /* LoopSeq 1 */
    for (int i_19 = 3; i_19 < 14; i_19 += 4) 
    {
        arr_70 [(unsigned short)4] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)15))))))) ? (max((((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) arr_0 [i_19 - 1])))) : (((/* implicit */unsigned long long int) ((((arr_68 [i_19]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? (((((/* implicit */int) (unsigned short)58363)) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) max((arr_0 [i_19]), (arr_0 [i_19 + 2])))))))));
        var_30 -= ((((/* implicit */unsigned long long int) 2367296802U)) >= (18446744073709551615ULL));
        arr_71 [(_Bool)1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [(short)18]))));
        var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((/* implicit */int) arr_69 [i_19]))));
    }
}
