/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163224
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) >= (((((/* implicit */int) (_Bool)1)) - (1704779045)))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (min((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((long long int) -1704779045));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)16491))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-2863761845786423680LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 - 1] [(signed char)8] [i_3 - 2])))))) : (min((510ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_2] [i_1] [(unsigned char)9] [i_4])) : (((/* implicit */int) (short)32767))))))))));
                                arr_12 [i_0] [i_0] [i_0] [i_4] &= ((/* implicit */long long int) (short)32241);
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_0])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) ((long long int) var_0))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    arr_13 [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-5371)) < (((/* implicit */int) (unsigned short)32767)))))) - (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-104))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-57))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)32744)) : (((/* implicit */int) (unsigned short)55103))))) ^ ((+(18446744073709551615ULL)))));
                        arr_16 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1704779046)) ? (-2863761845786423680LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32741)))))) ? (((((/* implicit */_Bool) -2863761845786423680LL)) ? (2421126536U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_5] [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_16 = arr_11 [i_2] [i_2] [i_2] [i_2] [i_2];
                        var_17 = (((_Bool)1) ? (((/* implicit */int) ((_Bool) 1770693952))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_18 [(short)1] [(short)1] [i_2 + 1] [0])))))));
                        var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-46))))) && (((/* implicit */_Bool) var_8)))))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */short) arr_17 [i_2] [i_2]);
                        var_20 = ((/* implicit */unsigned int) arr_14 [5LL] [i_1] [i_2] [i_2 + 1] [i_7] [5]);
                    }
                    arr_22 [(_Bool)1] [i_2] [(_Bool)1] = arr_4 [9ULL] [i_1] [i_1] [i_1];
                }
                /* vectorizable */
                for (signed char i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_8] = ((/* implicit */int) arr_7 [(signed char)6] [i_1] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 8; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */short) var_9);
                                var_22 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_8 + 1] [5ULL] [i_10] [i_0]);
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2863761845786423679LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)113))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 7; i_11 += 3) 
                    {
                        var_24 = (~(((/* implicit */int) (signed char)-116)));
                        var_25 = ((/* implicit */signed char) arr_0 [i_8 - 1]);
                        var_26 &= ((/* implicit */signed char) arr_11 [i_0] [(short)5] [i_1] [(_Bool)1] [i_8]);
                        var_27 |= ((/* implicit */_Bool) arr_19 [i_0]);
                    }
                    for (unsigned int i_12 = 4; i_12 < 9; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */int) 4077744212372821958ULL);
                            var_29 = arr_10 [i_8] [i_12];
                        }
                        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 3) 
                        {
                            var_30 &= ((/* implicit */short) arr_6 [i_1] [i_12 + 1] [i_1] [i_0]);
                            arr_40 [i_0] [i_1] [i_8 + 1] [i_12] [i_14] = ((/* implicit */int) arr_21 [(_Bool)1] [i_12] [i_8] [i_14 - 1]);
                            var_31 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_8] [i_8 + 1] [i_12] [i_0] [6])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_1] [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) & (arr_17 [i_12] [i_12])));
                            var_33 = arr_35 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1];
                            var_34 = -2571970320107919011LL;
                            arr_43 [(signed char)1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_12] [i_12 - 4] [i_15] [i_12]))));
                            arr_44 [i_15] [i_12 - 1] [2LL] [i_1] [i_0] = ((/* implicit */unsigned int) var_9);
                        }
                        for (int i_16 = 2; i_16 < 8; i_16 += 4) 
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)-116)))))) : (((((/* implicit */_Bool) 1818274321U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4384))) : (var_7))));
                            var_35 = ((/* implicit */long long int) (!((_Bool)1)));
                            arr_49 [i_8 + 1] [i_8 + 1] [i_16] = ((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) (_Bool)1))))) : (arr_28 [(signed char)4] [(signed char)4] [4LL] [i_12] [(signed char)4] [i_16] [(signed char)4])));
                            var_36 += arr_29 [i_0] [i_1] [i_1] [i_12] [i_1] [i_8];
                        }
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_8 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 3] [i_12 - 3])) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (short)0))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_0] [i_1] [i_8])) || (((/* implicit */_Bool) arr_35 [i_0] [5LL] [i_8] [i_0] [i_12])))))));
                    }
                }
                for (signed char i_17 = 1; i_17 < 9; i_17 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 3; i_18 < 7; i_18 += 4) /* same iter space */
                    {
                        arr_56 [i_18] [i_17] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((arr_32 [i_0] [i_0] [i_0] [i_18] [i_0] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_17 + 1] [(unsigned short)5] [i_18 - 1] [i_18 - 3] [i_18 + 3])) < (((/* implicit */int) arr_45 [i_17 + 1] [i_17 + 1] [i_17] [i_18 + 1] [i_17])))))));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [6] [i_17 + 1] [8LL] [i_0])) : (((/* implicit */int) var_0))))) * (((14368999861336729670ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                    }
                    for (unsigned char i_19 = 3; i_19 < 7; i_19 += 4) /* same iter space */
                    {
                        var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32767)) : (2104181918)))) ? (((((/* implicit */int) arr_47 [i_19 + 3] [1] [i_17 - 1] [i_17] [i_17] [i_1] [i_1])) % (((/* implicit */int) arr_11 [i_19] [i_1] [i_17] [i_19] [1LL])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (short)32738))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)31)) : (2147483645))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_0)))))));
                        var_40 ^= ((/* implicit */short) var_1);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_64 [i_20] = ((/* implicit */signed char) var_9);
                        var_41 = ((/* implicit */short) arr_28 [i_0] [i_0] [i_17] [(unsigned short)2] [i_0] [i_0] [i_1]);
                    }
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) var_9))));
                        arr_67 [i_21] [i_1] [i_17 + 1] [i_21 - 1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [(short)0]))));
                        var_43 = ((((/* implicit */_Bool) 1326422791U)) ? (-8458628013426231492LL) : (((/* implicit */long long int) 2968544504U)));
                        var_44 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [4U])) ? (-635020741) : (-1916451691))) : (((/* implicit */int) arr_33 [3] [i_1] [i_1] [3LL] [i_1] [i_1]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32744))) : (arr_38 [i_21 - 1] [i_21 - 1] [i_17 + 1] [i_1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [4LL] [i_17] [i_21]))) : (min((((/* implicit */long long int) arr_17 [i_0] [i_21 - 1])), (17179860992LL)))))));
                    }
                    var_45 = ((/* implicit */short) arr_0 [i_0]);
                    arr_68 [(unsigned short)7] = ((/* implicit */_Bool) ((int) ((long long int) ((unsigned short) var_9))));
                }
            }
        } 
    } 
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-19900)) : (((/* implicit */int) min((var_4), (((/* implicit */signed char) var_6)))))))));
    var_47 = ((/* implicit */signed char) ((short) var_9));
}
