/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100998
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
    var_13 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned long long int) arr_6 [1ULL] [i_1] [i_2 - 1] [i_3 + 1] [i_3] [i_4]);
                                var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3197035692U)) || (((/* implicit */_Bool) (short)-1))))), (min((var_9), (((/* implicit */unsigned long long int) arr_8 [i_4] [(_Bool)1] [i_2] [i_2 - 3] [i_0 - 1] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((max((((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_10 [i_0] [i_1] [i_1] [i_2] [i_5 + 1] [i_6]))))), ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5] [6LL] [i_1])))))), (((/* implicit */int) ((unsigned char) (unsigned short)24758)))));
                                var_17 = ((/* implicit */_Bool) min((3197035694U), (((/* implicit */unsigned int) (_Bool)1))));
                                var_18 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (3197035671U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_9)))) ? ((~(arr_5 [(signed char)9]))) : (((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15))) : (arr_7 [(unsigned char)1] [i_2])))))));
                                arr_15 [i_0] [4] [i_5] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) (unsigned short)40776)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24780)) && (((/* implicit */_Bool) -1994055885))))))), (((/* implicit */int) ((short) (-(arr_3 [i_0] [i_1])))))));
                                var_19 ^= ((/* implicit */unsigned long long int) (unsigned short)40778);
                            }
                        } 
                    } 
                    arr_16 [14LL] [1U] [9ULL] = ((/* implicit */short) min((arr_4 [i_0 + 1] [i_1] [i_0 + 1]), ((+((-(3197035692U)))))));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 + 1] [i_7] [i_1 + 1] [i_1 + 1] [i_7])) ? (((/* implicit */int) (unsigned short)52872)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
                    arr_20 [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) -1864662727)), ((-9223372036854775807LL - 1LL))));
                }
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 3; i_9 < 13; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)5858)) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24900)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1 + 1] [i_8] [i_9] [i_9]))) : (arr_7 [i_1] [i_9])))) : (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) 2624475400U)) && (((/* implicit */_Bool) 1097931602U))))))))));
                        arr_27 [i_8] [i_9] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))));
                    }
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((-804238006947223107LL), (((/* implicit */long long int) (short)-16))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 + 3])))))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_23 = ((unsigned int) arr_6 [i_0 + 4] [i_1] [i_1 + 1] [i_1 - 2] [i_11] [i_11]);
                        var_24 = ((/* implicit */signed char) arr_4 [i_0 + 1] [i_1] [i_10]);
                        arr_33 [i_0] = ((int) (short)-31835);
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1925056844012984158ULL)) && (((/* implicit */_Bool) (unsigned short)40777)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54580))) : (0ULL)))));
                        arr_36 [i_0] [i_1 - 1] [(unsigned char)10] [7U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) (unsigned char)15))) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_10] [i_12] [i_1 + 1] [i_0 + 1]))));
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -804238006947223107LL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (11489129203780852014ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24900))) : (14504708820054792623ULL));
                    }
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        var_27 ^= ((/* implicit */long long int) arr_29 [i_0] [i_10]);
                        /* LoopSeq 1 */
                        for (int i_14 = 1; i_14 < 14; i_14 += 3) 
                        {
                            arr_42 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 2] [i_1 - 1] [i_13] [i_14 - 1] [i_14 + 1]))) : (var_8)));
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7418487041214857371ULL))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 - 1] [i_14 - 1])) ? (arr_4 [i_0 + 4] [i_14 + 1] [i_0 - 1]) : (arr_4 [i_1 - 1] [i_10] [i_13])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 1; i_16 < 14; i_16 += 3) 
                        {
                            {
                                arr_48 [i_16 - 1] [i_15] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27))));
                                var_30 -= ((/* implicit */long long int) arr_30 [i_0] [i_1 + 1] [10U]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        arr_51 [13LL] [i_17] [13LL] [13LL] [13LL] [i_17] = ((/* implicit */long long int) arr_2 [i_0] [i_1 - 1]);
                        var_31 ^= ((/* implicit */unsigned short) var_5);
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            var_32 = ((/* implicit */short) arr_40 [(signed char)5] [i_1] [i_10]);
                            var_33 = 20ULL;
                        }
                        for (unsigned short i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -9223372036854775781LL)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) arr_38 [i_0 + 2] [i_1] [i_10] [i_17] [i_19] [i_0 + 2]))))));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_10] [i_17] [i_19])))))))));
                            var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 3] [i_1 - 1]))));
                        }
                    }
                }
            }
        } 
    } 
}
