/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140656
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_8 [i_1] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_10)))));
                        var_17 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59771)) == (((/* implicit */int) (signed char)-83)))))) : (1975598890U))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (short i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        arr_13 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) * (3742066284U)));
        var_20 -= ((/* implicit */unsigned int) var_3);
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -22))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            var_22 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) != (12U));
            var_23 *= ((/* implicit */short) ((unsigned short) (unsigned char)7));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            var_24 = ((/* implicit */short) 1998760461);
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) 1998760477))));
            /* LoopSeq 3 */
            for (short i_8 = 3; i_8 < 14; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (1389867852U)));
                            arr_28 [i_5] [i_10] [i_8 - 3] [1] [i_10] [i_10] = ((/* implicit */unsigned char) ((unsigned int) ((1192955370U) << (((((/* implicit */int) (unsigned char)221)) - (191))))));
                            var_27 = ((/* implicit */int) var_16);
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((unsigned int) 1998760465)))));
                            arr_29 [i_5] [i_7] [i_5] [i_9 + 2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 22)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (2374286562U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17457)))));
                var_30 = ((/* implicit */short) (+(((/* implicit */int) (short)17477))));
            }
            for (short i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((int) 3953537171U)))));
                arr_32 [i_5] = ((/* implicit */unsigned int) ((signed char) var_4));
            }
            for (signed char i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+(var_10))))));
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) + ((+(4294967284U))))))));
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    var_34 = (+(var_10));
                    var_35 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (1951823408U)));
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 1; i_14 < 11; i_14 += 4) 
                    {
                        arr_41 [i_5] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((unsigned char) (short)-17457)))));
                        var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
                        var_38 = var_1;
                        var_39 = ((/* implicit */unsigned char) (-(var_10)));
                    }
                    for (short i_15 = 3; i_15 < 14; i_15 += 1) 
                    {
                        arr_46 [i_12] [i_7] [i_12] = ((/* implicit */unsigned int) ((_Bool) var_3));
                        var_40 = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) var_12))));
                        var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (short)15537))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 12; i_16 += 2) 
                    {
                        arr_50 [i_12] [i_7] [(_Bool)1] [(_Bool)1] [i_13] [11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (-22) : (((/* implicit */int) ((112411332) != (((/* implicit */int) (_Bool)0)))))));
                        var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
                    }
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    var_43 = ((/* implicit */unsigned int) ((-112411333) + (((/* implicit */int) (_Bool)1))));
                    var_44 = ((/* implicit */short) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_56 [i_12] = ((_Bool) (_Bool)1);
                    arr_57 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1998760459)) ? (((/* implicit */int) (_Bool)1)) : (-112411335)));
                }
            }
        }
        for (unsigned int i_19 = 2; i_19 < 14; i_19 += 1) 
        {
            var_45 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (short)29160)) || ((_Bool)0))))) ? (((/* implicit */int) (short)29168)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19)) ? (-112411333) : (((/* implicit */int) (unsigned char)0))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3491063481U))))))))));
                arr_65 [i_5] [(unsigned short)7] [i_5] [i_20] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned int) 112411348)) : ((-(var_14))))) << (((1920680733U) - (1920680708U)))));
            }
            arr_66 [i_5] [i_19] [i_19] = ((/* implicit */_Bool) 4294967295U);
            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) == (112411348))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)0)))))));
        }
    }
    for (short i_21 = 0; i_21 < 11; i_21 += 1) 
    {
        var_48 = ((/* implicit */short) (unsigned char)255);
        arr_71 [(short)6] = ((/* implicit */unsigned int) (((~((+(var_11))))) >= (((((/* implicit */_Bool) (-(341430124U)))) ? (((/* implicit */int) (short)30977)) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
    }
    var_49 = 2U;
}
