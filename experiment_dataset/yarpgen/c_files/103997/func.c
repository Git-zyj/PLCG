/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103997
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
    var_14 = (short)8684;
    var_15 = ((/* implicit */_Bool) (unsigned char)175);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned short)38242))));
                var_17 = ((/* implicit */signed char) ((unsigned int) var_4));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 7; i_5 += 1) 
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (~((~(1ULL)))));
                        var_18 -= ((/* implicit */signed char) arr_2 [i_2]);
                    }
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_18 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) arr_16 [i_2] [(signed char)3] [i_3] [i_3] [9LL] [i_6]);
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 6144726852969839911LL))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_6] [i_2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5583535736068316935LL)) ? (arr_1 [9LL]) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (-1750091693923165717LL) : (((/* implicit */long long int) arr_10 [i_6] [i_2])))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_13), (((/* implicit */signed char) (_Bool)1)))))))))))));
                        var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) (short)-14775)), (min((((/* implicit */long long int) var_8)), (1LL)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_22 = ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)8684))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_19 [i_2]))));
                            arr_24 [9LL] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_28 [i_2] = ((/* implicit */long long int) var_3);
                            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_26 [i_2] [i_3] [i_3])) <= (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])));
                            arr_29 [(_Bool)1] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                        }
                        arr_30 [(unsigned short)6] [i_4] [i_3] [i_4] |= ((/* implicit */long long int) (unsigned char)185);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            arr_33 [i_3] [i_7] [8LL] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_10 [5LL] [i_10 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */int) var_13)) + (87))) - (10)))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)1))))))) : (0ULL)));
                            var_24 += ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((var_10) << (((((/* implicit */int) var_7)) - (99)))))))) & (((((/* implicit */_Bool) max((arr_22 [i_4] [i_7]), (((/* implicit */long long int) arr_26 [i_3] [i_3] [i_4]))))) ? (min((var_12), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) var_8))))));
                            arr_34 [i_2] [i_3] [(signed char)1] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 2ULL))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (signed char)74)))) : (arr_13 [i_2] [i_3] [(_Bool)1] [i_7] [i_10] [i_10 + 2])))) ? (((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)23012)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_2] [i_3] [i_4]), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_12)))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned char)144))));
                        }
                    }
                    arr_35 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) arr_27 [i_2] [i_2] [i_3] [i_4] [i_2])) : (((/* implicit */int) (unsigned char)246)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_38 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_11] [i_11] [i_2] [i_2]))) : (7971661570941140377LL)))) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_11])) : (((/* implicit */int) var_11))));
            /* LoopNest 3 */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            arr_46 [i_2] [i_11] [i_12] [i_13] [i_14] [i_2] = arr_7 [(_Bool)1] [i_11] [i_11];
                            arr_47 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-15253))));
                            arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_20 [i_2] [i_11] [i_12] [i_12] [i_12]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_26 |= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) max(((short)-2673), (var_0)))), (((((/* implicit */_Bool) -6311671119399016235LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3029547927U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_12)))))))));
            arr_51 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2939261064641451477LL)) ? (((((/* implicit */_Bool) min((var_0), ((short)14159)))) ? ((~(((/* implicit */int) var_3)))) : (-1569190398))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1223224241795217375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)9)))) : (((/* implicit */int) var_4))))));
        }
    }
    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
    {
        arr_54 [i_16] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_11))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            arr_57 [4ULL] [i_16] [i_17] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_55 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (405846865719601330ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_16])))));
            arr_58 [i_16] [(unsigned char)10] [i_16] = ((/* implicit */unsigned long long int) var_2);
        }
        var_27 = ((/* implicit */unsigned char) min((((unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    for (unsigned short i_18 = 2; i_18 < 12; i_18 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 5288475446435425636LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_18]))) : (arr_59 [i_18]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_60 [i_18])), (arr_1 [i_18]))))))) ? (((((/* implicit */_Bool) arr_60 [i_18 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_2 [i_18]), (var_0)))))) : (((/* implicit */int) (signed char)102))));
        arr_61 [i_18 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)118)), (max((var_12), (((/* implicit */unsigned long long int) var_5))))));
        var_29 = ((unsigned char) ((((/* implicit */_Bool) arr_60 [i_18 - 1])) ? (((/* implicit */unsigned int) arr_1 [i_18 - 1])) : (var_8)));
        arr_62 [i_18] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-3834113777093516662LL)))), (((((/* implicit */_Bool) var_5)) ? (arr_59 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_18 - 1]))))))));
    }
    for (unsigned short i_19 = 2; i_19 < 12; i_19 += 2) /* same iter space */
    {
        arr_67 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4038371457307021431LL)) ? (7436454617735857077ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))));
        /* LoopNest 2 */
        for (signed char i_20 = 3; i_20 < 12; i_20 += 1) 
        {
            for (unsigned char i_21 = 1; i_21 < 10; i_21 += 2) 
            {
                {
                    arr_76 [i_19] [(unsigned short)2] [i_20] [i_20] = ((/* implicit */unsigned char) 1535301519);
                    var_30 = ((/* implicit */unsigned short) min((max((((/* implicit */int) var_7)), (-1535301499))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)10361))) > ((+(9223372036854775807LL))))))));
                    var_31 = ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) arr_3 [i_19 - 2] [i_19] [i_19 - 1]);
    }
}
