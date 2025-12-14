/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127376
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) max(((_Bool)0), ((_Bool)1)));
                var_19 = ((/* implicit */signed char) ((unsigned short) arr_3 [i_1] [7] [(unsigned char)9]));
                var_20 += ((/* implicit */long long int) ((max((min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)1)))) == (((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1] [i_1])))) ? (max((arr_0 [i_1]), (-6344590673386652559LL))) : (-1005306357585920690LL)))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] [13ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1005306357585920689LL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) arr_1 [i_0] [i_0]))), (((unsigned int) -555052824)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((var_12), (((/* implicit */unsigned long long int) (_Bool)0)))))));
                        var_22 = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */short) var_10)), (max((((/* implicit */short) (unsigned char)59)), (var_13))))));
                        var_23 = (unsigned char)183;
                        var_24 ^= arr_8 [i_1] [i_1] [i_2] [i_0] [i_0];
                    }
                    for (signed char i_4 = 2; i_4 < 13; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((((((_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1005306357585920690LL)) : (min((arr_10 [i_4]), (var_12))))), (arr_10 [i_0]))))));
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((((/* implicit */_Bool) min((arr_3 [i_0] [i_1] [i_2]), (-1005306357585920690LL)))) ? (((/* implicit */int) ((13ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164)))))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)3)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */long long int) ((_Bool) arr_12 [i_0] [i_5 - 1] [i_5] [i_5]));
                        var_29 = ((/* implicit */short) (((_Bool)1) ? ((~(((/* implicit */int) arr_7 [i_0] [i_0])))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_5] [i_2]))));
                        var_30 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) 1023244114)) > (arr_0 [i_5 - 2])));
                    }
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                    {
                        arr_18 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((2147483647) * (((/* implicit */int) (_Bool)0)))) >> (((((((/* implicit */_Bool) ((1023244114) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (min((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6])), (arr_4 [i_0]))))) + (5067792876223488676LL)))))) : (((/* implicit */short) ((((2147483647) * (((/* implicit */int) (_Bool)0)))) >> (((((((((/* implicit */_Bool) ((1023244114) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (min((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6])), (arr_4 [i_0]))))) + (5067792876223488676LL))) + (509159428214324573LL))))));
                        var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) (unsigned char)172)) - (172)))))))) ? (6344590673386652559LL) : (arr_2 [i_6 + 2] [i_1] [i_2])));
                    }
                    var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (var_2) : (var_2)))))) > ((-(min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), (arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2])))))));
                }
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */int) arr_14 [i_8] [i_1] [i_7] [i_8] [i_9] [i_1]);
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6344590673386652557LL)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_9] [i_0] [i_9 - 3] [i_9]))) : (((long long int) (_Bool)1))))) ? (((arr_16 [i_0] [i_1] [i_7] [i_9]) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_16)))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_24 [i_0] [i_1] [i_0] [i_8] [i_9]), ((unsigned char)4)))) && (((arr_19 [i_1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_7])) ? (((/* implicit */int) min((arr_24 [i_0] [i_0] [i_0] [i_1] [(signed char)12]), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) 63LL))))))), (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_22 [i_7] [7LL] [i_0])), (max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [(short)2])))))), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56634))))))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)8904)))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) (unsigned char)0);
                        var_38 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_39 = ((/* implicit */unsigned char) ((short) arr_12 [i_0] [i_1] [i_10] [i_1]));
                    var_40 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [8])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL)))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) ((short) 6344590673386652553LL));
                                var_42 = ((/* implicit */unsigned char) min((var_42), (((unsigned char) max((((/* implicit */signed char) ((_Bool) (unsigned char)18))), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)118))))))));
                                arr_37 [i_12] [i_1] [i_10] [i_1] [i_0] |= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_13]))) : (arr_4 [i_1]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((unsigned short) arr_22 [i_12] [i_1] [i_10]))) : (((/* implicit */int) max((arr_5 [i_0] [i_1] [i_10] [(_Bool)1]), (((/* implicit */short) var_3))))))))));
                                var_43 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)114), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (short)0)) : (arr_15 [i_0] [i_0] [i_1] [i_14] [i_0] [i_14])))) ? (max((((/* implicit */long long int) (+((-2147483647 - 1))))), (min((-6344590673386652554LL), (((/* implicit */long long int) arr_21 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) arr_22 [i_1] [i_1] [i_1])))))));
                    var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [13LL] [i_1] [i_1] [i_14])))) % (arr_31 [i_0] [i_1])))) == (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) : (arr_19 [i_1] [i_1]))), (min((((/* implicit */unsigned long long int) (short)-32767)), (arr_40 [i_1] [i_1] [i_14])))))));
                    var_46 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_20 [8] [i_0] [(signed char)9] [i_1]), (((/* implicit */unsigned short) (signed char)-87))))), (min((max((((/* implicit */unsigned long long int) (signed char)55)), (arr_40 [i_0] [i_1] [i_14]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [(signed char)11] [i_0] [i_0])), (arr_0 [i_0]))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            {
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) arr_41 [i_16]))));
                var_48 = ((/* implicit */signed char) arr_42 [(_Bool)1]);
                var_49 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) / (6344590673386652549LL)));
                var_50 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned short)511)))));
                var_51 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)97)), (max(((unsigned short)56652), (((/* implicit */unsigned short) ((unsigned char) (short)32758)))))));
            }
        } 
    } 
}
