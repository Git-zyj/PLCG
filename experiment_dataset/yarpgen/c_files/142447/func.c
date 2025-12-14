/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142447
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned short)127))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (max((var_9), (((/* implicit */long long int) (short)-22117))))));
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+((~(((var_4) + (((/* implicit */int) (unsigned short)44254)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (_Bool)0);
                arr_4 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) (signed char)120);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    var_18 |= ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_0)), (arr_7 [i_0]))), (max((4585330526839381004LL), (arr_7 [i_0])))));
                    var_19 |= ((/* implicit */unsigned int) (-(5536946645543141425LL)));
                    var_20 = ((/* implicit */unsigned int) (short)-1);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)2046))) / (arr_5 [i_0] [i_0] [i_3 - 1]))), (((/* implicit */long long int) (short)12))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)2065), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */unsigned long long int) 9222246136947933184LL)) : (18232020205121295710ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (short)-2046)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned int) -1222201541);
                }
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 1])), (((((/* implicit */_Bool) (short)2052)) ? (3985329565386820599ULL) : (18232020205121295710ULL)))));
                            arr_22 [i_6 + 1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((min((var_5), (((/* implicit */unsigned int) var_8)))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4585330526839381031LL)) ? (9222246136947933199LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))));
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_7])))))) <= (((((/* implicit */_Bool) arr_11 [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 3])) ? (arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 3] [i_6 + 2] [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 + 3] [i_6 + 3] [i_6 + 1])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */int) var_13);
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_0] [i_6 - 1] [i_5] [i_6 - 1])))));
                        }
                        for (int i_9 = 4; i_9 < 21; i_9 += 3) 
                        {
                            arr_30 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (~(arr_11 [i_6 + 1] [i_6] [i_6 - 1] [i_5] [(unsigned short)12])))) ? (((/* implicit */unsigned long long int) var_10)) : (max((((/* implicit */unsigned long long int) -9222246136947933184LL)), (1ULL))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5530)) ? (((/* implicit */int) (short)8191)) : ((+(((/* implicit */int) var_11)))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (unsigned short)0))));
                            arr_31 [i_0] [i_1] [i_5] [17] [17] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_4))));
                        arr_32 [i_0] [i_1] [i_1] [i_6 + 1] [i_1] = ((/* implicit */_Bool) var_10);
                        arr_33 [4] [(unsigned char)6] [0U] [i_5] [i_5] [i_6] |= ((/* implicit */_Bool) ((long long int) (_Bool)1));
                    }
                    var_31 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned char) var_4))), (((((/* implicit */_Bool) ((unsigned int) (signed char)33))) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_5] [(_Bool)1])) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */int) (!(((var_9) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_10)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0]))) <= (var_10))))))));
                    var_33 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */int) (short)-2070)) / (arr_23 [i_0] [i_0] [(unsigned short)4] [i_0] [i_1] [i_5])))), ((((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_1))) <= (((/* implicit */long long int) 541361476U)))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_34 |= ((((((/* implicit */_Bool) arr_23 [(signed char)1] [i_1] [i_10] [i_1] [i_10] [i_10])) && (((/* implicit */_Bool) var_9)))) ? (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_27 [i_10] [i_10] [i_10] [i_0])) : (((/* implicit */int) arr_35 [i_0] [i_1]))))));
                    var_35 = ((/* implicit */short) arr_23 [i_10] [i_1] [i_1] [i_1] [i_1] [i_0]);
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_36 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_11] [i_12] [i_12] [i_13] [i_13]))))) ? (((/* implicit */int) arr_21 [i_13] [i_12] [i_13] [i_14])) : ((-(((/* implicit */int) (unsigned short)7)))))) | (((/* implicit */int) var_12))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (var_8)));
                    }
                } 
            } 
        } 
        var_38 |= ((/* implicit */short) arr_25 [i_11] [i_11] [15U] [i_11] [i_11]);
        var_39 |= ((((/* implicit */_Bool) 18446744073709551595ULL)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [7ULL] [i_11] [i_11] [i_11] [i_11]))))));
    }
    for (unsigned char i_15 = 1; i_15 < 12; i_15 += 2) 
    {
        var_40 = ((/* implicit */signed char) arr_39 [i_15]);
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-5540)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_35 [i_15] [i_15])))), ((-(((/* implicit */int) arr_47 [(unsigned short)10]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)972)) : (((/* implicit */int) arr_10 [(unsigned short)10] [i_15] [i_15] [i_15 + 2] [(unsigned short)10]))))) ? ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) arr_27 [i_15 + 1] [i_15 - 1] [12LL] [12LL]))));
        var_42 = ((/* implicit */short) ((_Bool) arr_11 [11] [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1]));
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */_Bool) (-((-(var_9)))));
            arr_53 [i_15 - 1] [i_16] = ((/* implicit */_Bool) var_8);
            var_44 |= ((/* implicit */_Bool) (+(min((arr_7 [i_15 + 1]), (((/* implicit */long long int) var_6))))));
            arr_54 [i_15] [i_15 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (arr_12 [(unsigned short)2]) : (arr_12 [0LL]))) - (((/* implicit */long long int) (+(((/* implicit */int) (signed char)122)))))));
            var_45 = ((/* implicit */long long int) var_11);
        }
        for (long long int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
        {
            arr_57 [i_15] [i_17] |= ((/* implicit */unsigned long long int) (!((!((_Bool)0)))));
            var_46 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_6 [i_15] [i_15 + 1] [i_15 + 1] [(_Bool)1])))), (max((((/* implicit */unsigned long long int) arr_38 [(_Bool)1])), (1760079492658731491ULL)))));
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((6624516705513772642LL) / (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2022))) : (var_10)))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)97)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) (unsigned short)19169))))) : (-9097462602633498509LL)));
        var_48 = ((/* implicit */signed char) var_3);
    }
}
