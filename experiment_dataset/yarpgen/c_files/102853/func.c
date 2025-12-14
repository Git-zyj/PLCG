/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102853
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) / (((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_13 = min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))))), (((signed char) arr_0 [i_0 - 1])));
        var_14 = (!(((/* implicit */_Bool) var_7)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) < (((/* implicit */int) (unsigned char)1))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) ((_Bool) var_10));
            arr_13 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_12 [i_0]));
        }
    }
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_18 [i_5] [i_6] [i_7])))) > (((/* implicit */int) ((((/* implicit */int) min(((short)-4894), (var_1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))))))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_1)))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_5]))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_21 = ((/* implicit */long long int) var_2);
        /* LoopSeq 3 */
        for (short i_9 = 4; i_9 < 12; i_9 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (arr_27 [i_9 - 3] [i_9 - 3]))))));
            arr_30 [9] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) arr_6 [i_8] [i_9] [i_9]))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_26 [i_8] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8])))));
                /* LoopSeq 3 */
                for (int i_11 = 1; i_11 < 11; i_11 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) var_5);
                    arr_37 [i_8] [i_8] [i_9] [i_10] [i_10] [11U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-50))));
                    var_25 = ((/* implicit */signed char) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */_Bool) ((int) 2ULL));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
                        arr_40 [i_8] [i_8] [i_10] [i_11] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_8] [i_9 - 1] [i_11]))));
                    }
                    for (unsigned int i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) (unsigned char)247);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((var_4) >> (((arr_28 [i_9 - 3] [i_13 - 1]) - (17670190078606563946ULL))))))));
                        var_30 = (!(((/* implicit */_Bool) arr_42 [(unsigned char)10] [11U] [i_13 + 1] [i_11 + 1] [i_9 - 4] [i_9 - 4])));
                    }
                    var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_8] [i_9] [6U] [i_11]))));
                }
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    var_32 += ((/* implicit */long long int) (~(18446744073709551614ULL)));
                    var_33 += var_4;
                }
                for (short i_15 = 3; i_15 < 11; i_15 += 2) 
                {
                    var_34 = ((/* implicit */signed char) (!(arr_41 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_15 + 2])));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_0)))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_10))));
                }
            }
            arr_47 [i_8] [(unsigned char)9] = ((/* implicit */unsigned long long int) (unsigned short)43910);
        }
        for (signed char i_16 = 1; i_16 < 12; i_16 += 1) 
        {
            var_37 = ((((/* implicit */int) arr_11 [i_16 + 1] [i_16] [i_16] [i_16] [i_16])) < (((/* implicit */int) (unsigned char)1)));
            var_38 = ((((/* implicit */_Bool) -1185278857)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4));
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_2))));
        }
        for (unsigned char i_17 = 1; i_17 < 12; i_17 += 3) 
        {
            var_40 = ((/* implicit */long long int) (((!(var_9))) ? (((/* implicit */int) arr_10 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1])) : (((int) var_0))));
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_8] [i_17 - 1] [i_8])) && (((/* implicit */_Bool) ((arr_28 [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
            var_42 *= ((/* implicit */unsigned char) ((-1185278862) / ((+(((/* implicit */int) (_Bool)1))))));
        }
    }
    for (signed char i_18 = 1; i_18 < 10; i_18 += 2) 
    {
        var_43 = ((18446744073709551602ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            for (long long int i_20 = 3; i_20 < 12; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_21 = 1; i_21 < 11; i_21 += 2) 
                    {
                        for (signed char i_22 = 4; i_22 < 13; i_22 += 3) 
                        {
                            {
                                arr_67 [i_18] [i_20] [i_18] [i_20] [i_18] [i_22] [i_22] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) ((var_0) && (((/* implicit */_Bool) var_7)))))))), (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_7)) : (18446744073709551614ULL)))))));
                                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                                arr_68 [i_18] [i_19] [i_20] [i_20] [i_22] = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_8)))), (max((((((/* implicit */int) arr_60 [i_20])) & (((/* implicit */int) var_0)))), (((/* implicit */int) arr_9 [i_18] [i_22]))))));
                                var_45 |= ((unsigned int) arr_4 [i_18] [i_19] [i_20]);
                            }
                        } 
                    } 
                    var_46 += ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_4)))), (min((arr_56 [i_18 + 1]), (arr_56 [i_18 + 1])))));
                    arr_69 [i_18] [i_20] [i_20] = (-(max((((/* implicit */long long int) arr_61 [i_18 + 4] [i_18 + 4] [i_20 + 1] [i_20 + 2])), (arr_66 [i_20 + 1] [i_20 + 2] [i_18 + 2] [i_18 - 1]))));
                }
            } 
        } 
    }
}
