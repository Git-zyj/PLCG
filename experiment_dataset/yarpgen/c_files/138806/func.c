/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138806
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((((/* implicit */_Bool) (unsigned short)12127)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62557)) || (((/* implicit */_Bool) var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((max(((unsigned short)13109), (((/* implicit */unsigned short) (unsigned char)96)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)150)))))));
                                arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)0);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7656)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)16736))))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)64568))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (16238266172935340230ULL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)7656)), ((~(((/* implicit */int) (unsigned short)37500))))));
                                var_23 = ((/* implicit */_Bool) (unsigned short)58177);
                                var_24 = ((/* implicit */unsigned char) max((((((/* implicit */int) max(((unsigned short)15), ((unsigned short)30045)))) ^ (((/* implicit */int) var_14)))), (((/* implicit */int) (unsigned short)61385))));
                                var_25 = ((/* implicit */signed char) var_13);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_26 += ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((10543584591620576049ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)61378)) < (((/* implicit */int) (unsigned char)19)))))));
                                var_27 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)227))))), ((unsigned char)113));
                                var_28 -= ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) != (((/* implicit */int) arr_20 [i_5 + 1] [i_1] [i_9 + 1] [i_5] [i_5 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((unsigned int) (unsigned short)61401));
                                var_30 = ((/* implicit */long long int) max((var_30), (arr_11 [i_0 + 1])));
                            }
                        } 
                    } 
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                        arr_37 [i_13] [i_0] [i_0] [(unsigned char)4] = ((((/* implicit */int) (unsigned char)237)) > (((/* implicit */int) var_9)));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_32 = ((_Bool) (short)14719);
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_1] [i_12] [i_14]))) & (3434061491612198417ULL)));
                        var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2264017802U)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (unsigned char)0))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 3; i_15 < 14; i_15 += 1) 
                    {
                        arr_44 [i_0] [i_0 + 1] [i_0] = ((/* implicit */short) ((long long int) (unsigned char)255));
                        /* LoopSeq 1 */
                        for (short i_16 = 1; i_16 < 15; i_16 += 2) 
                        {
                            arr_47 [i_0 + 1] [i_1] [(unsigned char)3] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_48 [i_0] [i_0] [i_0] [i_12] [i_15] [i_0] = ((/* implicit */unsigned char) 5771344121428615605ULL);
                        }
                        var_35 = ((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL));
                        var_36 += ((/* implicit */_Bool) ((unsigned short) (unsigned char)148));
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((short) (_Bool)0)))));
                    }
                    for (unsigned char i_17 = 3; i_17 < 15; i_17 += 2) 
                    {
                        arr_51 [i_17 - 3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)64);
                        var_38 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3143080564591038909ULL)))) ? (var_15) : (((/* implicit */unsigned long long int) 1532728153U))));
                        arr_52 [i_0] [i_0 + 1] [i_1] [(unsigned short)8] [i_0] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)161)))) & (arr_17 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])));
                    }
                }
                for (signed char i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                {
                    var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4129523711392916434ULL)));
                    arr_55 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61412))) <= (-7671471566925151399LL))) ? (((/* implicit */int) ((unsigned char) (unsigned char)2))) : (((/* implicit */int) ((unsigned short) (unsigned char)242)))));
                    arr_56 [i_0] [i_0] [(short)11] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((-463162571340750055LL) - (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (max((((/* implicit */unsigned long long int) 3104813110U)), (((((/* implicit */_Bool) 2208477900774211386ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2208477900774211355ULL)))))));
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */_Bool) (unsigned char)253);
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        arr_63 [8ULL] [i_1] [i_19] [i_0] = ((/* implicit */short) var_7);
                        var_41 = (_Bool)1;
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_42 = ((/* implicit */short) ((_Bool) ((unsigned short) 121746882U)));
                        var_43 += max((((/* implicit */long long int) (_Bool)1)), (2447155822344430250LL));
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) min(((unsigned short)23025), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 1) 
                        {
                            var_45 -= ((/* implicit */unsigned char) 2447155822344430250LL);
                            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (((unsigned int) arr_41 [i_1] [i_19] [i_21] [i_22 + 1])) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)85))))))))));
                            arr_69 [i_0 + 1] [i_1] [i_0] [i_21] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((4294705152U) <= (1849242543U))))));
                            var_47 -= ((arr_0 [i_0 + 1] [i_19]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))));
                        }
                        var_48 += ((/* implicit */unsigned char) ((((/* implicit */int) (((!(var_0))) && (var_13)))) | ((~(((/* implicit */int) var_8))))));
                    }
                    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        var_49 += ((/* implicit */_Bool) (((-((~(((/* implicit */int) var_11)))))) | ((~(((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_9))))))));
                        var_50 += ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)206)), (arr_16 [i_0 + 1] [i_19] [i_0 + 1] [i_19])))) < (((/* implicit */int) arr_30 [i_19] [i_0 + 1]))));
                        arr_73 [i_0] [i_19] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) (short)-4640))), (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)229))))));
                    }
                    arr_74 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                    arr_75 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)75);
                    var_51 += ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */unsigned char) var_17)), ((unsigned char)255))))));
                }
            }
        } 
    } 
}
