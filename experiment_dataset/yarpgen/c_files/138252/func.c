/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138252
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
    var_12 -= ((/* implicit */short) ((((/* implicit */int) var_5)) & ((-((+(((/* implicit */int) var_8))))))));
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (signed char)-92))))), ((~(2694637433U))))) == (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (short)-10818)) : (((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                    var_15 = ((/* implicit */unsigned short) (+((((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (short)3288)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((short) ((((unsigned int) (unsigned short)8158)) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))));
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)64)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                arr_17 [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_8)))))));
                arr_18 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */short) (_Bool)1);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22039)) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_10 [i_0] [i_0]))));
            }
            for (int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_18 = ((((/* implicit */int) ((unsigned short) var_9))) >= (((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) -1183757982))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_3] [i_0])) >> (((((/* implicit */int) min((((/* implicit */short) arr_10 [i_3] [(unsigned short)7])), ((short)-32765)))) + (32773))))))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_3] [i_5] [i_6] [i_7]))))), ((+(((/* implicit */int) (signed char)-23)))))))));
                            arr_29 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)9))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-92)))) != (((((/* implicit */_Bool) arr_12 [i_0])) ? (536805376U) : (3009681657U)))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 283371511U)))) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_23 *= arr_26 [i_9] [i_8] [i_5] [(unsigned short)1] [i_0];
                            arr_35 [i_3] [i_3] [(short)8] [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_6 [i_0] [i_3] [i_5] [i_3])) : (((/* implicit */int) (short)3288)))));
                            var_24 = ((/* implicit */unsigned short) (short)-10818);
                        }
                    } 
                } 
            }
            arr_36 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) var_7);
            var_25 |= ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)96)) && (((/* implicit */_Bool) (short)-10800))))) - (((/* implicit */int) var_5))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_26 = ((/* implicit */int) (+((-(((4011595785U) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 10; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_31 [i_10] [i_13]))))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) max((var_5), (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11 - 1]))))))));
                            var_28 = (+(((((/* implicit */_Bool) ((unsigned short) (unsigned char)203))) ? (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_10] [i_10])))) : (((/* implicit */int) (short)18309)))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)61440)))))));
            arr_50 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) arr_38 [i_0] [i_0]);
        }
        for (short i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            var_30 *= ((/* implicit */int) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_14]))) / (4011595785U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
            /* LoopNest 2 */
            for (unsigned short i_15 = 1; i_15 < 10; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) var_5)), (arr_38 [i_0] [i_15]))))))) ? (((/* implicit */int) (signed char)-60)) : ((+(((((/* implicit */int) arr_52 [i_0] [i_15 + 1])) * (((/* implicit */int) arr_32 [i_14] [i_15] [(short)4] [i_14] [i_14] [i_0] [i_14]))))))));
                        var_32 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)-13627))))));
                        arr_59 [i_0] [i_0] [i_14] [i_15 - 1] [i_15 + 1] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)22039))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_17 = 4; i_17 < 8; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_14])) - (((/* implicit */int) (unsigned short)49785)))))));
                            var_34 *= ((/* implicit */signed char) (unsigned short)47975);
                            arr_67 [i_0] [i_0] [i_17] [i_18] [i_19] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)3299)))), (((/* implicit */int) ((short) (short)-615)))))) ? ((~(max((((/* implicit */unsigned int) (unsigned short)17561)), (var_9))))) : (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (4294934528U)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    {
                        arr_72 [i_0] [i_21] [i_20] [i_14] [i_0] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (short)-3289)))));
                        arr_73 [i_0] [i_14] [i_14] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)28)))))))));
                        arr_74 [i_14] [i_0] [i_0] [i_21] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_11 [i_14] [i_20])))) - ((-(((/* implicit */int) (unsigned char)64))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_48 [i_0] [i_0] [(short)6] [i_0] [i_0])) : (((/* implicit */int) (signed char)14))))));
        }
        arr_75 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
        arr_76 [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)47975)), (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))) : (((/* implicit */int) ((unsigned short) 283371511U)))))));
    }
    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
    {
        arr_79 [i_22] = ((/* implicit */short) max((((((/* implicit */int) (short)8399)) ^ (((/* implicit */int) (short)-4442)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
        arr_80 [i_22] [(signed char)11] = ((/* implicit */unsigned char) (unsigned short)47975);
        arr_81 [i_22] = ((unsigned short) arr_78 [i_22]);
    }
    for (int i_23 = 4; i_23 < 16; i_23 += 1) 
    {
        var_36 = ((/* implicit */unsigned short) 2268595985U);
        var_37 = ((/* implicit */short) ((((/* implicit */int) (signed char)-119)) < (min((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_2))))), (51340369)))));
        var_38 = ((/* implicit */unsigned short) -51340370);
    }
    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 2) 
    {
        var_39 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) arr_45 [i_24] [i_24] [i_24] [i_24] [i_24])), (4294934528U))));
        arr_88 [9] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((short) var_3))))));
        var_40 |= ((/* implicit */signed char) var_10);
        var_41 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned short)13381))))));
    }
}
