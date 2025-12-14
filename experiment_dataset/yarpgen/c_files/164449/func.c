/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164449
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (10) : (-8)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))) : (min((739379940223563486LL), (((/* implicit */long long int) var_8)))))) : (739379940223563486LL)));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) - (((/* implicit */int) (!((_Bool)1))))));
                    arr_9 [i_1] [i_1] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) ((4816991843252095934LL) >> (((-4183435262564704215LL) + (4183435262564704233LL)))));
                }
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    var_16 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((739379940223563486LL) > (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (arr_2 [i_0] [20U] [i_0])));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((long long int) ((unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_3] [i_3])) : (var_13)))));
                                arr_19 [i_0] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned int) arr_3 [i_4] [i_3]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 2; i_6 < 23; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_18 [i_0] [i_1 + 2] [i_1] [i_6 - 2] [i_6] [i_1 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6 + 1] [i_6])))))) | (((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_0] [i_6]))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((25) % (((/* implicit */int) (signed char)49))))) || (((/* implicit */_Bool) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((-739379940223563487LL) == (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))))));
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [18])) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 1] [i_1] [(signed char)21] [5] [i_6])) ? (arr_10 [i_0] [i_1]) : (((/* implicit */int) var_0)))) : ((~(-11))))) + (-1457865034)));
                        var_20 = ((/* implicit */unsigned int) ((short) -1046896519));
                        var_21 = ((/* implicit */unsigned short) (+((-((~(((/* implicit */int) var_1))))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        arr_30 [i_1] [i_0] [i_1] [i_3] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (unsigned char)128)) : (-1046896519)))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)10))));
                        arr_31 [i_0] [i_0] [i_1] [i_3] [i_7] = ((/* implicit */unsigned int) ((unsigned char) (short)5));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 4; i_8 < 20; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            arr_38 [i_0] [i_1] [i_0] [22] [15U] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1]))));
                            arr_39 [23ULL] [i_1] [i_1 - 1] [i_1 + 2] [22] [i_1] = ((/* implicit */signed char) ((1467139996340288398LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            arr_40 [i_0] [i_0] [i_1] [i_3] [i_8] [(unsigned short)5] = ((/* implicit */int) ((short) var_5));
                        }
                        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((short) (unsigned char)101));
                            arr_45 [i_0] [i_0] [i_1] [i_3] [i_8 - 2] [2LL] [2LL] = ((/* implicit */long long int) (signed char)49);
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (4102837706425541461LL)));
                            arr_49 [(signed char)14] [i_1] [i_8] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_47 [i_0] [(unsigned short)10] [i_0] [i_0] [i_0] [i_0] [14])) ? (((/* implicit */long long int) arr_13 [i_8] [i_11])) : (arr_35 [i_0] [(unsigned char)16] [14LL] [20U] [i_11] [i_8] [i_3]))) * (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                        }
                        var_24 = ((/* implicit */unsigned char) (-(2400476968U)));
                        arr_50 [i_1] [i_8 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) 2048LL)) ? (((((/* implicit */_Bool) 1782752508)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [20LL] [i_0]))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                        var_25 *= ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [i_8] [i_8 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_33 [i_8] [i_3] [i_1] [i_0])))) : (((unsigned int) 1782752508)));
                        arr_51 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) -1046896519)))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            arr_59 [i_1] [(unsigned short)23] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((64777524U) < (4245005886U)));
                            arr_60 [i_3] [i_1 + 1] [i_3] [i_1] [i_13] [i_1] [i_13] = ((/* implicit */short) arr_57 [i_0] [i_0] [i_0] [i_12] [i_13]);
                        }
                        for (long long int i_14 = 1; i_14 < 21; i_14 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) var_11)))))));
                            var_27 = ((/* implicit */unsigned char) (~(arr_61 [i_14 + 1] [i_1 - 1] [i_3] [i_12] [i_14] [i_0] [i_1])));
                            var_28 *= ((long long int) (!(((/* implicit */_Bool) var_5))));
                        }
                        arr_63 [i_1] [i_1] [(short)6] = ((/* implicit */long long int) (-(arr_61 [2U] [(unsigned short)13] [i_1] [i_3] [i_3] [(unsigned char)19] [(unsigned short)4])));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (0LL) : (((/* implicit */long long int) 1734470518)))) : (-119753542378682708LL)));
                        arr_64 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_15))))));
                    }
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_36 [i_3] [i_3] [i_1] [i_0]))));
                }
                arr_65 [i_1] [i_0] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32749)) ? (((((/* implicit */long long int) arr_3 [i_0] [i_1 - 1])) * (0LL))) : (((/* implicit */long long int) max(((~(((/* implicit */int) arr_41 [i_1] [i_0] [23U] [i_1] [i_1])))), (((/* implicit */int) (signed char)12)))))));
                var_31 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) var_0);
}
