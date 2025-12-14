/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160801
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = var_6;
                                var_18 = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)65357)) * (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) -2728195419336817525LL)) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 9223372036854775807LL);
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)0] [i_2]))) ^ (2728195419336817525LL))) << (((((unsigned long long int) -8559348602820541995LL)) - (9887395470889009620ULL)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_5] [15ULL] [i_1] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (140703128616960ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23913)))))) ? (18446603370580934656ULL) : (((/* implicit */unsigned long long int) -2728195419336817501LL))));
                                arr_17 [i_0] [i_1] [i_2] [(short)1] [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0])) / (arr_0 [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 18446603370580934655ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) : (1729725364U)))));
                                arr_18 [i_2] = ((/* implicit */unsigned char) min((((arr_5 [i_6] [i_5] [i_1] [i_0]) ^ (arr_5 [i_0] [i_2] [i_5] [i_6]))), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_6]) && (arr_4 [i_1] [i_5] [i_6]))))));
                                var_21 *= ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6] [i_5]);
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)27995))))) ? (((140703128616961ULL) / (arr_15 [i_6] [i_5] [i_2] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2827)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 16; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_7 + 2] [i_8]);
                                var_24 = ((/* implicit */unsigned char) arr_21 [(signed char)5] [i_1] [i_2] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (((var_11) | (((/* implicit */unsigned long long int) -2728195419336817501LL)))));
    /* LoopNest 3 */
    for (unsigned short i_9 = 2; i_9 < 15; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 2; i_11 < 15; i_11 += 3) 
            {
                {
                    arr_32 [i_9 - 2] [i_10] [i_11] [i_11] = ((((/* implicit */_Bool) 18446603370580934656ULL)) ? (((/* implicit */long long int) max((((/* implicit */int) var_12)), (((int) (short)13))))) : (((((/* implicit */_Bool) arr_24 [i_9 - 2] [i_9 - 2] [i_9 + 1] [1U] [i_11 + 2] [i_11])) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_9] [i_10] [i_9 - 2] [i_9 - 2] [i_11 + 1])) ? (((/* implicit */int) (_Bool)1)) : (var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        for (short i_13 = 4; i_13 < 14; i_13 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) var_0);
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned long long int) ((18446744073709551615ULL) << (((((((/* implicit */_Bool) arr_10 [i_9 + 1] [(short)17] [i_10] [i_11] [9ULL] [i_13 - 1])) ? (var_2) : (((/* implicit */int) (short)3)))) - (428960870)))))))));
                                arr_37 [i_9 - 2] [(unsigned short)9] [i_11] [i_9 - 2] [i_13] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(-2728195419336817525LL)))) ? (((var_11) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) 895985312U)))) == (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((16629570833852098771ULL) >> (((var_15) - (2168877336U)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((18446744073709551615ULL) >> (((/* implicit */int) (_Bool)1))));
                                arr_45 [i_9 - 2] [i_10] [i_10] [(unsigned char)15] [i_15] [i_11] [i_10] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 2728195419336817524LL)), (arr_23 [i_9 - 1] [i_9 - 1] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_14]))) * (((((/* implicit */_Bool) arr_23 [i_9 + 2] [10ULL] [i_10] [i_11 - 2] [i_11 + 2] [16LL])) ? (arr_23 [i_9 + 2] [9LL] [9LL] [i_11 - 2] [i_11 - 1] [i_11]) : (arr_23 [i_9 + 2] [i_9] [i_10] [i_11 + 1] [i_11 + 2] [i_15])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 16; i_16 += 4) 
    {
        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 1; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned int i_19 = 4; i_19 < 13; i_19 += 1) 
                    {
                        {
                            arr_58 [i_19] [(unsigned short)5] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_19 + 2]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 18446744073709551599ULL)))) : (2728195419336817524LL))))));
                            arr_59 [i_16] [i_17] [i_18] [i_19] |= ((/* implicit */long long int) min((3ULL), (14575614695192133743ULL)));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2728195419336817528LL)), (arr_21 [i_17] [(_Bool)1] [i_16] [i_16] [i_16])))) ? (((arr_0 [i_16]) - (arr_0 [i_16]))) : (((arr_0 [i_17]) - (((/* implicit */int) arr_26 [i_16] [i_17]))))));
            }
        } 
    } 
}
