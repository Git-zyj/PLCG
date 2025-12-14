/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158580
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
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) <= (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(arr_2 [i_0] [i_1]))))));
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_5 [i_0]))))) - ((-(((/* implicit */int) arr_4 [i_0]))))));
                arr_7 [(unsigned short)0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [10U]))))))) > (max((arr_0 [i_0] [(short)7]), (arr_0 [(signed char)8] [i_1])))));
                arr_8 [i_0] [i_0] = arr_2 [i_0] [i_1];
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_1) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)199))))))));
    var_16 = ((/* implicit */int) min((min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_18 [i_2] [i_3] [i_3] [i_5] [i_6] [i_3]) : (((/* implicit */long long int) arr_10 [i_2]))))), (max((((/* implicit */unsigned long long int) var_5)), (arr_22 [i_2] [8U] [i_4] [i_5] [i_6] [(short)2]))))), (var_8)));
                                arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_2])), (arr_18 [i_2] [i_2] [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1])))) ? (min((((/* implicit */unsigned int) arr_17 [(_Bool)0])), (arr_10 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_2] [i_2] [i_2]) != (((/* implicit */long long int) arr_20 [i_2] [i_3] [i_2] [i_5] [i_6] [i_6]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3355460254U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30755)) >> (((((/* implicit */int) (unsigned char)118)) - (98)))))) : (1008806316530991104LL))) : (((/* implicit */long long int) ((int) arr_12 [i_5])))));
                                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_2] [i_3] [i_4])) * (((/* implicit */int) arr_9 [i_6]))))) ? ((-(-1008806316530991105LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5])))))))))) != (((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_6] [11U] [i_6] [i_3])) ? (max((arr_22 [i_2] [i_3] [i_3] [i_4] [i_3] [(signed char)4]), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (min((((/* implicit */unsigned long long int) 259067342U)), (arr_22 [i_6] [i_5] [(unsigned char)7] [16U] [(signed char)5] [(signed char)5])))))));
                                var_19 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255));
                                arr_24 [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) arr_16 [i_3] [i_4] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_2] [(signed char)6] = ((/* implicit */unsigned short) ((((arr_17 [i_2]) != (arr_17 [i_3]))) ? (min((arr_17 [i_4]), (arr_17 [i_4]))) : (max((arr_17 [i_2]), (arr_17 [i_3])))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_13 [i_2] [i_3]))));
                        arr_28 [i_2] [i_2] [i_4] [i_7] [i_7] [6] = ((/* implicit */signed char) min((((/* implicit */int) min((var_7), (arr_9 [12])))), ((~(((((/* implicit */_Bool) arr_21 [i_7] [i_4] [i_3] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [i_3])) : (((/* implicit */int) arr_12 [(unsigned char)6]))))))));
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_21 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (-1713858741841282440LL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) arr_10 [i_2]);
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)17]))) : (arr_14 [i_4] [i_4])))) ? (((/* implicit */int) arr_16 [i_3] [(unsigned short)0] [i_4])) : (((((/* implicit */_Bool) 10580288542275715958ULL)) ? (((/* implicit */int) arr_21 [i_2] [(short)6] [(signed char)12] [(unsigned char)15])) : (((/* implicit */int) arr_29 [(unsigned char)3]))))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_37 [(unsigned short)5] [i_3] [i_3] [16] [(short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned short)30536))));
                            arr_38 [9] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (100663296U) : (1056964608U)));
                        }
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(67108863ULL))))));
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((-3776543480313262619LL), (((/* implicit */long long int) (unsigned char)185))))) ? (((/* implicit */int) min((((((/* implicit */int) (short)-3488)) != (((/* implicit */int) arr_33 [i_2] [i_3] [i_3] [i_4] [i_8] [(unsigned char)4] [i_8])))), (((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) 7011733049528334816LL)) ? (((/* implicit */int) (unsigned short)22330)) : (1994499876)))));
                        arr_39 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_22 [i_2] [13U] [i_2] [13U] [i_2] [i_2])))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_32 [i_2] [i_2] [i_3] [i_4] [i_2])) != (((/* implicit */int) arr_32 [i_2] [i_2] [(unsigned short)2] [i_2] [i_2]))))), ((-(((/* implicit */int) arr_32 [i_2] [i_3] [i_4] [i_4] [i_2])))))) : (((((((/* implicit */int) arr_30 [i_2])) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) arr_12 [(signed char)2])) ? (((/* implicit */int) arr_19 [12] [i_4] [i_8])) : (((/* implicit */int) var_3)))) : ((~(arr_17 [i_3])))))));
                    }
                    arr_40 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) arr_34 [i_2] [i_2] [i_3] [i_3] [i_4])) : (((/* implicit */int) (short)23986))))))) + (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_4]))))), (((unsigned int) arr_26 [i_4] [i_4] [i_4] [i_4]))))));
                }
            } 
        } 
    } 
}
