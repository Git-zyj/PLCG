/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155490
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_0] [(unsigned short)11] [i_1 - 2]))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((13336808705127717398ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((0ULL) >> (((18446744073709551615ULL) - (18446744073709551562ULL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) 2147483643)) : (11172607897389297172ULL)))));
                        var_17 |= ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)-105)) + (2147483647))) >> (((((/* implicit */int) (signed char)58)) - (39))))) >> (((((/* implicit */int) (unsigned short)41854)) - (41823)))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41854))) : (0U)));
                        var_19 = ((/* implicit */_Bool) var_9);
                    }
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((((arr_12 [i_0] [i_1] [i_1 + 1] [(signed char)14] [i_2] [10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 3])))));
                        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)91))));
                    }
                    arr_18 [i_0] [i_2] = ((/* implicit */unsigned char) (+(arr_12 [i_1] [i_1 + 3] [i_1] [(unsigned short)8] [i_1] [i_1 - 1])));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1 + 2] [i_1] [(unsigned short)4])) | (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 15; i_7 += 3) 
                        {
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (1233659902U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22112)))))) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)-93))));
                            var_23 *= ((/* implicit */unsigned char) arr_6 [i_1 - 1] [i_1] [i_6] [i_7]);
                        }
                        /* LoopSeq 3 */
                        for (signed char i_8 = 4; i_8 < 14; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_23 [i_0] [i_1 - 2] [i_8 + 1] [i_6] [i_2] [i_1 - 2]))));
                            arr_26 [i_2] [i_2] [i_2] [7LL] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [12ULL] [i_1 + 1] [i_1 - 2] [i_1])))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned long long int) (((_Bool)1) ? (878043764) : (((/* implicit */int) (unsigned short)59813))))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483638)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7408357564526404173ULL))))));
                        }
                        for (short i_9 = 3; i_9 < 14; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (arr_3 [9LL])))) | (((((/* implicit */_Bool) arr_1 [i_9] [i_9])) ? (3832763989U) : (((/* implicit */unsigned int) arr_3 [i_9])))))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_31 [i_2] [i_1] &= ((_Bool) ((var_10) >> (((((/* implicit */int) (signed char)-87)) + (127)))));
                            arr_32 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_14 [(short)0] [(short)0] [i_2] [i_1 - 2] [i_9 - 2])));
                        }
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_1] [i_0] [i_0] [i_10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_2] [i_2] [i_2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : ((~(18446744073709551612ULL)))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1 + 2] [i_1] [3] [i_1 - 1]))) : (((((/* implicit */_Bool) var_13)) ? (var_2) : (arr_12 [i_0] [i_1] [(unsigned char)5] [14ULL] [i_10] [i_10])))));
                            var_30 = ((/* implicit */short) ((((/* implicit */int) arr_25 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_2])) >> (((-1478962584) + (1478962603)))));
                            arr_37 [(_Bool)1] [i_1] [i_2] [(signed char)13] [(signed char)13] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1 + 1] [0ULL] [(short)3] [i_1 - 2] [i_1 + 1] [i_1 - 1]))));
                        }
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    arr_40 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((unsigned int) (unsigned short)47073)) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3950)))))), (-1LL)));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)255))));
                    /* LoopSeq 3 */
                    for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
                    {
                        arr_45 [1] [i_1] [i_12] [1] = ((/* implicit */unsigned int) ((signed char) (~(65011712))));
                        arr_46 [i_12] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_14);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_12))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (short)-18584))));
                            var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-25))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-88))))));
                            arr_52 [i_12] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) 1478962572))))), (max(((~(arr_30 [i_0]))), (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_11] [i_12 - 1] [0ULL] [i_12]))))));
                        }
                        var_37 -= ((/* implicit */signed char) -1478962602);
                    }
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((67108863), ((-(48242117)))))) ? (((((/* implicit */int) arr_38 [(_Bool)1] [i_15] [i_1 - 1] [i_15])) >> (((((/* implicit */int) arr_47 [i_0] [i_1] [i_1 + 1] [i_1] [2])) - (44578))))) : (((/* implicit */int) (_Bool)1))));
                        arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_20 [i_0] [i_0] [i_11] [i_0])))))))) | ((~(arr_16 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_0])))));
                        var_39 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_51 [i_0] [i_0] [i_11] [i_15] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_47 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])) / (((/* implicit */int) var_9))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_40 = arr_15 [i_0] [i_1] [i_1];
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_17 = 1; i_17 < 12; i_17 += 4) 
                        {
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) arr_1 [(short)11] [(unsigned short)9]))));
                            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) -878043751)) ? (arr_59 [i_1] [i_17 + 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3064941511U)) ? (((/* implicit */int) arr_53 [10] [i_1] [10] [i_1] [10] [i_1])) : (((/* implicit */int) var_5))))))))));
                        }
                        for (short i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            arr_64 [i_0] [i_1] [i_0] [i_0] [i_18] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_39 [i_1 + 3] [i_1 - 2] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */int) var_9)) : (-65011719))) | (((/* implicit */int) arr_6 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1]))));
                            var_43 += ((/* implicit */short) (((_Bool)1) ? (-67108864) : (591213847)));
                            var_44 = ((/* implicit */unsigned long long int) var_4);
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967295U)) / (-8888984781764091305LL)))) ? (((/* implicit */unsigned int) -1558950614)) : (((((/* implicit */_Bool) 6757432213582279312ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1126902135U)))));
                        }
                        arr_66 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((var_1), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(unsigned char)15]))))))) ? (7458153940786762186ULL) : (((((/* implicit */_Bool) ((arr_9 [i_1] [i_16]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1 + 3]))) : (1495594296470899422ULL)))));
                    }
                }
                var_45 ^= ((/* implicit */int) (short)27247);
            }
        } 
    } 
    var_46 -= ((/* implicit */unsigned long long int) var_6);
}
