/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137806
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0] [i_1] [i_0]));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_4))));
                            var_20 = ((/* implicit */int) arr_6 [i_3]);
                            var_21 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [1LL] [1LL] [i_2] [(signed char)3] [i_2] [i_4]))));
                            var_22 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_3])) ? (-6560458321230126460LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0] [i_4])))))));
                            var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_4]))) : (arr_6 [i_0])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_15 [i_5 - 2]);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_5 - 3] [i_7])) : (((/* implicit */int) ((((/* implicit */_Bool) 4197933891730649594LL)) || (((/* implicit */_Bool) arr_18 [i_0] [i_5] [i_6] [i_6])))))));
                            var_26 = ((/* implicit */signed char) arr_19 [i_0] [i_5] [i_6]);
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) ((signed char) -6560458321230126460LL));
            var_28 += ((/* implicit */unsigned short) (-(var_9)));
            var_29 = ((/* implicit */unsigned long long int) ((6560458321230126460LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (arr_12 [i_0] [i_5] [i_5] [3LL] [(unsigned short)3] [i_0])))))));
        }
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))) : (((arr_2 [i_9] [i_11]) >> (((arr_20 [i_10]) - (10427251053491702978ULL))))))))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)136)) >= ((-(((/* implicit */int) arr_18 [i_0] [i_9] [10LL] [i_11]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_32 ^= ((/* implicit */long long int) ((arr_12 [i_9] [i_9] [i_10] [(unsigned short)7] [i_9] [i_10]) || (arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned short)9] [i_0])));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_9] [i_0] [i_0]))) / (-6560458321230126460LL)))) ? (((/* implicit */long long int) arr_25 [i_0] [i_10] [i_9])) : (arr_2 [i_11] [i_0])));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) var_7);
                                var_35 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_7 [i_14] [i_13] [i_10] [i_9] [i_0]) : (((/* implicit */int) var_5))));
                                var_36 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_9])) * (((/* implicit */int) arr_8 [i_10] [i_10] [i_10] [i_10] [i_10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_0] [6] [i_0])) >= (((/* implicit */int) arr_35 [i_0] [i_0] [i_0]))));
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_34 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_39 -= ((/* implicit */int) var_3);
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_51 [i_15] [i_16] [i_17] [i_15] = -6560458321230126460LL;
                        arr_52 [i_15] [i_18] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_15] [i_15] [i_15] [i_15] [i_15] [9LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_15] [i_15] [i_16] [i_15] [i_17] [i_18]))) : (var_12)));
                        var_40 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [(signed char)2] [i_16] [4] [i_16]))));
                        var_41 &= ((/* implicit */int) ((signed char) arr_17 [(short)0] [i_17] [i_18]));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */unsigned char) arr_30 [i_15]);
                        arr_56 [i_15] [i_15] = (+((+(((/* implicit */int) arr_39 [i_15] [i_15] [i_17] [i_19] [i_15])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 3; i_20 < 10; i_20 += 1) 
                        {
                            var_43 &= ((/* implicit */signed char) (~((+(arr_3 [i_15])))));
                            var_44 = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_49 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))));
                        }
                        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_15] [i_16] [i_17] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -6560458321230126460LL)))) : (((unsigned long long int) -5533635489827664196LL)))))));
                        var_46 += ((/* implicit */unsigned long long int) ((arr_39 [i_15] [5ULL] [8U] [i_17] [5ULL]) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_19] [i_16] [i_15]))) : (arr_3 [i_15]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_15] [i_16] [(short)10])) && (((/* implicit */_Bool) var_6))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned short) (_Bool)0);
                                var_48 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11723))));
                                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_12 [i_22] [i_21] [i_21] [i_17] [9] [i_15])))))));
                            }
                        } 
                    } 
                    arr_65 [i_15] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) ((arr_3 [i_16]) / (arr_3 [i_17])));
                    var_50 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_17] [i_16] [(signed char)0])) || (((/* implicit */_Bool) arr_46 [i_17] [i_15] [i_15]))));
                    var_51 = ((/* implicit */unsigned long long int) ((unsigned int) arr_35 [i_17] [i_17] [i_17]));
                }
            } 
        } 
        var_52 = var_5;
        var_53 &= ((arr_6 [i_15]) == (arr_6 [i_15]));
    }
    for (int i_23 = 0; i_23 < 14; i_23 += 1) 
    {
        var_54 &= ((/* implicit */_Bool) ((unsigned char) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) max((-4308560042910940124LL), (6842230033009088791LL)))))));
        var_55 = ((((/* implicit */_Bool) ((arr_67 [i_23] [i_23]) ? (1767219451U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_23] [i_23])))))) ? (((arr_67 [i_23] [i_23]) ? (6560458321230126474LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((arr_67 [i_23] [i_23]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_67 [i_23] [i_23]))))));
    }
    var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned long long int) var_5)))))));
}
