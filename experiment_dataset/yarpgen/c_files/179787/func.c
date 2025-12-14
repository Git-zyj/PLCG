/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179787
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
    var_17 |= ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned short) var_4)), (var_11))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] = min((var_14), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_0]))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_13))))), (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] = var_12;
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((signed char) (((_Bool)0) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned short)0))))))))));
                    var_19 = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) var_13);
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) (!((_Bool)1))));
                var_21 &= ((/* implicit */unsigned short) var_14);
            }
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    arr_30 [i_0] [i_7] [i_5] [i_0] = ((/* implicit */_Bool) var_8);
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        arr_33 [i_0] [(unsigned short)18] [i_5] [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (var_9)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)1932), (var_8)))))))) : (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned int) -1875372881)) : (2442020446U)))));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1875372880)) ? ((((_Bool)0) ? (4058376656U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)63020)) : (((/* implicit */int) arr_32 [i_0] [i_5] [i_0] [i_8] [(unsigned short)14])))), (((/* implicit */int) (signed char)-105)))))));
                    }
                    for (signed char i_10 = 3; i_10 < 20; i_10 += 1) 
                    {
                        var_23 -= ((/* implicit */unsigned long long int) var_4);
                        arr_36 [i_0] = ((/* implicit */long long int) var_7);
                    }
                    var_24 *= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (short)16426)), (5200041189307618022LL))), (((/* implicit */long long int) var_5))));
                    arr_37 [i_0] = ((unsigned short) (_Bool)1);
                    var_25 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)99));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_26 *= ((/* implicit */short) ((unsigned short) ((max((((/* implicit */long long int) (_Bool)1)), (var_16))) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [21LL]))))))));
                    var_27 &= ((/* implicit */_Bool) 7685128146919748521LL);
                    arr_41 [10LL] [i_5] [i_0] [10LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (signed char)-59))))), (var_10)))) ? (((max(((_Bool)1), ((_Bool)0))) ? (((((/* implicit */_Bool) (unsigned short)1932)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_7] [i_11])))) : (((((/* implicit */int) (unsigned short)31732)) - (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_28 = ((/* implicit */signed char) var_4);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) var_6);
                    arr_46 [i_7 + 2] [(unsigned char)6] [i_7 + 3] [i_0] = ((/* implicit */short) var_16);
                }
                var_30 = ((/* implicit */signed char) (-(arr_9 [i_0] [i_0] [i_7] [i_5] [i_0] [i_5])));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_14 = 3; i_14 < 19; i_14 += 2) 
                {
                    var_31 = ((((/* implicit */int) (unsigned short)18590)) & (((/* implicit */int) (unsigned char)156)));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_18 [i_5])))))))));
                }
                for (signed char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    var_33 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) < (((max((var_1), (var_4))) ? (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned short)46946)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) var_9))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)9046)) : (((/* implicit */int) (_Bool)1))));
                        var_35 = ((/* implicit */unsigned char) ((_Bool) var_16));
                    }
                    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) var_2);
                        var_37 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) arr_56 [i_0])));
                        var_38 = ((/* implicit */_Bool) (-(min((arr_21 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_58 [i_0]))))));
                        arr_60 [i_0] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_16)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))));
                    }
                    var_39 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) ((signed char) 4294967295U)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1566))) : ((((_Bool)1) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                }
                arr_61 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (2190869692U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((-2868721981492462693LL) + (2868721981492462713LL)))))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_13])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (signed char i_18 = 1; i_18 < 22; i_18 += 1) 
                {
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_67 [i_0] [i_5] [i_5] [i_0] [i_0] [i_13] = arr_43 [i_19] [i_18] [i_13] [i_0];
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)29536))) ? (((/* implicit */long long int) ((/* implicit */int) ((((17211818020861541587ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) != (7627013332161136564ULL))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_57 [i_0] [i_5] [i_13] [i_18]))))) : (var_16))))))));
                            arr_68 [i_19] [(unsigned short)16] [i_13] [i_13] [(unsigned short)16] [i_0] |= ((/* implicit */_Bool) ((var_4) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)234))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned int) var_12);
            }
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [15LL] [i_0] [i_5] [i_0]))) : (min((((/* implicit */long long int) var_2)), (2868721981492462693LL)))));
            var_43 = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)47621)) & (((/* implicit */int) (short)-21743)))), (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
            var_44 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_29 [i_5] [i_5] [i_5])))));
        }
        for (unsigned char i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
        {
            arr_72 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)43123);
            var_45 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)67))))) : (10326706273005023342ULL))), (((/* implicit */unsigned long long int) -3360989507388445419LL))));
            var_46 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_0]))))) : (min((((/* implicit */unsigned int) (unsigned short)0)), (var_7)))))));
        }
        arr_73 [i_0] = ((/* implicit */_Bool) max((max((var_15), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)0)))));
        arr_74 [i_0] = var_8;
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) var_12))));
    }
    var_48 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((long long int) (unsigned short)35999)) : ((~(var_16))))) >> (((((/* implicit */int) var_12)) - (16777)))));
    var_49 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (max((((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_11))))));
}
