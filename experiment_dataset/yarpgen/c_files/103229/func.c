/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103229
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [6LL] [i_1] [i_2] [i_2] [i_1] [6LL])))));
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_3)) << (((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))))), (((((/* implicit */unsigned long long int) arr_7 [i_0])) ^ (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 3])), (arr_3 [i_0])))))));
                            arr_14 [i_1] [i_2] = ((/* implicit */long long int) (~((-(((/* implicit */int) ((short) arr_1 [i_1] [i_1])))))));
                            arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_2 [i_0])))))), ((~(((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (27ULL)))))));
                            arr_16 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-74)) ? (min((var_2), (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_0 - 1])))));
                            arr_17 [i_2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) min((var_5), (var_9))))))));
                        }
                        arr_18 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_9)))));
                        arr_19 [(_Bool)1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) arr_0 [i_1]))) ? ((~(((/* implicit */int) (unsigned short)65525)))) : (((/* implicit */int) arr_11 [i_2] [(short)3] [i_2] [i_2] [i_1] [i_1])))) < ((((((~(((/* implicit */int) var_12)))) + (2147483647))) << ((((((~(var_14))) + (1336720274))) - (20)))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (-((+((-(-9223372036854775791LL)))))));
                        var_20 = ((/* implicit */unsigned char) 9223372036854775804LL);
                    }
                    var_21 = ((/* implicit */short) arr_3 [(_Bool)1]);
                    arr_22 [i_2] [i_2] = arr_9 [18U] [i_1] [i_2] [i_2] [i_1] [(short)17];
                }
            } 
        } 
        arr_23 [(unsigned short)2] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0])) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [(_Bool)1] [i_0] [i_0])) - (87)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)35)) >= (((/* implicit */int) (short)16573))))) : (((/* implicit */int) ((signed char) -9223372036854775804LL)))))));
        var_22 *= ((/* implicit */short) (+(((min((9223372036854775789LL), (((/* implicit */long long int) arr_6 [i_0] [(signed char)8] [(signed char)8] [i_0])))) / (((/* implicit */long long int) var_11))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 15; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            arr_30 [i_7] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_7]))));
            /* LoopSeq 4 */
            for (signed char i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_37 [i_8] [i_8] [(short)14] [i_9] [i_9] [6] &= ((/* implicit */_Bool) arr_11 [i_8] [i_7] [i_7] [i_7 - 3] [i_9 + 1] [i_7]);
                            arr_38 [i_10] [i_7] [i_8] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) 9223372036854775776LL);
                        }
                    } 
                } 
                arr_39 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_7 + 1])) ? (arr_3 [i_7 + 1]) : (arr_3 [i_7 + 1])));
            }
            for (short i_11 = 1; i_11 < 16; i_11 += 4) 
            {
                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_7] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_1 [i_7] [i_11])))))) : ((~(var_13)))));
                arr_43 [i_11] [i_7] [i_7] [i_6 + 2] = ((/* implicit */unsigned int) arr_42 [i_6 - 1] [i_7] [i_7] [i_11]);
                var_24 = ((/* implicit */_Bool) (-(arr_8 [i_6] [i_7 - 3] [i_7 - 2] [i_7])));
                var_25 = ((/* implicit */short) (-(((/* implicit */int) (short)-6213))));
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_47 [i_6 + 2] [i_7] [i_11] [i_7] [i_11] = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_11 + 1] [i_7 - 3] [i_6 + 2]));
                    /* LoopSeq 4 */
                    for (short i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (short)6237);
                        arr_50 [i_7] [i_7 - 3] [i_13] = ((/* implicit */_Bool) arr_1 [(_Bool)1] [i_13]);
                    }
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((long long int) var_12)))));
                        arr_53 [i_7] [i_11] [i_12] = ((/* implicit */signed char) arr_2 [i_6 - 2]);
                        arr_54 [i_7] [i_7] [i_7] [i_11] [i_7] [i_14] = ((/* implicit */unsigned int) ((_Bool) var_16));
                        var_28 = ((/* implicit */_Bool) 234881024);
                        var_29 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16903)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [i_6 - 1] [i_7 - 1] [i_12] [i_12]))));
                        arr_59 [i_7] [i_7] = ((/* implicit */short) ((unsigned long long int) ((var_18) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_15]))))));
                        var_30 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_6] [i_6] [i_6 - 2] [i_6] [i_6]))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_63 [12] &= ((/* implicit */int) (-(var_5)));
                        arr_64 [i_7] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_11 [i_7] [i_7 - 3] [(signed char)7] [i_7] [i_7 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_36 [(_Bool)1] [(_Bool)1] [i_11] [i_7] [i_6])) : (((/* implicit */int) arr_5 [i_6] [i_6] [i_6]))))));
                        arr_65 [i_7] [(unsigned char)5] [i_7] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (arr_45 [i_7] [i_7] [i_7] [i_11 + 1]) : (((/* implicit */int) var_10)))) != (((/* implicit */int) ((signed char) 2348915443U)))));
                    }
                    arr_66 [i_7] [4] [i_7] [12ULL] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-16913))));
                }
                for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    var_31 = ((/* implicit */long long int) 388399570);
                    arr_70 [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_7] [i_7]))) : ((-(18250461029705180057ULL)))));
                    arr_71 [i_6] [i_7 + 1] [(_Bool)1] [i_6] [i_7] [(signed char)14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6] [i_7] [i_7] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (var_14))))));
                    var_32 = ((/* implicit */long long int) arr_5 [i_6 - 1] [i_7] [i_17]);
                }
                for (long long int i_18 = 1; i_18 < 15; i_18 += 1) 
                {
                    arr_76 [i_6] [(_Bool)1] [i_11 - 1] [i_7] = ((/* implicit */_Bool) var_2);
                    arr_77 [i_6] [i_7] [i_11] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)65522)) << (((((/* implicit */int) arr_52 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) + (123)))))));
                }
            }
            for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 1) 
            {
                var_33 = ((/* implicit */int) (!(((var_4) && (var_18)))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) (-(var_13)));
                            arr_86 [i_7] [i_7 - 2] [i_7] = (+(((/* implicit */int) arr_48 [i_6 - 2] [i_7 - 3] [i_6 - 2] [(signed char)14] [i_19 - 1])));
                        }
                    } 
                } 
                arr_87 [i_6] [i_7] [i_7] = ((/* implicit */long long int) var_6);
                var_35 = ((/* implicit */long long int) arr_20 [i_6] [i_6] [8U] [i_6] [i_6] [8U]);
            }
            for (unsigned long long int i_22 = 4; i_22 < 14; i_22 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 17; i_23 += 2) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_24]))))) ? ((~(var_11))) : (((/* implicit */unsigned int) (+(arr_45 [i_6] [i_7] [i_7] [i_24]))))));
                            var_37 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_5 [i_7] [4LL] [i_7]))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)6223))))));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
            {
                {
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_26])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */int) arr_5 [i_6 - 2] [i_6 - 2] [i_26])) : (((/* implicit */int) var_10)))))));
                    arr_102 [i_6] [i_6] [i_26] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_45 [i_6] [(unsigned char)8] [i_26] [i_26])) && (((/* implicit */_Bool) arr_101 [i_25] [i_25] [i_25]))))));
                    arr_103 [i_6] [i_25] [i_6] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_96 [i_6] [i_6] [i_6] [i_6] [i_6 - 1])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-9223372036854775804LL)))));
                }
            } 
        } 
        var_40 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_18)) & (((/* implicit */int) arr_67 [i_6 + 2] [i_6]))))));
    }
    var_41 = ((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_14)));
    var_42 = ((short) ((((/* implicit */_Bool) (~(-1769753281)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)127)))))));
}
