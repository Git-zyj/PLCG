/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148065
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] = ((/* implicit */signed char) (-((~(((2305843009213693951ULL) | (((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_3]))))))));
                            var_14 = ((/* implicit */unsigned short) ((((_Bool) arr_4 [i_0] [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_4 [i_0] [i_1]))) : ((+(arr_4 [i_2] [i_1])))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [1ULL] [i_1] [7])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_7 [i_0] [0U] [i_0] [i_0]))))) ? (((arr_7 [i_3] [i_2] [11] [i_0]) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])))) : (((/* implicit */int) max((arr_9 [i_0] [i_1] [i_1] [i_3]), (arr_9 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1]))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned short)12372)))))) + (2147483647))) << (((((max((((/* implicit */int) ((signed char) arr_9 [(unsigned char)4] [i_1] [6LL] [i_0]))), ((~(((/* implicit */int) var_11)))))) + (37))) - (7))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (((~(max((14790102360756044952ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_5]))))))));
                            var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_4] [i_1] [i_1])) ? (arr_2 [i_4] [i_5]) : (((/* implicit */unsigned int) ((arr_8 [5LL] [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-32))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [(signed char)8] [i_1] [(signed char)8])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            {
                arr_26 [i_6] [(unsigned short)21] [i_6] = arr_22 [16ULL];
                var_18 = ((/* implicit */long long int) max((var_3), (var_3)));
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        arr_33 [i_8] [i_8] = ((/* implicit */unsigned short) (+(((arr_30 [9U] [i_8] [12LL] [i_8]) ? (((/* implicit */int) arr_25 [i_6] [(_Bool)1] [17U])) : (((/* implicit */int) arr_25 [i_7] [i_7] [i_9]))))));
                        var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_23 [i_6]))))));
                        var_20 = ((/* implicit */_Bool) ((arr_32 [i_6 - 1] [i_6 - 1]) / (arr_32 [i_6 + 2] [i_6 + 1])));
                    }
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        arr_37 [i_6] = ((/* implicit */signed char) arr_34 [i_6] [i_6 - 1] [i_8] [(unsigned char)2] [i_7]);
                        var_21 = ((/* implicit */unsigned short) var_2);
                    }
                    var_22 |= ((/* implicit */_Bool) ((arr_30 [22U] [i_6 + 1] [i_6 + 1] [7U]) ? (((((/* implicit */_Bool) -9223372036854775806LL)) ? (arr_34 [i_6 - 1] [i_7] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : (1536281909U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 23; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16140901064495857664ULL)) ? (((/* implicit */int) (unsigned char)255)) : ((~(((/* implicit */int) (unsigned short)13310))))))), (max((arr_39 [i_6 + 1] [i_11 + 1] [(unsigned short)19] [i_11 + 1]), (((/* implicit */unsigned long long int) 3464070476U))))));
                                var_24 = ((/* implicit */unsigned short) (+(var_7)));
                                var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_29 [7ULL] [7ULL])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 1; i_14 < 18; i_14 += 4) 
        {
            arr_48 [i_13] = ((/* implicit */unsigned short) var_3);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_28 [i_13]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 2101845585)) < (arr_43 [i_14] [i_14]))))) : (((((/* implicit */_Bool) arr_23 [i_13])) ? (arr_46 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            arr_49 [i_14] [i_13] = (+((+(arr_43 [i_14] [i_13]))));
            arr_50 [i_14] = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned short)18887)))) + (2147483647))) >> ((((~(((/* implicit */int) (signed char)118)))) + (139)))));
        }
        for (int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_34 [i_13] [i_13] [i_13] [i_13] [i_15]))));
            var_28 += ((/* implicit */unsigned int) var_5);
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    {
                        arr_60 [15] [i_15] [i_15] = ((/* implicit */unsigned short) (((~(var_7))) % (var_2)));
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_13] [(_Bool)1] [i_15] [i_16] [i_17]))));
                    }
                } 
            } 
        }
        arr_61 [6LL] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 1 */
        for (unsigned char i_18 = 4; i_18 < 18; i_18 += 3) 
        {
            var_30 *= ((((/* implicit */_Bool) ((var_5) >> (((/* implicit */int) (unsigned short)28))))) ? (((16140901064495857665ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned long long int) 3723092569U)));
            arr_64 [i_13] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)32534)))) / ((+(((/* implicit */int) (unsigned short)65518))))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 0; i_19 < 19; i_19 += 3) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned short i_21 = 1; i_21 < 15; i_21 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((short) ((((/* implicit */int) arr_47 [17LL])) | (((/* implicit */int) var_12))))))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_20 - 1] [i_21 + 3] [i_19])) ? (arr_45 [i_20 - 1] [i_21 + 4] [6ULL]) : (arr_45 [i_20 - 1] [i_21 + 4] [i_20 - 1])));
                            arr_73 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((unsigned short) arr_40 [(unsigned short)21] [(unsigned char)17] [(unsigned char)12] [i_20 - 1] [(unsigned short)0] [(unsigned short)0] [i_20]);
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
        }
        /* LoopNest 3 */
        for (unsigned char i_22 = 3; i_22 < 18; i_22 += 4) 
        {
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 4) 
            {
                for (unsigned short i_24 = 1; i_24 < 18; i_24 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((~(884709261224279137ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_24] [(unsigned char)1] [i_23] [i_22] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))));
                        arr_80 [i_24] [i_22] [i_23] [i_24] = (-((~(((/* implicit */int) arr_42 [(unsigned short)18])))));
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)60262)) ? (((/* implicit */int) (unsigned short)23234)) : (((/* implicit */int) var_8))))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_10) : (var_2))))))));
    var_36 = ((/* implicit */int) var_6);
}
