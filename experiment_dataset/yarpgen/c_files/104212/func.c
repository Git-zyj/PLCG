/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104212
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [(unsigned short)9] = ((/* implicit */short) ((int) (unsigned short)10847));
        arr_3 [5LL] [i_0 + 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_20 = ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)-50)))) ^ (((((/* implicit */_Bool) 3649671160067671555LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (((((/* implicit */int) (unsigned short)2883)) >> (((1081581873) - (1081581863))))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_19 [i_1] [i_5] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) arr_12 [i_2] [i_4] [i_5]);
                            arr_20 [i_5] [i_5] [i_2] [i_5] [i_5] [i_4] [i_1] = ((/* implicit */unsigned long long int) max((1081581873), (((/* implicit */int) (unsigned short)2904))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (6259179266295325976ULL)))) < ((~(-1081581873)))));
                        }
                        var_22 -= ((/* implicit */signed char) ((unsigned long long int) ((arr_4 [i_1 - 1] [i_2]) / (((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_3])))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_24 [i_1 + 1] [i_1 - 2] [i_2] [i_3] [i_4] [i_1 - 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)20911)) ^ (((((/* implicit */int) (short)-20972)) - (-1081581874))))) << (((var_2) - (3987310178U)))));
                            var_23 ^= ((/* implicit */int) arr_23 [i_1] [(unsigned char)18] [i_2] [i_4] [i_6]);
                            var_24 += ((/* implicit */short) ((((/* implicit */int) (short)19893)) > (((/* implicit */int) (unsigned short)48759))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16777))) / (((((/* implicit */_Bool) (unsigned short)39238)) ? (1742531115U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39398)))))))) ? (((unsigned int) (unsigned short)2883)) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((-587297924) / (((/* implicit */int) (unsigned short)48758)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            var_26 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) + (((/* implicit */int) (unsigned short)2878)))))));
                            var_27 *= ((/* implicit */signed char) ((arr_21 [i_7 - 2] [i_2] [i_3] [i_7] [i_3] [i_3]) ^ (arr_21 [i_7 - 1] [i_7 - 1] [(unsigned short)11] [i_4] [(unsigned short)11] [(unsigned short)11])));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    {
                        arr_33 [11LL] [i_2] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_4 [i_8] [i_9])) == (arr_29 [i_1 - 2] [i_2] [i_2] [i_9])));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_4))) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) (-(1286704523)))))))));
                        var_29 = ((/* implicit */short) ((unsigned short) (unsigned short)58246));
                    }
                } 
            } 
            arr_34 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) arr_29 [i_2] [i_2] [i_2] [i_1]));
            var_30 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)2904)) < (-921716648)));
            arr_35 [i_1] [i_1] [i_2] |= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_23 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 2])) + (((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 1]))))));
        }
        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 22; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        {
                            arr_47 [i_12] [i_12] [i_11] [i_12] [i_12] = ((/* implicit */int) ((short) (unsigned short)48989));
                            var_31 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1]))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((unsigned long long int) var_18)))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [(unsigned short)3] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) ((short) (unsigned short)26051))))) ? (((((/* implicit */int) arr_25 [i_1 + 1] [i_10] [i_10] [i_1 + 1] [i_10] [i_1 + 1] [i_1 - 2])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)26038))))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_1]))))) == (((/* implicit */int) (unsigned short)16802)))))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                for (long long int i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((int) -1006056858)))));
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30077))) & (30ULL)));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) ^ ((~(((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39484)))))))));
                        }
                        var_37 -= ((/* implicit */short) ((((var_1) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1 - 1] [i_10])) + (3244)))));
                    }
                } 
            } 
        }
        for (long long int i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
        {
            arr_58 [(short)12] = ((/* implicit */unsigned short) var_10);
            var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [16ULL] [i_17] [i_17] [i_17] [i_17] [i_17] [i_1 - 2])) != (((/* implicit */int) var_12))))), (arr_25 [i_17] [i_17] [i_17] [i_17] [i_17] [i_1 + 1] [i_1 + 1])));
        }
        var_39 += ((/* implicit */unsigned long long int) var_9);
    }
    /* LoopNest 3 */
    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
    {
        for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                {
                    arr_66 [i_20] = ((/* implicit */unsigned long long int) (((!(((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) ? (max((arr_59 [i_20]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_19])))));
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_64 [i_20]) | (arr_61 [i_18] [i_18] [i_19])))) ? (((/* implicit */int) ((signed char) ((var_4) || (((/* implicit */_Bool) arr_64 [i_20])))))) : (1006056856)));
                }
            } 
        } 
    } 
}
