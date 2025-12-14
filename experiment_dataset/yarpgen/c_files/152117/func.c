/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152117
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
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56914))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))))) >= ((-(((/* implicit */int) (unsigned short)33094))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(513619849U)));
                            var_13 += (((((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3])))) - (((arr_10 [(short)6]) / (((/* implicit */int) arr_9 [i_2])))))) % ((~(((/* implicit */int) arr_0 [i_1 - 1] [i_0 + 2])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) (!(((88802264U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57870)))))))) >> (((((arr_1 [i_0 - 1]) - (((/* implicit */int) arr_5 [i_1 - 1] [i_0 - 1] [i_0] [i_1 - 1])))) - (2037095640))))))));
                var_15 = ((/* implicit */unsigned char) (((+((~(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [(short)9])))))) > ((-(((((/* implicit */int) arr_9 [i_0])) + (((/* implicit */int) arr_5 [3U] [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) * (((/* implicit */int) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_3)) + (103))))) <= (((/* implicit */int) ((((/* implicit */_Bool) 3297720174U)) || (((/* implicit */_Bool) 3126257952191422536LL))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_17 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_4] [i_4]))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((var_0) + (((/* implicit */int) (unsigned short)8622))))));
            arr_18 [i_4] [(unsigned short)1] = ((/* implicit */unsigned char) (-(arr_15 [i_5] [i_4])));
        }
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)15))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)7665))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            for (int i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_8 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_7])))))));
                        var_19 = ((-3126257952191422537LL) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))));
                        var_20 += (-(((/* implicit */int) (unsigned char)76)));
                        arr_31 [i_6] [i_6] [(unsigned short)6] [i_6] [(unsigned short)10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-36))));
                        arr_32 [i_8] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            arr_36 [i_6] [i_6] = ((var_7) << (((/* implicit */int) arr_21 [i_6 - 1])));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (signed char i_12 = 2; i_12 < 11; i_12 += 2) 
                {
                    {
                        arr_43 [i_6] [i_6] [(_Bool)1] [i_6] [i_10] |= ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6 - 1]))) + (arr_37 [i_12])))));
                        arr_44 [i_6] [11U] [i_6] [i_12 - 2] = ((/* implicit */short) (-(0LL)));
                    }
                } 
            } 
            arr_45 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned short)8633))));
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(2233305153U))))));
            arr_46 [i_6] [i_10] = ((/* implicit */unsigned int) ((arr_10 [i_6 + 1]) / (((/* implicit */int) var_3))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 2; i_15 < 20; i_15 += 4) 
            {
                for (unsigned int i_16 = 1; i_16 < 20; i_16 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_58 [18] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_53 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))) + (((((/* implicit */int) var_6)) / (((/* implicit */int) (short)25408))))));
                    }
                } 
            } 
        } 
        arr_59 [i_13] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_17 = 0; i_17 < 18; i_17 += 4) 
    {
        var_23 += ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
        var_24 = ((/* implicit */_Bool) ((2233305153U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8603)))));
        var_25 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_61 [(signed char)12]))));
    }
    for (unsigned short i_18 = 1; i_18 < 18; i_18 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) (((-((+(((/* implicit */int) arr_54 [i_18] [i_20])))))) - ((((+(((/* implicit */int) (unsigned short)57848)))) + ((+(((/* implicit */int) var_6))))))));
                    arr_74 [i_19] [i_19] [0U] = ((/* implicit */signed char) (-(((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))))))));
                    var_27 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) (+(arr_52 [i_20])))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57871))) - (-4470946516589493358LL))))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((var_0) + (((/* implicit */int) (short)-25409))))) + (((arr_52 [i_20]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_18]))))))))));
                    arr_75 [i_19] [i_19] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_69 [17U] [i_18 + 1] [i_18 - 1]))) ^ (var_7))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224))))))))));
                }
            } 
        } 
        var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) || ((_Bool)1)));
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((arr_73 [(signed char)12] [i_18] [i_18 - 1]) | (arr_73 [i_18] [i_18 + 1] [i_18 + 1]))) < ((+(((/* implicit */int) (short)-1)))))))));
        var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) >> (((((/* implicit */int) (short)-25418)) + (25432)))));
    }
    for (unsigned short i_21 = 1; i_21 < 18; i_21 += 4) /* same iter space */
    {
        var_31 = ((((2812806551397566170LL) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_72 [i_21] [i_21 + 1] [i_21] [i_21 - 1])) >= (((/* implicit */int) (unsigned short)956)))))));
        arr_79 [i_21] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) > ((+(((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) (~(var_10))))));
    }
    /* vectorizable */
    for (unsigned short i_22 = 1; i_22 < 18; i_22 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 19; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 2; i_25 < 15; i_25 += 4) 
                    {
                        for (signed char i_26 = 4; i_26 < 15; i_26 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) ((var_9) != (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1)))))));
                                arr_93 [i_22] [i_25] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_54 [i_22 + 1] [i_22 + 1]))));
                                var_33 -= ((/* implicit */short) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((var_10) - (3498370946U)))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */signed char) ((var_10) | (var_4)));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_83 [i_23]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)25388)))))) || (((/* implicit */_Bool) 1492782435U)))))));
                }
            } 
        } 
        var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_64 [i_22] [i_22 + 1])) + (((/* implicit */int) var_3))));
    }
}
