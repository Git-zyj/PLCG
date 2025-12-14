/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123562
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 3] [i_2] [i_0 - 1]))) | (((9223372036854775807LL) >> (((arr_6 [i_0]) + (1396245714))))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_8 [i_0])))) ^ ((~(((/* implicit */int) arr_7 [i_0] [i_0] [4LL] [i_0])))))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 3] [i_2] [i_0 - 1]))) | (((9223372036854775807LL) >> (((((arr_6 [i_0]) + (1396245714))) - (1488617518))))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_8 [i_0])))) ^ ((~(((/* implicit */int) arr_7 [i_0] [i_0] [4LL] [i_0]))))))))));
                            arr_13 [i_0] [(short)6] [i_2] [i_3] [3LL] = ((/* implicit */unsigned short) arr_2 [i_0]);
                            arr_14 [0] [i_0] [i_3] = ((/* implicit */unsigned char) min((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) arr_5 [i_2 + 2])))), (9223372036854775787LL)));
                            var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23810))) | (((((/* implicit */long long int) 134217728)) | ((-9223372036854775807LL - 1LL)))))));
                            arr_15 [i_0] [i_1] [i_0] [(_Bool)1] [i_2 + 1] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [10ULL] [i_0])) ? (var_15) : (var_7))) | ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))))))) | (var_7)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_18 += ((/* implicit */int) max(((unsigned char)159), (((/* implicit */unsigned char) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned long long int) var_15);
                            var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (unsigned char)87))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) min(((unsigned char)168), ((unsigned char)86)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4829014066673334340LL)) + (((((/* implicit */_Bool) (unsigned char)99)) ? (12173501720527511006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) (short)-27109)) ? (((/* implicit */unsigned long long int) ((int) 12173501720527510999ULL))) : (var_2))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (var_4)))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775791LL)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (((/* implicit */int) var_13)))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 8; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-31))));
                            var_23 += ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_22 [i_7 + 3] [i_0 - 1])))));
                            var_24 = ((/* implicit */short) arr_20 [i_0 - 1] [i_1] [i_1] [i_7 + 1]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) var_12);
                                var_26 = ((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_0 - 1] [i_9 + 1])) * (((/* implicit */int) arr_21 [i_0 - 1] [i_9 + 1])))) * (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */int) (short)9817)), (arr_6 [i_0]))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_8] [i_9] [(short)10])) ? (((/* implicit */int) arr_29 [4LL] [i_1] [i_1] [i_8] [i_9 + 1] [i_10])) : (((/* implicit */int) arr_8 [i_0]))))))));
                                var_27 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (11434912291940502548ULL))))))) : (((int) arr_17 [(short)5] [i_0 - 1] [i_0]))));
                                var_28 = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_0] [i_9])) || (arr_20 [i_1] [i_1] [i_8] [i_8])))));
                                arr_35 [8] [i_8] [0] [i_0] [0] = ((/* implicit */short) (~((-(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 22; i_15 += 2) 
                        {
                            {
                                arr_50 [i_11] [i_11] [(unsigned char)14] [i_14] [i_11] = ((/* implicit */unsigned short) var_13);
                                arr_51 [i_11] [i_11] [i_13] [i_14] [i_15 - 1] [i_15] [(unsigned short)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_14] [(unsigned short)13] [i_11] [i_11])) ? (((unsigned int) 12173501720527510999ULL)) : (2969513919U)))) || ((!(((/* implicit */_Bool) ((int) (short)17702)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((int) ((min((((/* implicit */unsigned long long int) (unsigned char)90)), (6273242353182040607ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) / (arr_53 [i_16] [2] [i_16]))))))))));
                                var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_37 [i_17] [i_17])) ? (var_15) : (((/* implicit */long long int) arr_58 [i_11] [i_11] [i_11] [19])))) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_11] [(unsigned short)8])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 4294967295U)) | (var_7))) & (((((/* implicit */_Bool) arr_54 [i_11] [i_12] [i_16] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31551))) : (var_10)))))) : (((unsigned long long int) 936346871))));
                                var_31 &= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [18])))))));
                                arr_63 [i_11] [12] [12ULL] [(unsigned char)8] [i_18] [i_18] |= ((/* implicit */short) max((((arr_47 [i_18 - 1] [i_18 - 1] [i_18] [i_18 - 1] [i_18]) ? (arr_56 [i_18 - 1] [7LL] [i_18] [i_18 - 1] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_60 [i_18 - 1] [i_18] [i_18] [i_18 - 1] [(unsigned short)21])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = var_6;
    /* LoopNest 3 */
    for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 1) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                {
                    arr_75 [(unsigned short)4] [(unsigned short)4] |= ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_59 [i_19 + 2] [i_19] [i_20] [i_21] [(signed char)22])) && ((_Bool)1))))) && (((/* implicit */_Bool) arr_40 [(unsigned short)14] [(unsigned short)10] [i_21 + 1]))));
                    /* LoopNest 2 */
                    for (short i_22 = 2; i_22 < 13; i_22 += 3) 
                    {
                        for (int i_23 = 0; i_23 < 14; i_23 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */short) max((var_33), (var_8)));
                                var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_78 [i_19] [i_19 + 1]), (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)79)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_77 [i_19 + 1] [i_20] [(unsigned short)5] [i_21] [i_23] [i_23]), (((/* implicit */unsigned int) var_12)))))))) : (((/* implicit */int) max((((((/* implicit */_Bool) arr_55 [(short)22] [i_23] [i_19] [(unsigned char)3] [(unsigned short)5])) || (((/* implicit */_Bool) -936346851)))), ((!(arr_42 [i_19] [(unsigned short)9] [2]))))))));
                                var_35 = ((/* implicit */short) ((long long int) (unsigned short)7602));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
