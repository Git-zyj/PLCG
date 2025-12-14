/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134011
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)25))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_21 = (!(((/* implicit */_Bool) var_8)));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_1] [i_3] [i_3])))))));
                        var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-29900))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)163)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_18 [i_0] [(_Bool)1] [i_5] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)116))));
                        arr_19 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29893)) ? (((/* implicit */unsigned int) 745015583)) : (((((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_4] [i_6])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
                        var_25 |= ((/* implicit */unsigned short) (unsigned char)227);
                    }
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_22 [i_0] [i_0] &= ((/* implicit */int) var_12);
                        var_26 += ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-29900))))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)29900))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) (signed char)78);
                            var_29 = ((/* implicit */unsigned long long int) var_0);
                            arr_25 [i_8] [i_4] [i_8] [i_7] [i_8] = (~((-(((/* implicit */int) var_1)))));
                            arr_26 [i_0] [i_4] [(unsigned short)9] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-29921))))));
                        }
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_13))));
                            arr_29 [i_0] [i_4 - 3] [i_4 - 3] [i_5 - 1] [i_4 - 3] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7] [(unsigned char)15] [i_4 + 1] [i_7]))) : (((((/* implicit */_Bool) var_15)) ? (var_13) : (var_6)))));
                        }
                        arr_30 [i_0] [i_0] [i_4] [8ULL] [i_5] [i_0] = ((/* implicit */unsigned char) var_19);
                    }
                    for (unsigned short i_10 = 2; i_10 < 14; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) 3973809157U))));
                        arr_33 [i_10] [i_4 - 3] [i_4 - 3] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_14))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) 321158133U);
                        arr_36 [i_0] [i_11] = ((/* implicit */unsigned short) (unsigned char)83);
                        var_33 += ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned char)236))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1610199355232575762ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (short)-29878)) : (((/* implicit */int) var_16))))) : (arr_32 [i_4] [i_5] [i_11])));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_12 = 2; i_12 < 16; i_12 += 3) 
        {
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_15 [i_0]))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_12] [i_12 - 2] [i_12] [i_12] [i_12 + 1] [12LL])) + (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_9)))))));
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (unsigned short)49763))));
            /* LoopNest 3 */
            for (short i_13 = 2; i_13 < 16; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_38 += ((/* implicit */short) (~(3973809163U)));
                            arr_46 [i_12] [i_12 - 2] [(short)15] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */long long int) var_19);
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_11)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (321158132U)));
                        }
                    } 
                } 
            } 
        }
    }
    var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) var_2))));
    var_41 = ((/* implicit */int) (+(1085182131884792899LL)));
    var_42 = ((/* implicit */short) max((var_11), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (8325017227744231130LL))), (((/* implicit */long long int) var_18)))))));
}
