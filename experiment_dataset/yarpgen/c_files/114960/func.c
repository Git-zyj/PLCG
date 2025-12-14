/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114960
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
    var_20 = ((/* implicit */long long int) ((180875434U) % (var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_21 = var_4;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) arr_13 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 - 1]);
                                var_22 = ((/* implicit */long long int) max(((-2147483647 - 1)), ((~(arr_12 [i_4 - 1] [i_4 - 1] [i_4] [7ULL] [i_4] [i_4 - 1] [(signed char)1])))));
                                var_23 = ((/* implicit */unsigned int) var_19);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 3; i_5 < 9; i_5 += 1) 
                {
                    arr_18 [i_0] [6LL] [i_5] [i_0] &= ((/* implicit */short) (+(2147483638)));
                    arr_19 [i_0] [7U] [8] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) * (var_0))) + ((+(arr_4 [i_1] [i_1] [i_1])))))) ? (((var_7) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 1] [i_5 - 3] [i_5]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_5 - 3] [i_5 - 2])))))));
                    arr_20 [i_0] [i_1] [i_1] [6LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((1986751572045519148LL), (((/* implicit */long long int) var_7)))) % (-1900446064752154909LL)))) % (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) min((2147483623), (2147483632))))))));
                    var_24 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1900446064752154884LL)) ? (var_3) : (1453827050U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))) : (min((((/* implicit */unsigned int) arr_11 [i_1])), (2527075427U)))));
                    var_25 &= ((/* implicit */long long int) 2147483647);
                }
                for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_6 - 1])) >= (((/* implicit */int) arr_5 [i_6 + 1]))))) % (((/* implicit */int) arr_7 [i_0] [i_1] [2LL] [i_6 - 1]))));
                    var_27 = ((/* implicit */long long int) (unsigned char)215);
                    var_28 = ((/* implicit */unsigned short) arr_8 [i_0] [3U] [i_0] [i_0]);
                    var_29 = ((/* implicit */unsigned char) arr_6 [i_0]);
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 8; i_9 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_7])) ? (2620900805U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_7] [i_8]))))) : (((/* implicit */unsigned int) -1495896484))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (1900446064752154908LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_7] [(signed char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [(signed char)7] [(signed char)1] [i_0]))) : (2516844605U))))));
                                var_33 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 3860491547U)) && (((/* implicit */_Bool) var_8)))));
                                var_34 = ((/* implicit */unsigned long long int) arr_11 [9LL]);
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((1900446064752154901LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (-617065748) : (((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)4] [(signed char)4])))))));
                    arr_35 [i_0] [3] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) arr_33 [4LL]));
                }
                var_35 = ((/* implicit */long long int) var_5);
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) 2146435072U);
                                var_37 ^= ((/* implicit */short) min((((/* implicit */unsigned int) var_19)), (arr_21 [i_10] [i_1] [i_10])));
                                var_38 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [5LL]))))))) % ((~(1232448983U))))) << (((min((((var_19) ? (1232449009U) : (var_12))), (arr_21 [i_11 - 1] [i_10] [i_11 + 1]))) - (1232448982U))));
                                arr_44 [i_10] [(_Bool)1] [i_10] = var_4;
                                arr_45 [i_11] [i_0] &= ((/* implicit */unsigned long long int) ((signed char) 2147483647));
                            }
                        } 
                    } 
                    var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((1900446064752154908LL) % (((/* implicit */long long int) arr_36 [i_0] [i_0] [i_0])))), ((-(5845796535047785549LL)))))) ? (((/* implicit */long long int) 3307228762U)) : (max((((/* implicit */long long int) arr_10 [i_0] [(short)1] [i_0] [(short)1])), (min((var_0), (((/* implicit */long long int) arr_22 [8U] [8U] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            {
                                arr_51 [i_10] = ((/* implicit */unsigned char) ((1726444914U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))));
                                var_40 ^= ((/* implicit */unsigned long long int) 1986751572045519149LL);
                                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8773632790260849113LL)) ? (var_15) : (((((/* implicit */_Bool) var_7)) ? (-2123787793) : (((/* implicit */int) arr_38 [0] [6] [(unsigned short)4]))))))) && (((/* implicit */_Bool) ((arr_16 [i_13 - 1] [i_13] [i_13 + 1]) % (arr_16 [i_13 - 1] [i_13 + 1] [i_13 + 1]))))));
                                var_42 = ((/* implicit */long long int) (-2147483647 - 1));
                            }
                        } 
                    } 
                }
                arr_52 [(signed char)1] = ((/* implicit */unsigned short) arr_23 [i_0]);
            }
        } 
    } 
    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)15272)) || (((((((/* implicit */_Bool) 1985890948643590779LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (14540650923063292281ULL))) >= (((/* implicit */unsigned long long int) max((2148532223U), (var_5)))))))))));
    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2146435076U)) % ((-(var_14)))))) ? (6022502416549861486LL) : (((/* implicit */long long int) var_7))));
}
