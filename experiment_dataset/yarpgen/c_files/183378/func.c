/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183378
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
    var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17766254259623805028ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [0U] [1] [i_2] = (-(((((/* implicit */_Bool) max((arr_1 [i_1]), (var_8)))) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) var_5)) : (-90423891)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [5U] [i_2] [i_4] [i_4 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(arr_2 [i_1] [11LL])))), (((((/* implicit */_Bool) arr_12 [1] [i_2] [i_1 + 1] [i_3])) ? ((+(var_16))) : (((17766254259623805028ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_4 [i_1 - 1] [i_1 - 3])) == (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-8972131415164516520LL)))));
                                arr_14 [9ULL] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)38977)) | (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)1])) ? (((/* implicit */int) (short)-12170)) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2] [i_1 - 1]))))))) >= (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1 - 1] [i_2])), (max((var_0), (((/* implicit */unsigned long long int) var_4)))))));
                                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) 2599645811U);
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_3 [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((((((/* implicit */int) var_13)) > (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) var_1)) : (var_16))))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) (unsigned short)65528))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) (unsigned short)7936)) : (((/* implicit */int) arr_16 [i_5]))))) * (arr_17 [i_5])));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 17766254259623805028ULL)) ? (-469272033) : (((/* implicit */int) arr_18 [i_5]))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5])) << (((((/* implicit */int) arr_16 [i_5])) - (14013)))))) ? (((/* implicit */int) ((524272LL) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 17766254259623805012ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_14))) ? (((((/* implicit */int) arr_30 [i_7] [i_6 - 1] [i_7] [i_7] [i_8] [17U])) - (((/* implicit */int) (unsigned short)64174)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_16))))));
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6 - 2])) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) 680489814085746565ULL)) ? (((/* implicit */int) (unsigned short)55931)) : (((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                arr_37 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) : (var_10)))));
                                arr_38 [i_5] [i_6 - 2] [i_5] [i_7] [i_7] [i_11] = ((/* implicit */long long int) (unsigned short)9609);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 -= ((/* implicit */long long int) ((unsigned long long int) var_15));
                        arr_41 [i_5] [i_5] [i_6] [i_7] [i_12] [i_12] = arr_21 [i_6 + 1] [i_6 - 1] [i_6 + 1];
                        arr_42 [i_12] [i_7] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1334651794U)) ? (17766254259623805053ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)774)))));
                        arr_43 [i_5] [i_5] [i_5] [i_12] &= ((/* implicit */unsigned short) arr_35 [i_6 - 1] [i_5] [i_6 - 1] [i_5] [i_5]);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 17; i_15 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5263738996099934219ULL)) ? (((/* implicit */int) (short)-28709)) : (((/* implicit */int) (unsigned short)25831))))) ? (((((/* implicit */_Bool) (short)28708)) ? (680489814085746554ULL) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) (unsigned short)7)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) arr_44 [i_13]);
                                var_28 = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)31613), ((unsigned short)660)))) > (max((var_1), (((/* implicit */int) (unsigned short)31579))))));
                                arr_55 [i_13] [i_14] [i_14] [i_14] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned int) var_1)))), ((~(arr_27 [i_13] [i_14] [i_14] [i_16] [i_17])))))), (17766254259623805074ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_13] [i_13] [i_18]))) & (((arr_26 [i_18]) ? (arr_17 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31107)))))));
            arr_58 [i_13] [i_18] [i_18] = ((var_0) <= (arr_35 [i_13] [i_13] [i_13] [i_18] [i_18]));
            arr_59 [i_13] [i_13] [i_18] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) -717242930)));
            arr_60 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_18] [i_18] [15ULL] [i_13])) ? (var_16) : (((/* implicit */unsigned long long int) 66060288U))))) ? (2208886528U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_13] [i_18])))));
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 3; i_19 < 15; i_19 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((5967688164191246649ULL) >= (var_11))))) * (arr_53 [i_13] [i_13] [i_19 - 1] [0ULL]))))));
            var_31 = ((/* implicit */unsigned short) arr_25 [i_13]);
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [8ULL])) ? (arr_53 [i_13] [i_19] [(unsigned short)5] [i_19 - 1]) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) (unsigned short)9605)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))));
            var_33 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_48 [i_19 + 2] [i_19 - 2] [i_19 + 2] [i_19 + 4])));
        }
        var_34 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_30 [i_13] [i_13] [(unsigned short)16] [i_13] [i_13] [(unsigned short)14])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36400)) % (((/* implicit */int) (unsigned short)14098))))) : (((((/* implicit */_Bool) arr_40 [i_13] [i_13] [15U] [i_13] [15U])) ? (1670772884U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
        var_35 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (5967688164191246641ULL) : (((/* implicit */unsigned long long int) arr_23 [i_13] [i_13]))))) ? (((((/* implicit */_Bool) arr_50 [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) 4228907008U)) : (var_11))) : (((/* implicit */unsigned long long int) arr_23 [i_13] [i_13]))))));
        var_36 = ((/* implicit */short) max(((~(((long long int) (short)2047)))), (((/* implicit */long long int) var_13))));
    }
}
