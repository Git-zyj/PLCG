/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100129
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
    var_19 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)32767))))) ? (((/* implicit */int) (unsigned short)26547)) : (((/* implicit */int) var_16))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -1879366580)) : (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) 9223372036854775807LL);
                                var_22 = var_17;
                            }
                        } 
                    } 
                }
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 4; i_6 < 14; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), ((+(((/* implicit */int) var_17))))));
                        arr_18 [i_0] [i_0] [i_0] [i_6 - 3] [i_6 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -452225047)) ? (((/* implicit */long long int) (-(var_11)))) : (16LL)));
                        var_24 = (!(arr_10 [i_0] [i_6] [i_1] [i_5] [i_6]));
                        var_25 |= ((((/* implicit */_Bool) ((arr_10 [i_0] [i_6] [i_5] [i_6] [i_6 + 1]) ? (((/* implicit */int) (signed char)-64)) : (var_14)))) ? (((/* implicit */int) arr_0 [i_6 + 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (-1986874133))));
                    }
                    arr_19 [i_0] [i_0] = max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211)))))))), (min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (max((3156592960526584357ULL), (15290151113182967259ULL))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                    {
                        var_26 *= ((/* implicit */unsigned short) 15290151113182967259ULL);
                        arr_26 [i_0] [i_0] [1] |= ((/* implicit */long long int) (-((+(((/* implicit */int) arr_24 [i_7] [i_7]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_27 |= ((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_9])) * ((~((~(((/* implicit */int) arr_22 [i_9] [i_9] [i_0])))))));
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned short) (_Bool)1)), (var_18))));
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 15290151113182967258ULL))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */short) ((((-4519121468211881101LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_10])) - (38851)))));
                        /* LoopSeq 4 */
                        for (short i_11 = 1; i_11 < 14; i_11 += 3) /* same iter space */
                        {
                            arr_33 [i_0] [i_1] [i_7] [i_10] [i_10] [i_11] = ((/* implicit */short) (-((-(((/* implicit */int) var_3))))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_1] [i_7] [i_1] [i_11] [i_11 + 1] [8])))))));
                            arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1])) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_7] [i_1])) : (var_7))) - (10478562834452702921ULL)))));
                        }
                        for (short i_12 = 1; i_12 < 14; i_12 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) var_1);
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_0] [(unsigned char)7] [1] [i_10])) == (arr_4 [i_0] [i_0] [i_0]))))) > ((~(9212684370888804662ULL)))));
                        }
                        for (short i_13 = 1; i_13 < 14; i_13 += 3) /* same iter space */
                        {
                            arr_40 [i_0] [(unsigned short)14] [2LL] [i_10] [i_0] [i_0] |= ((/* implicit */short) arr_39 [i_0] [i_1] [i_7] [(signed char)4] [i_10] [i_13] [i_13 - 1]);
                            var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) 3156592960526584339ULL)) ? (((/* implicit */unsigned long long int) 2047)) : (0ULL)));
                            var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)4)) : (171902235)))));
                            arr_41 [i_0] [14ULL] [14ULL] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_13] [i_13] [i_13] [i_13 + 1] [3ULL]))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) var_6)) * (arr_16 [i_0]))))))));
                            var_37 += ((/* implicit */_Bool) (~(arr_3 [i_0] [i_7] [(unsigned char)10])));
                        }
                    }
                    arr_45 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [1] [i_1] [i_1] [i_7])) ? (((int) var_1)) : ((-(((/* implicit */int) (short)29190))))))) ? ((-(((long long int) 6946574049379569028LL)))) : (((/* implicit */long long int) (~(var_14))))));
                    var_38 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_12 [(short)8] [i_1] [i_1] [i_1])) == (18446744073709551603ULL)))), ((~(var_5)))));
                    var_39 += ((/* implicit */short) (+((-((-(((/* implicit */int) (short)10352))))))));
                }
                for (long long int i_15 = 3; i_15 < 14; i_15 += 2) 
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_15 - 2] [i_15 - 2] [i_15] [i_15]))))) << ((((~(((((/* implicit */_Bool) arr_14 [i_15 - 1] [(unsigned short)5] [i_15 - 1] [(unsigned short)5])) ? (arr_17 [i_0] [i_1] [i_15] [i_1] [(unsigned char)13]) : (((/* implicit */int) (_Bool)1)))))) - (448747032)))));
                    arr_48 [i_0] = (short)0;
                }
                /* vectorizable */
                for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        var_41 += ((/* implicit */long long int) ((int) arr_37 [i_0] [i_0] [3LL] [i_0] [i_0]));
                        var_42 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_50 [i_0] [10]))));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_18] [i_1] [i_16] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_36 [i_0] [i_1] [i_17] [i_0] [i_18])) : (((/* implicit */int) arr_36 [i_0] [(unsigned short)11] [i_16] [i_17] [i_18])))))));
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (+(arr_11 [i_16] [(_Bool)1] [(_Bool)1] [i_16] [(_Bool)1]))))));
                        }
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_29 [(unsigned char)14] [i_1] [i_1] [i_1]) : (var_6))) + ((-(9LL))))))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_0] [i_0] [4LL] [i_0] [i_1])))))));
                        var_47 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)35995))));
                    }
                    arr_60 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_16] [(_Bool)1] [i_16] [(unsigned short)7] [i_0])) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) == (arr_3 [i_0] [i_0] [i_16]))))));
                }
                arr_61 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) var_3)))));
                arr_62 [i_0] = ((/* implicit */unsigned char) ((((15122060385959827815ULL) != (((/* implicit */unsigned long long int) -618169121)))) ? (((/* implicit */long long int) min((((/* implicit */int) ((short) var_14))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_51 [i_0] [i_0])) : (24)))))) : (((long long int) arr_16 [i_0]))));
            }
        } 
    } 
    var_48 += ((/* implicit */unsigned long long int) var_16);
}
