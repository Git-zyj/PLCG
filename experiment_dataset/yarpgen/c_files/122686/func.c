/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122686
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
    var_18 ^= ((/* implicit */short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) / (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))));
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_5] [i_1] = ((/* implicit */signed char) ((arr_8 [i_0] [i_1]) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_13 [i_0] [10] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_21 ^= ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((+(arr_8 [i_6] [i_1]))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) -12))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((long long int) var_10)))));
                            var_24 = ((/* implicit */short) (((_Bool)1) ? (2319243557395431238ULL) : (((/* implicit */unsigned long long int) -2147483646))));
                        }
                        var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (16776704ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0 - 2] [i_0 - 2] [(_Bool)1])))));
                        var_26 = ((/* implicit */_Bool) 2147483647);
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((int) ((max((16776704ULL), (((/* implicit */unsigned long long int) 1099511627775LL)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-1)))))))))));
                        arr_21 [i_0 + 2] [i_0] [i_0] [i_0 + 2] = min((min((min((6579113362876365140ULL), (((/* implicit */unsigned long long int) 1099511627775LL)))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7])))), (((/* implicit */unsigned long long int) ((int) arr_6 [i_0]))));
                    }
                }
                for (int i_8 = 1; i_8 < 15; i_8 += 2) 
                {
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_15 [i_8] [i_8] [i_8]), (arr_15 [i_0] [i_0] [i_0 - 2])))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)167)) - (((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) var_2)) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_3 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                    var_28 -= ((/* implicit */unsigned int) ((int) (~(var_3))));
                    arr_25 [i_0 + 1] [2] [(short)0] &= ((/* implicit */int) ((_Bool) max((4433230883192832ULL), (((/* implicit */unsigned long long int) (unsigned char)105)))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_9] [i_0]);
                    var_30 = ((/* implicit */unsigned short) var_17);
                    /* LoopSeq 4 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_31 &= ((/* implicit */unsigned long long int) (+(4294967293U)));
                        var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_1]))) - (arr_5 [i_0 + 2] [i_0])));
                    }
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_33 [i_0] [i_0 + 1] [i_0 + 2]) % (arr_33 [i_0] [i_0 - 1] [i_0 + 2])));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [7LL])) ? (arr_15 [i_0] [i_1] [(unsigned short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)0] [i_11])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (18442310842826358785ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_9] [i_1]))))))));
                        var_34 &= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6869))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_28 [(short)6] [(signed char)14])) : (arr_13 [(_Bool)1] [i_1] [(signed char)6]))) : (arr_29 [i_9] [i_9] [10] [i_9]));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_12]))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0] [i_0 + 1]) : ((((_Bool)1) ? (arr_30 [i_12] [i_12] [i_0] [i_12] [i_12]) : (((/* implicit */int) (_Bool)1))))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_13 [i_0] [(_Bool)1] [i_0]))) ? (((/* implicit */unsigned long long int) 844424930131968LL)) : (var_6)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                        {
                            arr_42 [i_9] [i_0] [i_0] = -1058614173;
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_9] [i_12])) | (arr_39 [i_0] [i_0] [i_9] [i_12] [i_0] [i_13])))) ? (arr_17 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13)))));
                            var_39 &= ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_40 = ((/* implicit */unsigned int) ((int) var_10));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) ((((arr_40 [i_0] [i_0] [i_0] [i_0] [i_14]) * (arr_5 [i_1] [i_0]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14789)) ? (-9223372036854775793LL) : (((/* implicit */long long int) arr_28 [i_0] [i_14])))))));
                            var_42 -= ((/* implicit */long long int) var_5);
                        }
                    }
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        var_43 -= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_15])) : (((/* implicit */int) arr_12 [14ULL] [i_1] [i_9] [i_15] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [(short)10] [i_15] [i_15]))) : (arr_19 [i_15])));
                        arr_49 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_15 [(_Bool)1] [(_Bool)1] [i_9])))) ? (arr_36 [i_1] [i_0] [i_1]) : (arr_39 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
                        var_44 = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_0] [i_1]))));
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_0] [i_0 - 1]));
                            var_46 ^= ((/* implicit */unsigned int) arr_48 [i_0 - 1]);
                        }
                        for (int i_17 = 0; i_17 < 16; i_17 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-127))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (4294967295U)))) : (var_1)));
                            var_48 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_15])) ? (arr_19 [i_15]) : (arr_19 [i_15])));
                            arr_55 [i_0] = ((/* implicit */unsigned char) var_9);
                        }
                    }
                    var_49 = ((((/* implicit */_Bool) 18442310842826358788ULL)) ? (((/* implicit */int) arr_34 [i_0] [i_0 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) (signed char)-126)));
                }
            }
        } 
    } 
}
