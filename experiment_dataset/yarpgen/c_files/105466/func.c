/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105466
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)29130)) ? (437383696909898080LL) : (1556382669937699694LL))) | (var_7)))) ? (((long long int) max((arr_2 [10LL] [10U]), (16773120LL)))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -1556382669937699694LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24576))) : (arr_3 [6LL])))))));
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) ((7230489148560410867LL) == (((/* implicit */long long int) 4244858510U))))))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max(((~(min((arr_0 [9]), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) 0)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 4 */
    for (short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_4 [12])) > (1556382669937699694LL)))), (min((((/* implicit */unsigned long long int) var_9)), (arr_5 [(short)19])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1556382669937699686LL)) ? (var_7) : (arr_2 [i_2] [13U])))) ? (max((((/* implicit */long long int) (short)516)), (1556382669937699695LL))) : (((((/* implicit */_Bool) arr_3 [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9))))) : (min((((long long int) -1556382669937699706LL)), (((/* implicit */long long int) arr_4 [i_2]))))));
        var_18 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-6740230070628216784LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)-18313)) : (((/* implicit */int) (unsigned short)46840))))), (7885283500111978326LL)));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((max((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) ^ (var_8))), (((/* implicit */long long int) arr_1 [i_3])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_3]))))))))));
        arr_9 [i_3] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (9223372036854775807LL))) : (((((/* implicit */_Bool) arr_1 [(signed char)11])) ? ((~(var_0))) : (((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_18 [i_4] [i_4] [12] = ((/* implicit */long long int) (+(((/* implicit */int) max(((short)516), (((/* implicit */short) ((arr_13 [i_4] [(short)14] [7U]) < (((/* implicit */long long int) 0))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((signed char) 13228747433403999504ULL));
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51524))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_19 [(unsigned short)13] [i_5] [(unsigned short)13] [i_7] [i_8])), (var_4)))) : ((-(((/* implicit */int) arr_11 [i_5] [i_8]))))))), ((~((~(arr_7 [i_7])))))));
                                var_22 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((var_7) < (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))))))))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_6] [i_7] [i_7 - 1])))))));
                                var_23 = ((/* implicit */_Bool) max(((~(arr_7 [i_7]))), (((((/* implicit */_Bool) ((long long int) (unsigned short)65520))) ? (min((var_11), (arr_7 [i_7]))) : (((/* implicit */long long int) ((int) var_1)))))));
                                arr_24 [i_7] [i_7] = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(1556382669937699699LL)))) ? (((16872769647707104310ULL) % (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) <= (arr_17 [i_4] [i_4] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((long long int) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) arr_16 [(signed char)6] [(signed char)6] [i_4] [i_4]))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_17 [i_4] [i_4] [19ULL]))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 18; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_12] [i_12 - 1] [i_12 + 2] [i_12 - 1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) ((arr_34 [i_4] [i_4] [19U] [i_9] [i_4] [0LL] [(short)12]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_4)) ? (-1556382669937699711LL) : (1556382669937699692LL))) : (((((/* implicit */long long int) arr_8 [i_10] [i_9])) / (-9223372036854775798LL))))) : (var_11)));
                                var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)115)), ((unsigned short)65535)));
                                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_6)), (-1556382669937699688LL)))))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (short)-5))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_3))));
                    var_29 = ((/* implicit */int) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_1)))) ? (9001207248732136110LL) : (((/* implicit */long long int) ((int) arr_13 [i_4] [i_9] [i_10])))))));
                    arr_36 [9ULL] [i_9] [i_9] [9ULL] = ((/* implicit */long long int) min((min((4ULL), (((/* implicit */unsigned long long int) arr_15 [i_4] [12])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_30 [i_9])), ((-(arr_32 [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [3LL]))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 20; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        arr_43 [i_13] = ((/* implicit */signed char) arr_27 [10LL] [15U]);
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -1556382669937699695LL))) >> ((((-(var_5))) + (4786632618431218468LL)))))), (((((/* implicit */_Bool) ((unsigned short) (short)-1152))) ? (((((/* implicit */_Bool) var_1)) ? (var_8) : (var_11))) : (-9001207248732136110LL))))))));
                        var_31 ^= ((/* implicit */int) 1556382669937699692LL);
                        arr_44 [14] [i_15] [i_15] [i_14] &= ((/* implicit */signed char) 540602516);
                    }
                } 
            } 
        } 
    }
    for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        var_32 ^= ((/* implicit */int) (-(-8378815167867844758LL)));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 21; i_17 += 1) 
        {
            for (int i_18 = 1; i_18 < 19; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 1) 
                        {
                            {
                                var_33 |= ((/* implicit */short) ((unsigned short) (short)-1));
                                var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_54 [i_19 + 3] [i_19 + 4] [i_19 + 3] [i_16])))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((arr_49 [i_16] [i_18 - 1] [i_16]) ^ (arr_47 [i_18 + 1] [8LL]))) ^ (((/* implicit */long long int) (~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_53 [(signed char)9] [i_17] [i_17])) : (((/* implicit */int) arr_46 [i_16]))))))))))));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        for (signed char i_22 = 3; i_22 < 17; i_22 += 3) 
                        {
                            {
                                var_36 += ((/* implicit */short) ((signed char) ((long long int) var_6)));
                                var_37 = (-(4ULL));
                                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((-1257964974) + (2147483647))) << (((1573974426002447306ULL) - (1573974426002447306ULL))))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned long long int) var_6);
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) var_7))));
                }
            } 
        } 
        var_41 += ((/* implicit */short) ((unsigned int) max((((/* implicit */short) var_6)), (arr_45 [i_16]))));
        var_42 = ((((/* implicit */_Bool) arr_55 [i_16] [i_16] [(unsigned short)5] [i_16] [i_16])) ? (max((var_5), (((/* implicit */long long int) ((unsigned short) arr_53 [i_16] [i_16] [(signed char)12]))))) : (((long long int) max((((/* implicit */long long int) (unsigned short)18703)), (arr_47 [i_16] [i_16])))));
    }
}
