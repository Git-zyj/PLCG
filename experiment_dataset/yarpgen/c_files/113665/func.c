/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113665
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_19 *= ((/* implicit */unsigned char) 9223372036854775807LL);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned int) max(((_Bool)1), (((((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)150)))))))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_6 [i_0 - 1])), (2088217163246419278LL))), ((-(arr_1 [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))) - (min((1984U), (((/* implicit */unsigned int) var_10))))))));
        }
        var_21 -= arr_5 [i_0] [(_Bool)1] [i_0];
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2])) - (((/* implicit */int) arr_9 [i_2]))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((unsigned char) ((arr_1 [i_4] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned char) (((!(arr_16 [i_3] [i_4]))) ? (arr_8 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_5])))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5]))) : ((+(arr_1 [(unsigned char)10] [i_5])))));
                        arr_17 [i_3] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (((/* implicit */unsigned int) arr_14 [i_2]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)251)) - (((/* implicit */int) (unsigned char)255))));
                        var_27 = ((/* implicit */long long int) ((int) (unsigned char)108));
                        arr_21 [i_3] [i_4] [i_6] = ((/* implicit */_Bool) ((long long int) (unsigned char)249));
                        arr_22 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? ((~(arr_0 [i_3] [i_4]))) : (((/* implicit */long long int) arr_6 [i_6]))));
                    }
                    for (unsigned int i_7 = 4; i_7 < 9; i_7 += 3) 
                    {
                        arr_27 [1LL] [i_3] [(unsigned char)7] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_8))) >> (((((long long int) var_2)) - (3586834230LL)))));
                        arr_28 [i_3] = ((/* implicit */_Bool) ((unsigned char) arr_13 [i_7 - 3] [i_7 - 1] [i_7 + 2]));
                    }
                }
            } 
        } 
        arr_29 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) var_5));
    }
    var_28 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(908989052U)))) ? (((((/* implicit */_Bool) var_2)) ? (9LL) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) < (9007199254740864LL))))))), (((/* implicit */long long int) (+(min((var_4), (var_12))))))));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_17))) * (((((/* implicit */_Bool) ((unsigned char) (unsigned char)139))) ? (((var_18) ? (-2088217163246419279LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) var_4))))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned char) var_0)), (((/* implicit */unsigned char) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((unsigned int) var_10)), (((/* implicit */unsigned int) var_18))))));
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                {
                    var_31 *= ((/* implicit */unsigned char) (-((+(arr_0 [i_10 - 1] [i_10 - 1])))));
                    arr_39 [i_8] [(unsigned char)10] [i_9] = ((/* implicit */unsigned char) (-(arr_2 [(unsigned char)13])));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_32 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((3966390355U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11 - 1] [i_11 + 1])))))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)182))))));
                                arr_45 [i_9] [i_11] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */int) var_18)) : (var_12)))) < (((((/* implicit */_Bool) arr_11 [i_9] [i_9])) ? (arr_0 [i_8] [i_10]) : (((/* implicit */long long int) arr_32 [i_11 - 1])))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 72057594037927935LL)) ? (431735867U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3))))))) : (max((((/* implicit */long long int) ((var_11) - (((/* implicit */int) arr_42 [i_9] [i_11] [i_10] [i_12]))))), (min((arr_41 [i_9]), (((/* implicit */long long int) arr_26 [i_8] [i_9] [(unsigned char)2] [i_11] [i_11] [i_12]))))))));
                                arr_46 [i_9] [i_8] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((var_11), (((((/* implicit */_Bool) 2697484345U)) ? (((/* implicit */int) arr_20 [i_12] [4] [i_10])) : (((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8]))))))) <= (((arr_12 [i_10 - 1] [i_11 + 1] [i_10]) ? (arr_10 [i_10] [12LL]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)70)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
