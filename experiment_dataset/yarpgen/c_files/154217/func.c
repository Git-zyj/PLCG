/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154217
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */long long int) (!((_Bool)1)));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+((~(max((((/* implicit */unsigned int) var_12)), (1776821910U))))))))));
                        arr_12 [i_2] [i_2] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1980548438U))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned long long int) min(((+(var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_5 [i_4] [i_2] [i_1] [(signed char)15])))) : (((/* implicit */int) ((signed char) arr_10 [i_0] [i_1] [i_2]))))))));
                        var_17 -= ((/* implicit */unsigned char) max((max((1980548458U), (((/* implicit */unsigned int) (signed char)-39)))), (((/* implicit */unsigned int) -965821184))));
                    }
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((var_4), ((unsigned char)173))))));
                    arr_16 [i_0] [i_1] [i_0] [2U] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_2] [i_1]) ? (arr_0 [i_0]) : (2156557136949794826ULL)))) ? ((~(4294967295U))) : (((/* implicit */unsigned int) arr_2 [i_0])))) ^ (var_6)));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 4; i_6 < 22; i_6 += 2) 
                        {
                            var_19 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(var_9)))) ? ((~(var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_6])))))))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 2147483615)) ? (((/* implicit */unsigned int) var_10)) : (var_6))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_19 [i_0] [i_1] [i_2] [i_5] [i_6]) : (-1864251670))))))), (max(((~(-5952644529399974357LL))), (((/* implicit */long long int) ((int) var_6))))))))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_7 = 4; i_7 < 21; i_7 += 1) 
                        {
                            arr_24 [i_0] [6ULL] [6ULL] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_7 + 1] [i_5] [i_2] [i_1] [(_Bool)1]);
                            arr_25 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0]))))) : (min((((/* implicit */long long int) arr_7 [22ULL] [i_1] [i_0 + 1] [i_7 - 2])), (arr_11 [i_7 - 3] [i_5]))));
                            var_21 *= (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((-1LL) + (2LL)))))) ? (min((((/* implicit */unsigned long long int) (signed char)-99)), (var_8))) : (((/* implicit */unsigned long long int) (-(arr_6 [i_2] [i_1] [i_0])))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            arr_29 [i_1] [i_1] [i_2] |= arr_15 [i_0] [i_5] [i_2] [i_0];
                            var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (arr_0 [i_8]) : (arr_0 [i_8 + 1]))) | (((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 - 1])))))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 21; i_9 += 4) 
                        {
                            arr_32 [i_0] [(unsigned char)2] [i_0 - 2] [i_5] [i_1] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0] [i_1] [i_2])), (var_12)))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) arr_28 [i_0] [i_5] [4] [i_0]))))));
                            var_23 ^= ((/* implicit */int) min((((unsigned long long int) min((((/* implicit */int) (unsigned char)255)), (2147483615)))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? ((-(arr_2 [i_0 - 1]))) : (((/* implicit */int) ((arr_28 [i_0 + 1] [i_2] [i_9 - 1] [i_5]) >= (((/* implicit */unsigned int) var_2)))))));
                            var_25 += ((/* implicit */signed char) ((((max((((/* implicit */unsigned long long int) 1478496888)), (arr_0 [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0 + 1])) >> (((1559433297) - (1559433294)))))))) < (((/* implicit */unsigned long long int) ((int) arr_31 [i_0] [i_1])))));
                        }
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned long long int) arr_19 [i_10] [11ULL] [i_0] [i_1] [i_0]);
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [8] [i_1])) ? (arr_19 [0ULL] [i_5] [i_2] [10LL] [i_0 - 2]) : (max((1559433292), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))) <= (9734081472263130771ULL)))))))))));
                        }
                        var_28 = ((/* implicit */int) (-((~(((((/* implicit */long long int) arr_34 [i_5] [i_5] [i_1] [i_1] [(signed char)10] [(signed char)10])) | (arr_20 [i_0] [i_1] [i_2] [i_1] [8])))))));
                        var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (arr_21 [i_0] [i_1] [i_2] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))), (((/* implicit */unsigned long long int) (((~(607830593U))) < (((/* implicit */unsigned int) arr_18 [i_2])))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-((-(((/* implicit */int) arr_14 [i_1])))))))));
                        var_31 = ((/* implicit */int) min((var_31), (((int) ((int) ((arr_23 [(signed char)4] [(signed char)4] [i_2] [0ULL] [i_1]) + (((/* implicit */int) var_4))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3543281750547662551ULL)) ? (18446744073709551615ULL) : (10105725621994994799ULL))))));
                            arr_43 [i_12] [(unsigned char)14] [20LL] [i_11] [i_12 + 2] [i_1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_37 [i_0] [i_11] [6U] [i_0] [i_1] [i_0])) ? (arr_37 [i_0] [i_1] [i_2] [i_11] [i_11] [i_12 - 3]) : (((/* implicit */unsigned int) arr_36 [i_0 + 1] [i_0] [i_0] [i_1] [i_0 - 1])))) | (arr_37 [i_0] [8ULL] [i_2] [i_12] [i_12 - 2] [i_0])));
                        }
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */int) min((var_33), ((+(((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])) ? (var_12) : (var_1))) + (((/* implicit */int) (unsigned char)8))))))));
                            var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_0 - 1] [i_0 - 2])) * (((/* implicit */int) arr_38 [i_0 + 1] [i_0 - 2]))))) == (0LL)));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_26 [12LL] [i_0] [12LL] [i_0 + 1] [i_0 + 1] [1ULL]) >> (((arr_26 [i_0] [i_0] [14ULL] [i_0 - 2] [i_0 + 1] [i_0]) - (10803704530376781390ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_2] [i_0 + 1])))))) : (((10832452646877962022ULL) >> (((10832452646877962023ULL) - (10832452646877961980ULL)))))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_0] [i_2] [i_2] [12ULL] [i_14])) || (var_5))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_50 [i_0] [i_0 - 1] [i_14] [i_11])) >= (arr_11 [i_11] [i_0 - 1])))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) 1980548433U)) && (arr_44 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]))))))));
                            var_37 ^= ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) (_Bool)1))))))));
                            var_38 = ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1]);
                            arr_51 [i_2] [i_2] [i_2] [18ULL] [i_2] = ((/* implicit */int) (-(min((14903462323161889064ULL), (((/* implicit */unsigned long long int) arr_40 [i_1] [i_1] [i_1] [i_11] [i_14] [i_1] [i_11]))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            var_39 = (((~(min((((/* implicit */unsigned long long int) arr_50 [i_0 - 2] [i_0] [22] [i_0])), (arr_35 [22U] [i_1] [i_2] [22U] [1]))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_13 [i_2] [(unsigned char)20])), (((unsigned int) (unsigned char)103))))));
                            var_40 = ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_39 [i_0] [i_0] [(_Bool)1])));
                        }
                        arr_55 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_0 - 1] [i_11])) : (((/* implicit */int) (signed char)-1)))));
                    }
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((14693892990330573743ULL), (((/* implicit */unsigned long long int) 466686334))))) ? (((((var_2) + (2147483647))) >> (((min((var_7), (var_12))) + (1694757193))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_12))))))));
    var_42 *= ((/* implicit */unsigned long long int) var_1);
    var_43 = ((/* implicit */unsigned long long int) ((unsigned int) var_10));
    var_44 = ((2243003720663040ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
}
