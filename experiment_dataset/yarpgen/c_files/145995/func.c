/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145995
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
    var_18 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (9732070580938441301ULL) : (((/* implicit */unsigned long long int) 0LL))))) ? (((/* implicit */int) var_8)) : ((-(1423052670))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1 - 1] = ((/* implicit */_Bool) (+((-(arr_0 [i_0 + 1])))));
                arr_5 [i_0 - 1] [(unsigned short)3] [i_1] = ((/* implicit */signed char) min((max((max((9732070580938441301ULL), (var_0))), (((/* implicit */unsigned long long int) (+(var_10)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8714673492771110315ULL)) ? (((/* implicit */long long int) 130816U)) : (0LL))) / (((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) var_7))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)23835))));
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((short)23851), (arr_8 [i_2]))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_15 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2]))));
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) (-(12496495117846338949ULL)));
                        arr_22 [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) var_8);
                        var_22 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                    }
                } 
            } 
            arr_23 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9732070580938441321ULL)) ? (17128157372081343000ULL) : (var_4)))) ? (((/* implicit */unsigned long long int) var_5)) : (((9732070580938441301ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))))));
            var_23 = ((long long int) (signed char)-90);
        }
        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 2] [i_3 + 3])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) var_15))));
            var_25 = ((/* implicit */unsigned int) ((((var_11) + (9223372036854775807LL))) << (((arr_26 [i_7 + 1]) - (3624369942U)))));
            var_26 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned short)15))))));
            var_27 = (~(var_14));
        }
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((arr_2 [(unsigned short)10]) | (arr_2 [(short)2]))))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                {
                    arr_31 [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3])) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_8] [i_3 + 1] [i_9 - 1])) + (8741))) - (31)))));
                    arr_32 [i_8] [i_9 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9732070580938441315ULL)) ? (((/* implicit */int) (unsigned char)136)) : (0)))) ? (arr_26 [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        var_29 = (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_33 [i_10] [i_10])) : (((/* implicit */int) arr_33 [i_10] [i_10])))));
        arr_35 [i_10] = ((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) (unsigned char)218))), (arr_33 [i_10] [i_10])));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        arr_39 [i_11] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))));
        var_30 = (~(var_16));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        arr_42 [i_12] [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_12] [i_12]))));
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 19; i_13 += 2) 
        {
            for (signed char i_14 = 2; i_14 < 21; i_14 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        arr_52 [i_12] [i_12] [i_15] = ((/* implicit */signed char) (-(17214952000466547528ULL)));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_13 + 3])) ? (((/* implicit */int) arr_34 [i_13 - 1])) : (((/* implicit */int) arr_34 [i_13 + 2]))));
                    }
                    arr_53 [i_12] [i_13 + 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)126))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (2391592430U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_34 [i_12]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) (short)-32765);
                                arr_58 [i_12] [i_13 - 2] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)126))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_13 + 2] [i_14 - 1])) ? (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13 - 3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_34 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_62 [i_18]))))));
        arr_63 [i_18] = (-((~((((_Bool)1) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_6)))))));
        arr_64 [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (1684876000)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [(short)20]))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((arr_62 [i_18]) - (712850289)))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1172632193)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_61 [i_18] [i_18]))))) ? ((-(var_14))) : (((/* implicit */int) arr_60 [i_18] [i_18])))))));
    }
}
