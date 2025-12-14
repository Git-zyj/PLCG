/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164760
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
    var_17 = max((((/* implicit */unsigned long long int) ((unsigned int) (-(var_14))))), (((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4))) % (((/* implicit */unsigned long long int) var_1)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_18 = min((((/* implicit */long long int) (-2147483647 - 1))), (-5169938255924813283LL));
        var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (unsigned char)255))))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((unsigned int) arr_1 [i_0])) / (2719473318U))))));
        arr_2 [i_0] = ((int) (+(1575493977U)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned char) (+(arr_1 [i_1])));
        arr_6 [i_1] = ((/* implicit */unsigned char) (short)13667);
        var_22 &= ((/* implicit */long long int) -425252665);
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)224))))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) arr_0 [i_2]);
        arr_10 [15] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_0 [i_2]) : (arr_0 [i_2]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(2147483640)))), (((unsigned int) var_12)))))));
        arr_11 [i_2] = ((/* implicit */int) ((unsigned char) max((min((16665846103217128195ULL), (((/* implicit */unsigned long long int) (signed char)-79)))), (((/* implicit */unsigned long long int) ((1064303136U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (short i_4 = 2; i_4 < 20; i_4 += 1) 
            {
                {
                    var_24 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 503170547)) ? (arr_0 [13ULL]) : (-7088933807568529542LL))))), (((((/* implicit */_Bool) arr_12 [(unsigned char)3] [i_4 - 2] [(unsigned char)3])) ? (min((((/* implicit */unsigned int) arr_3 [i_2])), (318091762U))) : (((/* implicit */unsigned int) 503170547))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                                var_26 ^= (-(max((arr_20 [i_2] [i_4 + 1] [(unsigned char)19] [i_5 + 2]), (((/* implicit */unsigned int) -2147483646)))));
                                var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_16 [i_5] [i_3] [i_5])), (((((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_4] [i_4])) ? (arr_20 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))))) | (1168248685U)))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) max((17495701121932814613ULL), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2])))))) / (arr_18 [i_2] [(short)10] [i_3] [(short)10] [i_5] [(short)10] [i_3])));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) / (5449028663424089903LL))));
                    arr_21 [i_2] [i_3] [i_2] = ((int) (-(2147483647)));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_30 += ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) ((short) arr_22 [i_2] [i_2] [i_4 - 2] [i_7]))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_27 [i_3] [i_3] [i_4] [i_3] [i_3] = ((2353138844U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))));
                            arr_28 [i_3] [i_7] [i_4] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) 2719473318U);
                        }
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((1261846126U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17915187724331677123ULL)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) arr_24 [i_3] [i_3]))))))))));
                    }
                    for (int i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) arr_12 [i_2] [i_2] [i_2]);
                        var_33 = ((/* implicit */_Bool) (signed char)78);
                        arr_31 [i_2] [i_2] [i_4] [i_3] [i_9] [i_2] = ((/* implicit */unsigned int) (short)-16384);
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_2] [(short)10]))))), (max((((long long int) 1440189433)), (9223372036854775807LL)))));
    }
    /* LoopNest 2 */
    for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
    {
        for (signed char i_11 = 1; i_11 < 17; i_11 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_35 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (short)-21401)), (var_14)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_10]))))) : (-503170548)));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            {
                                arr_48 [i_14] [i_10] [2] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13668))) + (((arr_39 [i_10 + 2] [i_11 + 1]) + (arr_39 [i_10 - 1] [i_11 + 4])))));
                                var_36 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */int) (unsigned char)195)), (arr_44 [i_11 + 3] [i_11 + 1] [i_13] [i_13]))));
                                arr_49 [i_12] [i_10] [i_12] [i_12] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)63)) ? (arr_23 [i_10 - 1] [(short)19] [i_11 + 3] [i_13]) : (4294967291U))), (((/* implicit */unsigned int) -1410298398))));
                                var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_12] [i_13] [i_14]))))) - (min((((/* implicit */int) (short)16378)), (-1440189434)))))) ? (arr_1 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_13]))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned int) ((-2027391216) | (((/* implicit */int) ((signed char) 21LL)))));
                    var_39 -= ((((/* implicit */_Bool) max((((/* implicit */int) ((short) -2027391218))), (((int) 503170546))))) ? (((/* implicit */int) arr_24 [i_10] [6U])) : (503170530));
                }
                arr_50 [2] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_10), ((unsigned char)133)))) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) (short)3849)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_10 + 1])))))));
                var_40 = ((/* implicit */unsigned int) (unsigned char)60);
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        {
                            var_41 += ((/* implicit */_Bool) ((unsigned char) arr_18 [i_10] [i_10] [i_11 + 2] [0U] [i_15] [i_15 - 1] [i_15]));
                            var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_16] [i_11 + 2] [i_10]))));
                            var_43 = (-(2551928449102553123LL));
                            /* LoopSeq 3 */
                            for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                            {
                                arr_60 [i_10] [i_11] [i_15 - 2] [i_15 - 2] = ((/* implicit */unsigned int) var_16);
                                var_44 = ((/* implicit */unsigned int) (unsigned char)60);
                                arr_61 [i_15] [i_15] [i_15] [16] [i_10] = (((_Bool)1) ? (((((((/* implicit */unsigned long long int) 2171826217U)) == (arr_42 [i_10] [i_10] [i_10] [i_10]))) ? (min((arr_32 [i_10]), (((/* implicit */unsigned int) arr_53 [i_16] [i_10] [i_10])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)16383))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3825))));
                                var_45 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)-16384)))));
                                var_46 = ((/* implicit */short) ((unsigned char) ((long long int) (-(((/* implicit */int) (_Bool)1))))));
                            }
                            for (short i_18 = 0; i_18 < 21; i_18 += 1) 
                            {
                                arr_64 [i_10] [i_11] [i_15] [i_11] [i_10] = ((/* implicit */long long int) arr_43 [i_18] [i_11 + 3] [i_10]);
                                arr_65 [i_10] [i_10] [i_10] [i_10] [i_10] [i_16] = max((-1LL), (((/* implicit */long long int) min((((((/* implicit */unsigned int) arr_53 [i_10] [i_10] [i_10])) * (arr_17 [i_10] [i_10 + 1] [16]))), (((/* implicit */unsigned int) max((23), (((/* implicit */int) var_16)))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                            {
                                arr_68 [i_10] [i_15] [i_16] [i_15] [i_11] [i_10] = ((/* implicit */long long int) arr_13 [i_10] [i_11 - 1]);
                                var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) var_1))));
                                var_48 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */long long int) ((unsigned int) -1))) : (arr_15 [i_10 + 1] [i_19 - 1] [i_16 + 1] [i_15 + 1])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_49 = ((/* implicit */unsigned long long int) var_11);
}
