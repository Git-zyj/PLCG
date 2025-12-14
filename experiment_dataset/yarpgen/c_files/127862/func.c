/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127862
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) ((unsigned short) var_14))))));
                arr_5 [i_0] [i_1] [i_0] = arr_4 [i_0 - 1] [i_0];
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 568890415))));
                var_18 ^= ((/* implicit */int) var_1);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [9ULL] [i_0])))))) + (18446744073709551615ULL)))) ? (min(((-(18446744073709551598ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_19 *= var_4;
        arr_10 [(signed char)7] = ((((/* implicit */int) (unsigned char)99)) >> (((((/* implicit */int) (short)-1938)) + (1964))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_18 [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_3] [i_4])), (9209159345548790911ULL))))) & (min((((/* implicit */int) (unsigned short)41878)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_11 [i_3] [i_4])) : (568890411)))))));
            arr_19 [(unsigned short)0] = ((/* implicit */signed char) (((+(0LL))) - (max((arr_0 [i_4]), (arr_0 [i_3])))));
            var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_14 [12] [i_4])))) ? (-1978188389) : (((384056714) / (((/* implicit */int) (unsigned short)31891)))))) < (((/* implicit */int) var_8))));
        }
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_3]))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_13 [(signed char)3]))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_3] [i_6])) & (((/* implicit */int) (signed char)-30))));
            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) arr_12 [i_3] [i_6]));
            arr_25 [i_3] [i_3] [i_3] = var_11;
        }
        var_24 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_3] [i_3])) ? (arr_7 [i_3] [i_3]) : (((long long int) -1705018317)))), (((/* implicit */long long int) arr_12 [i_3] [i_3]))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_31 [i_7] [(signed char)3] [0LL] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_9 [i_3] [5]), (((/* implicit */long long int) var_8)))) > (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_27 [i_3] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_3] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_3] [i_7]))) : (max((((/* implicit */unsigned long long int) (short)-1919)), (0ULL)))))));
                    arr_32 [i_8] [i_7] [i_7] [i_3] = ((/* implicit */signed char) -568890416);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_35 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [(signed char)12])))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 9237584728160760694ULL)) && (((((/* implicit */_Bool) 822302993)) || (((/* implicit */_Bool) var_0)))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) / (((int) arr_34 [i_10] [i_7] [7ULL] [i_7] [(unsigned short)11]))));
                        arr_39 [i_10] [i_7] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : ((+(((/* implicit */int) var_8))))));
                        arr_40 [i_3] [i_8] [i_8] [i_8] &= ((/* implicit */long long int) 10ULL);
                        var_27 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((9237584728160760723ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_38 [i_3] [i_3] [i_8] [i_10] [i_10]))));
                    }
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (unsigned short i_13 = 3; i_13 < 22; i_13 += 4) 
            {
                {
                    arr_48 [15] [i_12] [i_12] [i_11] = ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_3)), (arr_42 [i_11])))))) ? (((((/* implicit */_Bool) arr_43 [i_12])) ? (2571306388755383191LL) : (((((/* implicit */_Bool) arr_45 [i_12] [i_12] [i_12] [i_12])) ? (arr_45 [i_12] [i_12] [0] [(unsigned short)20]) : (arr_45 [i_12] [8ULL] [i_13] [i_13 - 3]))))) : ((+(368560758973353034LL))));
                    arr_49 [i_12] [i_12] = ((/* implicit */signed char) 14766450097070875672ULL);
                }
            } 
        } 
        arr_50 [i_11] [16ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [i_11] [i_11]))));
        arr_51 [(unsigned short)24] &= ((/* implicit */unsigned long long int) (((((+(((((/* implicit */_Bool) (short)-1942)) ? (arr_45 [(signed char)6] [i_11] [i_11] [(signed char)6]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_45 [(unsigned short)18] [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) min((arr_41 [i_11]), (arr_41 [i_11]))))))) - (1)))));
    }
    var_29 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (int i_14 = 1; i_14 < 11; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_15 = 2; i_15 < 12; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65527)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25051))) & (var_7))) : (((/* implicit */long long int) (+(var_15)))))) ^ (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)25043)) >> (((((/* implicit */int) (signed char)-4)) + (8)))))))))))));
                        arr_62 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((arr_42 [17LL]) == (var_2)))), (arr_47 [i_15] [i_15 + 1] [i_14 - 1] [i_14])))) ? ((+(((/* implicit */int) (unsigned short)40490)))) : (((((/* implicit */_Bool) arr_1 [i_14 + 2] [13])) ? (arr_14 [i_16] [i_16]) : (((/* implicit */int) (signed char)-34))))));
                    }
                } 
            } 
        } 
        arr_63 [(unsigned short)8] [i_14 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_14 + 1])))))));
    }
    var_31 = var_6;
}
